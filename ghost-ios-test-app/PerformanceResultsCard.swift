import SwiftUI

// MARK: - Performance Results Card (mirrors Android PerformanceResultsCard.kt)

struct PerformanceResultsCard: View {
    let uiState: UiState
    let onCopyLogs: () -> Void
    
    private let categories: [(String, String)] = [
        ("REAL-WORLD (NETWORK)", "[NETWORK]"),
        ("PARSE · STRING", "[PARSE_STRING]"),
        ("PARSE · BYTES", "[PARSE_BYTES]"),
        ("PARSE · STREAMING", "[PARSE_STREAMING]"),
        ("WRITE · STRING", "[WRITE_STRING]"),
        ("WRITE · BYTES", "[WRITE_BYTES]"),
        ("WRITE · STREAMING", "[WRITE_STREAMING]")
    ]
    
    var body: some View {
        VStack(spacing: 0) {
            Text("PERFORMANCE INSIGHT")
                .font(.system(size: 12, weight: .heavy))
                .foregroundColor(AppDesign.accentGlow)
            
            Text("Native iOS benchmark across major engines.")
                .font(.system(size: 13, weight: .medium))
                .foregroundColor(AppDesign.textSecondary)
                .multilineTextAlignment(.center)
                .padding(.vertical, 8)
            
            Divider()
                .background(AppDesign.glassBorder)
                .padding(.bottom, 20)
            
            ForEach(categories, id: \.1) { title, prefix in
                let group = uiState.results.filter { $0.name.hasPrefix(prefix) }
                if !group.isEmpty {
                    ResultSection(title: title, results: group)
                }
            }
            
            Button(action: onCopyLogs) {
                Text("COPY SESSION LOGS")
                    .font(.system(size: 11, weight: .heavy))
                    .foregroundColor(AppDesign.accentGlow)
            }
            .padding(.top, 16)
        }
        .padding(20)
        .background(AppDesign.surfaceColor.opacity(0.5))
        .clipShape(RoundedRectangle(cornerRadius: 24))
        .overlay(
            RoundedRectangle(cornerRadius: 24)
                .stroke(AppDesign.glassBorder, lineWidth: 1)
        )
    }
}

// MARK: - Result Section (mirrors Android ResultSection)

private struct ResultSection: View {
    let title: String
    let results: [EngineResult]
    
    var body: some View {
        VStack(alignment: .leading, spacing: 0) {
            Text(title)
                .font(.system(size: 11, weight: .heavy))
                .foregroundColor(AppDesign.textSecondary)
                .padding(.bottom, 8)
            
            let sorted = results.sorted { a, b in
                let aTime = a.timeMs <= 0 ? Double.greatestFiniteMagnitude : a.timeMs
                let bTime = b.timeMs <= 0 ? Double.greatestFiniteMagnitude : b.timeMs
                return aTime < bTime
            }
            let fastestTime = sorted.first?.timeMs ?? 0
            
            ForEach(Array(sorted.enumerated()), id: \.element.id) { index, res in
                let cleanName = res.name.components(separatedBy: "] ").last?.trimmingCharacters(in: .whitespaces) ?? res.name
                let engineColor = resolveEngineColor(cleanName)
                let isWinner = index == 0 && res.timeMs > 0
                
                EngineRow(
                    name: cleanName,
                    timeMs: res.timeMs,
                    memoryKb: res.memoryBytes / 1024,
                    color: engineColor,
                    isWinner: isWinner,
                    fastestTimeMs: fastestTime
                )
            }
        }
        .padding(.bottom, 16)
    }
}

// MARK: - Engine Row (mirrors Android EngineRow)

private struct EngineRow: View {
    let name: String
    let timeMs: Double
    let memoryKb: Int64
    let color: Color
    let isWinner: Bool
    let fastestTimeMs: Double
    
    var body: some View {
        HStack(spacing: 0) {
            // Rank dot
            Circle()
                .fill(color)
                .frame(width: 8, height: 8)
            
            // Engine name
            Text(name)
                .font(.system(size: 13, weight: isWinner ? .heavy : .medium))
                .foregroundColor(isWinner ? color : AppDesign.textPrimary)
                .padding(.leading, 10)
            
            Spacer()
            
            // Time
            Text(timeMs > 0 ? String(format: "%.2fms", timeMs) : "N/A")
                .font(.system(size: 13, weight: .heavy))
                .foregroundColor(isWinner ? color : AppDesign.textPrimary)
            
            // Memory — ARC frees immediately so 0/small values are expected for Swift engines
            memoryBadge
            
            // Slowdown badge
            if !isWinner && timeMs > 0 && fastestTimeMs > 0 {
                let slowdown = ((timeMs / fastestTimeMs) - 1.0) * 100.0
                if slowdown > 1.0 {
                    Text(String(format: "+%.0f%%", slowdown))
                        .font(.system(size: 9, weight: .medium))
                        .foregroundColor(AppDesign.errorColor)
                        .padding(.horizontal, 4)
                        .padding(.vertical, 1)
                        .background(AppDesign.errorColor.opacity(0.15))
                        .clipShape(RoundedRectangle(cornerRadius: 4))
                        .padding(.leading, 6)
                }
            }
        }
        .padding(.horizontal, 12)
        .padding(.vertical, 8)
        .background(isWinner ? color.opacity(0.08) : Color.clear)
        .clipShape(RoundedRectangle(cornerRadius: 8))
        .padding(.vertical, 3)
    }
    
    // Ghost uses Kotlin/Native GC (lazy collection) → we can capture peak footprint.
    // Codable uses Swift ARC (instant release) → memory freed before measurement,
    // so small values are expected and correct — ARC freed it before we could read it.
    @ViewBuilder
    private var memoryBadge: some View {
        let isGhost = name.uppercased().contains("GHOST")
        if isGhost && memoryKb > 0 {
            Text("GC ~\(memoryKb)KB")
                .font(.system(size: 10, weight: .medium))
                .foregroundColor(AppDesign.accentGlow.opacity(0.8))
                .padding(.leading, 8)
        } else if !isGhost && memoryKb <= 10 {
            Text("ARC ✓")
                .font(.system(size: 10, weight: .medium))
                .foregroundColor(Color.green.opacity(0.7))
                .padding(.leading, 8)
        } else {
            Text("\(memoryKb)KB")
                .font(.system(size: 11, weight: .medium))
                .foregroundColor(AppDesign.textSecondary)
                .padding(.leading, 8)
        }
    }
}

// MARK: - Color Resolution (mirrors Android resolveEngineColor)

private func resolveEngineColor(_ name: String) -> Color {
    let upper = name.uppercased()
    if upper.contains("GHOST") {
        return AppDesign.ghostColor
    } else if upper.contains("ALAMOFIRE") {
        return Color(red: 0.98, green: 0.58, blue: 0.15) // Orange
    } else if upper.contains("CODABLE") {
        return AppDesign.codableColor
    } else {
        return AppDesign.textSecondary
    }
}
