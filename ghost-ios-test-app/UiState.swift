import Foundation

// MARK: - Engine Result (mirrors Android EngineResult.kt)

struct EngineResult: Identifiable {
    let id = UUID()
    let name: String
    let timeMs: Double
    let memoryBytes: Int64
}

// MARK: - UI State (mirrors Android UiState.kt)

struct UiState {
    var isLoading: Bool = false
    var loadingStatus: String = "PROFILING..."
    var errorMessage: String? = nil
    var results: [EngineResult] = []
    var sessionHistory: [String] = []
    var pageCount: Float = 20.0
}
