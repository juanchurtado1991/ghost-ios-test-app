import SwiftUI

// MARK: - Design System (mirrors Android AppDesign.kt)

enum AppDesign {
    static let primaryDark      = Color(red: 0.059, green: 0.090, blue: 0.165)   // #0F172A
    static let surfaceColor     = Color(red: 0.118, green: 0.161, blue: 0.231)   // #1E293B
    static let accentGlow       = Color(red: 0.659, green: 0.333, blue: 0.969)   // #A855F7
    static let secondaryIndigo  = Color(red: 0.506, green: 0.549, blue: 0.973)   // #818CF8

    static let glassColor       = Color.white.opacity(0.05)
    static let glassBorder      = Color.white.opacity(0.1)
    static let textPrimary      = Color(red: 0.973, green: 0.980, blue: 0.988)   // #F8FAFC
    static let textSecondary    = Color(red: 0.580, green: 0.639, blue: 0.722)   // #94A3B8
    static let errorColor       = Color(red: 0.937, green: 0.267, blue: 0.267)   // #EF4444

    static let ghostColor       = accentGlow
    static let codableColor     = Color(red: 0.376, green: 0.647, blue: 0.980)   // #60A5FA  Blue 400
    
    static let backgroundGradient = LinearGradient(
        colors: [primaryDark, Color(red: 0.008, green: 0.024, blue: 0.090)],
        startPoint: .top,
        endPoint: .bottom
    )
}
