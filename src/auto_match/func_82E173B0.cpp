// Scalar deleting destructor in slot 0 of ??_7hkContentsUpdateTracker@?A0x11ff29d5@@6B@ and ??_7hkPackfileObjectUpdateTracker@@6B@ (one function for both), written with a stand-in class named hkMemoryStreamReader (only its class allocator is used). It calls the destructor fn_82E16EF0, which keeps its fn_ name.
#include "havok/hkBase.h"
#include "havok/hkMemoryStreamReader.h"

extern "C" {
void fn_82E16EF0(hkMemoryStreamReader *self);   // destructor (hkContentsUpdateTracker / hkPackfileObjectUpdateTracker)
}

extern "C" hkMemoryStreamReader *fn_82E173B0(hkMemoryStreamReader *self, unsigned int flags)
{
    fn_82E16EF0(self);
    if (flags & 1)
        hkMemoryStreamReader::operator delete(self);
    return self;
}
