import Foundation

// MARK: - Native Swift Models for Apple Codable Benchmark
// These are the Swift-native equivalents used by JSONDecoder/JSONEncoder.
// The Ghost engine uses its own KMP models from the GhostBenchmarkShared framework.

struct CodableCharacterResponse: Codable, Sendable {
    let info: CodablePageInfo
    let results: [CodableGhostCharacter]
}

struct CodablePageInfo: Codable, Sendable {
    let count: Int
    let pages: Int
    let next: String?
    let prev: String?
}

struct CodableGhostCharacter: Codable, Sendable {
    let id: Int
    let name: String
    let status: String
    let species: String
    let type: String
    let gender: String
    let origin: CodableLocationRef
    let location: CodableLocationRef
    let image: String
    let episode: [String]
    let url: String
    let created: String
}

struct CodableLocationRef: Codable, Sendable {
    let name: String
    let url: String
}
