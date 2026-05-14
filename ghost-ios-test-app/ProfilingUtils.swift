import Foundation

// MARK: - Profiling Utilities (mirrors Android ProfilingUtils.kt)

/// Returns the current resident memory (in bytes) of this process.
/// Uses `mach_task_basic_info` which is the iOS equivalent of Android's VMDebug.threadAllocSize().
func getProcessMemoryBytes() -> Int64 {
    var info = mach_task_basic_info()
    var count = mach_msg_type_number_t(MemoryLayout<mach_task_basic_info>.size) / 4
    let result = withUnsafeMutablePointer(to: &info) {
        $0.withMemoryRebound(to: integer_t.self, capacity: Int(count)) {
            task_info(mach_task_self_, task_flavor_t(MACH_TASK_BASIC_INFO), $0, &count)
        }
    }
    return result == KERN_SUCCESS ? Int64(info.resident_size) : 0
}

/// Human readable memory formatting.
func formatMem(_ bytes: Int64) -> String {
    let b = max(bytes, 0)
    if b >= 1024 * 1024 {
        return String(format: "%.2f MB", Double(b) / (1024.0 * 1024.0))
    } else if b >= 1024 {
        return String(format: "%.2f KB", Double(b) / 1024.0)
    }
    return "\(b) B"
}
