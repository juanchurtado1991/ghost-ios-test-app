import Foundation
import GhostBenchmarkShared

#if canImport(Alamofire)
import Alamofire
#endif

// MARK: - Benchmark Repository

//
// iOS competitors:
//   - Ghost (via KMP XCFramework)  →  Zero-reflection, compile-time serialization
//   - Apple Codable (JSONDecoder)   →  iOS industry standard
//
// Ghost models (CharacterResponse, GhostCharacter, etc.) come from the
// GhostBenchmarkShared XCFramework, compiled with @GhostSerialization by KSP.

actor BenchmarkRepository {
    
    private static let apiBaseURL = "https://rickandmortyapi.com/api/character/"
    private static let warmupIterations = 200
    private static let benchmarkIterations = 100
    private static let nanosPerMilli: Double = 1_000_000.0
    
    // MARK: - Ghost Engine Reference
    
    // Using the KMP bridge to avoid Swift generic type erasure issues
    private let ghostBridge = GhostBenchmarkBridge.shared
    
    // MARK: - Public API
    
    func runBenchmark(
        pageCount: Int,
        onStatusChange: @escaping (String) -> Void
    ) async throws -> [EngineResult] {
        let stressData = try await downloadStressData(pageCount: pageCount, onStatusChange: onStatusChange)
        
        await warmUpEngines(data: stressData, onStatusChange: onStatusChange)
        
        let parseStringResults = await benchmarkParseString(data: stressData, onStatusChange: onStatusChange)
        let parseBytesResults = await benchmarkParseBytes(data: stressData, onStatusChange: onStatusChange)
        let parseStreamingResults = await benchmarkParseStreaming(data: stressData, onStatusChange: onStatusChange)
        let writeStringResults = await benchmarkWriteString(data: stressData, onStatusChange: onStatusChange)
        let writeBytesResults = await benchmarkWriteBytes(data: stressData, onStatusChange: onStatusChange)
        let writeStreamingResults = await benchmarkWriteStreaming(data: stressData, onStatusChange: onStatusChange)
        let networkResults = await benchmarkNetworkStack(data: stressData, onStatusChange: onStatusChange)
        
        return parseStringResults + parseBytesResults + parseStreamingResults + writeStringResults + writeBytesResults + writeStreamingResults + networkResults
    }
    
    // MARK: - Data Download
    
    private func downloadStressData(
        pageCount: Int,
        onStatusChange: @escaping (String) -> Void
    ) async throws -> StressData {
        var allData: [Data] = []
        
        onStatusChange("Downloading Stress Data (\(pageCount) pages)...")
        
        for i in 1...pageCount {
            let url = URL(string: "\(Self.apiBaseURL)?page=\(i)")!
            let (data, response) = try await URLSession.shared.data(from: url)
            guard let httpResponse = response as? HTTPURLResponse, httpResponse.statusCode == 200 else {
                throw NSError(domain: "BenchmarkError", code: -1, userInfo: [NSLocalizedDescriptionKey: "API Error"])
            }
            allData.append(data)
        }
        
        let mergedString = mergePages(allData: allData, pageCount: pageCount)
        let mergedBytes = mergedString.data(using: .utf8)!
        return StressData(jsonString: mergedString, bytes: mergedBytes)
    }
    
    private func mergePages(allData: [Data], pageCount: Int) -> String {
        if pageCount == 1 {
            return String(data: allData[0], encoding: .utf8)!
        }
        
        let firstPage = String(data: allData[0], encoding: .utf8)!
        let infoPart = firstPage.components(separatedBy: "\"results\":").first ?? ""
        
        let resultsList = allData.map { data -> String in
            let s = String(data: data, encoding: .utf8)!
            var results = s.components(separatedBy: "\"results\":").last ?? ""
            if results.hasSuffix("}") { results = String(results.dropLast()) }
            results = results.trimmingCharacters(in: .whitespacesAndNewlines)
            if results.hasPrefix("[") { results = String(results.dropFirst()) }
            if results.hasSuffix("]") { results = String(results.dropLast()) }
            return results
        }.joined(separator: ",")
        
        return "\(infoPart)\"results\": [\(resultsList)]}"
    }
    
    // MARK: - Warm-Up (mirrors Android warmUpEngines)
    
    private func warmUpEngines(data: StressData, onStatusChange: @escaping (String) -> Void) async {
        onStatusChange("JIT Warmup (\(Self.warmupIterations)x)...")
        
        let decoder = JSONDecoder()
        let encoder = JSONEncoder()
        
        // Prewarm Ghost's serializer cache
        ghostBridge.prewarm()
        
        for _ in 0..<Self.warmupIterations {
            // Codable warmup
            _ = try? decoder.decode(CodableCharacterResponse.self, from: data.bytes)
            if let decoded = try? decoder.decode(CodableCharacterResponse.self, from: data.bytes) {
                _ = try? encoder.encode(decoded)
            }
            // Ghost warmup
            let _ = ghostBridge.parseCharacterResponse(json: data.jsonString)
        }
    }
    
    // MARK: - Parse STRING
    
    private func benchmarkParseString(data: StressData, onStatusChange: @escaping (String) -> Void) async -> [EngineResult] {
        onStatusChange("Benchmarking PARSE · STRING...")
        
        let ghostResult = await measureEngine(name: "[PARSE_STRING] Ghost") {
            _ = self.ghostBridge.parseCharacterResponse(json: data.jsonString)
        }
        
        let codable = await measureEngine(name: "[PARSE_STRING] Codable") {
            _ = try? JSONDecoder().decode(CodableCharacterResponse.self, from: data.bytes)
        }
        
        return [ghostResult, codable]
    }
    
    // MARK: - Parse BYTES
    
    private func benchmarkParseBytes(data: StressData, onStatusChange: @escaping (String) -> Void) async -> [EngineResult] {
        onStatusChange("Benchmarking PARSE · BYTES...")
        
        let kotlinBytes = toKotlinByteArray(data.bytes)
        
        let ghostResult = await measureEngine(name: "[PARSE_BYTES] Ghost") {
            _ = self.ghostBridge.parseCharacterResponseFromBytes(bytes: kotlinBytes)
        }
        
        let codable = await measureEngine(name: "[PARSE_BYTES] Codable") {
            _ = try? JSONDecoder().decode(CodableCharacterResponse.self, from: data.bytes)
        }
        
        return [ghostResult, codable]
    }
    
    // MARK: - Parse STREAMING
    
    private func benchmarkParseStreaming(data: StressData, onStatusChange: @escaping (String) -> Void) async -> [EngineResult] {
        onStatusChange("Benchmarking PARSE · STREAMING...")
        
        let kotlinBytes = toKotlinByteArray(data.bytes)
        
        let ghostResult = await measureEngine(name: "[PARSE_STREAMING] Ghost") {
            _ = self.ghostBridge.parseCharacterResponseStreaming(bytes: kotlinBytes)
        }
        
        // Codable doesn't support streaming API, so we measure its standard parse
        let codable = await measureEngine(name: "[PARSE_STREAMING] Codable") {
            _ = try? JSONDecoder().decode(CodableCharacterResponse.self, from: data.bytes)
        }
        
        return [ghostResult, codable]
    }
    
    // MARK: - Write STRING
    
    private func benchmarkWriteString(data: StressData, onStatusChange: @escaping (String) -> Void) async -> [EngineResult] {
        onStatusChange("Benchmarking WRITE · STRING...")
        
        guard let preDecoded = try? JSONDecoder().decode(CodableCharacterResponse.self, from: data.bytes) else { return [] }
        let ghostDecoded = ghostBridge.parseCharacterResponse(json: data.jsonString)
        
        let ghostResult = await measureEngine(name: "[WRITE_STRING] Ghost") {
            _ = self.ghostBridge.serializeCharacterResponse(value: ghostDecoded)
        }
        
        let codable = await measureEngine(name: "[WRITE_STRING] Codable") {
            _ = try? JSONEncoder().encode(preDecoded)
        }
        
        return [ghostResult, codable]
    }
    
    // MARK: - Write BYTES
    
    private func benchmarkWriteBytes(data: StressData, onStatusChange: @escaping (String) -> Void) async -> [EngineResult] {
        onStatusChange("Benchmarking WRITE · BYTES...")
        
        guard let preDecoded = try? JSONDecoder().decode(CodableCharacterResponse.self, from: data.bytes) else { return [] }
        let ghostDecoded = ghostBridge.parseCharacterResponse(json: data.jsonString)
        
        let ghostResult = await measureEngine(name: "[WRITE_BYTES] Ghost") {
            _ = self.ghostBridge.serializeCharacterResponseToBytes(value: ghostDecoded)
        }
        
        let codable = await measureEngine(name: "[WRITE_BYTES] Codable") {
            _ = try? JSONEncoder().encode(preDecoded)
        }
        
        return [ghostResult, codable]
    }
    
    // MARK: - Write STREAMING
    
    private func benchmarkWriteStreaming(data: StressData, onStatusChange: @escaping (String) -> Void) async -> [EngineResult] {
        onStatusChange("Benchmarking WRITE · STREAMING...")
        
        guard let preDecoded = try? JSONDecoder().decode(CodableCharacterResponse.self, from: data.bytes) else { return [] }
        let ghostDecoded = ghostBridge.parseCharacterResponse(json: data.jsonString)
        
        let ghostResult = await measureEngine(name: "[WRITE_STREAMING] Ghost") {
            _ = self.ghostBridge.serializeCharacterResponseStreaming(value: ghostDecoded)
        }
        
        // Codable doesn't support streaming API, so we measure its standard encode
        let codable = await measureEngine(name: "[WRITE_STREAMING] Codable") {
            _ = try? JSONEncoder().encode(preDecoded)
        }
        
        return [ghostResult, codable]
    }
    
    // MARK: - Measurement Utility
    //
    // Memory methodology: We measure the NET delta for each individual iteration
    // and compute the average. This is fair to both Ghost (Kotlin/Native GC, lazy
    // collection) and Codable (Swift ARC, instant release), because we capture the
    // actual working-set cost of ONE decode/encode cycle, not the GC's accumulated
    // heap between 100 iterations.
    
    private func measureEngine(name: String, block: () async -> Void) async -> EngineResult {
        var totalTimeNs: UInt64 = 0
        var totalMemBytes: Int64 = 0
        
        for _ in 0..<Self.benchmarkIterations {
            let beforeMem = getProcessMemoryBytes()
            let start = DispatchTime.now().uptimeNanoseconds
            await block()
            let end = DispatchTime.now().uptimeNanoseconds
            let afterMem = getProcessMemoryBytes()
            
            totalTimeNs += (end - start)
            let delta = afterMem - beforeMem
            if delta > 0 { totalMemBytes += delta }
        }
        
        let avgTimeMs = (Double(totalTimeNs) / Double(Self.benchmarkIterations)) / Self.nanosPerMilli
        let avgMemBytes = totalMemBytes / Int64(Self.benchmarkIterations)
        
        return EngineResult(name: name, timeMs: avgTimeMs, memoryBytes: avgMemBytes)
    }
    
    // MARK: - Network Stack (URLSession)
    
    private func benchmarkNetworkStack(data: StressData, onStatusChange: @escaping (String) -> Void) async -> [EngineResult] {
        onStatusChange("Benchmarking NETWORK STACKS (local replay)...")
        
        // Setup mocked URLSession
        MockURLProtocol.mockData = data.bytes
        let config = URLSessionConfiguration.ephemeral
        config.protocolClasses = [MockURLProtocol.self]
        let session = URLSession(configuration: config)
        let request = URLRequest(url: URL(string: "https://mock.rickandmorty.com/api")!)
        
        var results: [EngineResult] = []
        
        // NOTE: Ghost network benchmarks use the String API to avoid including the
        // Swift→KotlinByteArray byte-copy cost (toKotlinByteArray) inside the timed
        // block. That conversion is an interop overhead, not a Ghost overhead.
        // Both engines start from the same decoded Data and convert to their native
        // input type before the benchmark clock starts.
        let cachedJsonString = String(data: data.bytes, encoding: .utf8)!
        
        let ghostNet = await measureEngine(name: "[NETWORK] URLSession + Ghost") {
            // Simulate: URLSession delivers bytes → Ghost parses from String (real pipeline)
            if let (rawData, _) = try? await session.data(for: request) {
                let jsonStr = String(data: rawData, encoding: .utf8) ?? cachedJsonString
                let _ = self.ghostBridge.parseCharacterResponse(json: jsonStr)
            }
        }
        results.append(ghostNet)
        
        let codableNet = await measureEngine(name: "[NETWORK] URLSession + Codable") {
            if let (bytes, _) = try? await session.data(for: request) {
                _ = try? JSONDecoder().decode(CodableCharacterResponse.self, from: bytes)
            }
        }
        results.append(codableNet)
        
        #if canImport(Alamofire)
        let afConfig = URLSessionConfiguration.ephemeral
        afConfig.protocolClasses = [MockURLProtocol.self]
        let afSession = Alamofire.Session(configuration: afConfig)
        
        let alamofireGhostNet = await measureEngine(name: "[NETWORK] Alamofire + Ghost") {
            if let rawData = try? await afSession.request("https://mock.rickandmorty.com/api").serializingData().value {
                let jsonStr = String(data: rawData, encoding: .utf8) ?? cachedJsonString
                let _ = self.ghostBridge.parseCharacterResponse(json: jsonStr)
            }
        }
        results.append(alamofireGhostNet)
        
        let alamofireNet = await measureEngine(name: "[NETWORK] Alamofire + Codable") {
            if let data = try? await afSession.request("https://mock.rickandmorty.com/api").serializingData().value {
                _ = try? JSONDecoder().decode(CodableCharacterResponse.self, from: data)
            }
        }
        results.append(alamofireNet)
        #endif
        
        return results
    }
    
    // MARK: - Helpers
    
    private func toKotlinByteArray(_ data: Data) -> KotlinByteArray {
        let bytes = [UInt8](data)
        let kotlinArray = KotlinByteArray(size: Int32(bytes.count))
        for i in 0..<bytes.count {
            kotlinArray.set(index: Int32(i), value: Int8(bitPattern: bytes[i]))
        }
        return kotlinArray
    }
    
    private struct StressData {
        let jsonString: String
        let bytes: Data
    }
}

// MARK: - Mock URLProtocol

class MockURLProtocol: URLProtocol {
    static var mockData: Data?
    
    override class func canInit(with request: URLRequest) -> Bool { true }
    override class func canonicalRequest(for request: URLRequest) -> URLRequest { request }
    
    override func startLoading() {
        if let data = MockURLProtocol.mockData {
            client?.urlProtocol(self, didLoad: data)
            let response = HTTPURLResponse(url: request.url!, statusCode: 200, httpVersion: nil, headerFields: nil)!
            client?.urlProtocol(self, didReceive: response, cacheStoragePolicy: .notAllowed)
        }
        client?.urlProtocolDidFinishLoading(self)
    }
    
    override func stopLoading() {}
}
