// Kinect Sports retail 4D5308C9, function 0x8313F988 (12 bytes).
// atexit destructor thunk: runs ~hkMemoryAllocator on the static object lbl_831D453C.
#include "havok/hkBase.h"

extern "C" char lbl_831D453C[];

extern "C" void fn_8313F988(void)
{
    reinterpret_cast<hkMemoryAllocator *>(lbl_831D453C)->hkMemoryAllocator::~hkMemoryAllocator();
}
