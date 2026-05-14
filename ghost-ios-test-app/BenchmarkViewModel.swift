import Foundation
import Combine

// MARK: - ViewModel (mirrors Android MainViewModel.kt)

class BenchmarkViewModel: ObservableObject {
    
    private let repository = BenchmarkRepository()
    
    @Published var uiState = UiState()
    
    func updatePageCount(_ count: Float) {
        uiState.pageCount = count
    }
    
    func runBenchmark() {
        guard !uiState.isLoading else { return }
        
        uiState.isLoading = true
        uiState.errorMessage = nil
        uiState.loadingStatus = "Initiating..."
        
        Task { @MainActor [weak self] in
            guard let self else { return }
            do {
                let engineResults = try await self.repository.runBenchmark(
                    pageCount: Int(self.uiState.pageCount)
                ) { [weak self] status in
                    DispatchQueue.main.async {
                        self?.uiState.loadingStatus = status
                    }
                }
                
                // Generate detailed log entry (mirrors Android)
                let runIndex = self.uiState.sessionHistory.count + 1
                var logEntry = "--- NATIVE iOS RUN #\(runIndex) ---\n"
                logEntry += "Stress Load: \(Int(self.uiState.pageCount)) pages\n"
                for res in engineResults {
                    logEntry += "\(res.name): \(String(format: "%.2f", res.timeMs))ms | \(res.memoryBytes / 1024)KB\n"
                }
                logEntry += "------------------------------\n\n"
                
                self.uiState.isLoading = false
                self.uiState.results = engineResults
                self.uiState.sessionHistory.append(logEntry)
                
            } catch {
                self.uiState.isLoading = false
                self.uiState.errorMessage = error.localizedDescription
            }
        }
    }
    
    func getExportLogs() -> String {
        return uiState.sessionHistory.joined(separator: "\n")
    }
}
