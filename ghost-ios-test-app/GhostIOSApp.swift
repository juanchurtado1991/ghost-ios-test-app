import SwiftUI

// MARK: - Main App Screen (mirrors Android GhostAndroidApp composable in App.kt)

struct GhostIOSApp: View {
    @StateObject private var viewModel = BenchmarkViewModel()
    
    var body: some View {
        ScrollView {
            VStack(spacing: 24) {
                benchmarkTitle
                benchmarkConfigCard
                runBenchmarkButton
                
                if let error = viewModel.uiState.errorMessage {
                    errorItem(error)
                }
                
                if !viewModel.uiState.results.isEmpty {
                    PerformanceResultsCard(
                        uiState: viewModel.uiState,
                        onCopyLogs: {
                            let logs = viewModel.getExportLogs()
                            if !logs.isEmpty {
                                UIPasteboard.general.string = logs
                            }
                        }
                    )
                }
            }
            .padding(.horizontal, 24)
            .padding(.vertical, 24)
        }
        .background(AppDesign.backgroundGradient)
    }
    
    // MARK: - Title (mirrors BenchmarkTitle)
    
    private var benchmarkTitle: some View {
        VStack(alignment: .leading, spacing: 0) {
            HStack {
                VStack(alignment: .leading, spacing: 0) {
                    Text("GHOST")
                        .font(.system(size: 32, weight: .black))
                        .foregroundColor(AppDesign.accentGlow)
                    Text("SERIALIZATION")
                        .font(.system(size: 32, weight: .black))
                        .foregroundColor(AppDesign.accentGlow)
                }
                Spacer()
                ZStack {
                    Circle()
                        .fill(AppDesign.accentGlow.opacity(0.1))
                        .frame(width: 80, height: 80)
                    Circle()
                        .fill(AppDesign.accentGlow.opacity(0.2))
                        .frame(width: 40, height: 40)
                }
            }
            Text("Native iOS Performance Lab")
                .font(.system(size: 14, weight: .medium))
                .foregroundColor(AppDesign.textSecondary)
                .padding(.top, 8)
        }
        .padding(.top, 24)
    }
    
    // MARK: - Config Card (mirrors BenchmarkConfigCard)
    
    private var benchmarkConfigCard: some View {
        VStack(spacing: 0) {
            HStack {
                Text("STRESS LOAD")
                    .font(.system(size: 12, weight: .heavy))
                    .foregroundColor(AppDesign.textPrimary)
                Spacer()
                Text("\(Int(viewModel.uiState.pageCount)) PAGES (x100)")
                    .font(.system(size: 12, weight: .heavy))
                    .foregroundColor(AppDesign.accentGlow)
            }
            
            Slider(
                value: Binding(
                    get: { viewModel.uiState.pageCount },
                    set: { viewModel.updatePageCount($0) }
                ),
                in: 1...20,
                step: 1
            )
            .tint(AppDesign.accentGlow)
            .padding(.top, 8)
        }
        .padding(24)
        .background(AppDesign.surfaceColor)
        .clipShape(RoundedRectangle(cornerRadius: 24))
        .overlay(
            RoundedRectangle(cornerRadius: 24)
                .stroke(AppDesign.glassBorder, lineWidth: 1)
        )
    }
    
    // MARK: - Run Button (mirrors RunBenchmarkButton)
    
    private var runBenchmarkButton: some View {
        Button(action: { viewModel.runBenchmark() }) {
            HStack {
                if viewModel.uiState.isLoading {
                    VStack(spacing: 4) {
                        ProgressView()
                            .tint(AppDesign.accentGlow)
                            .scaleEffect(0.8)
                        Text(viewModel.uiState.loadingStatus)
                            .font(.system(size: 10, weight: .medium))
                            .foregroundColor(AppDesign.accentGlow)
                    }
                } else {
                    Text("RUN STRESS COMPARISON")
                        .font(.system(size: 14, weight: .heavy))
                        .foregroundColor(AppDesign.accentGlow)
                }
            }
            .frame(maxWidth: .infinity)
            .frame(minHeight: 56)
        }
        .background(AppDesign.surfaceColor)
        .clipShape(RoundedRectangle(cornerRadius: 12))
        .overlay(
            RoundedRectangle(cornerRadius: 12)
                .stroke(AppDesign.accentGlow, lineWidth: 1)
        )
        .disabled(viewModel.uiState.isLoading)
    }
    
    // MARK: - Error (mirrors ErrorItem)
    
    private func errorItem(_ message: String) -> some View {
        Text("ERROR: \(message)")
            .font(.system(size: 12, weight: .medium))
            .foregroundColor(AppDesign.errorColor)
            .multilineTextAlignment(.center)
            .padding(16)
            .frame(maxWidth: .infinity)
            .background(AppDesign.errorColor.opacity(0.1))
            .clipShape(RoundedRectangle(cornerRadius: 12))
            .overlay(
                RoundedRectangle(cornerRadius: 12)
                    .stroke(AppDesign.errorColor, lineWidth: 1)
            )
    }
}
