#!/usr/bin/env python3
"""
Clean up stale or broken Firebase / CocoaPods links or frameworks in the iOS build folder.
Idempotent and safe to run on any platform.
"""
import os
import sys

def main():
    repo_root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    build_dir = os.path.join(repo_root, "Build", "ios")
    if not os.path.exists(build_dir):
        print(f"[tools] iOS build directory not found at {build_dir}, skipping.")
        return 0

    cleaned = 0
    for root, dirs, files in os.walk(build_dir):
        for name in files + dirs:
            path = os.path.join(root, name)
            if os.path.islink(path) and not os.path.exists(path):
                print(f"[tools] Removing broken symlink: {path}")
                try:
                    os.unlink(path)
                    cleaned += 1
                except OSError as e:
                    print(f"[tools] Warning: Failed to remove {path}: {e}")

    print(f"[tools] Stale link cleanup complete. Removed {cleaned} broken links.")
    return 0

if __name__ == "__main__":
    sys.exit(main())
