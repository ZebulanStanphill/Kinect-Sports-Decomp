// hkMemoryTrackStreamReader scalar deleting destructor; it calls ~hkMemoryTrackStreamReader (not visible here). The
// function at the end only makes the compiler emit the vtable; it copies an object because the header declares no
// inline constructor.
#include "havok/hkBase.h"
#include "havok/hkMemoryTrackStreamReader.h"

extern "C" void fn_82CFF478(void *self);   // hkMemoryTrack::~hkMemoryTrack (out of line)

// hkMemoryTrack (Common/Base/Container/MemoryTrack?): a list of fixed-size
// sectors; 0x14 bytes, non-virtual class allocator.
class hkMemoryTrack {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkMemoryTrack);
    HK_FORCE_INLINE ~hkMemoryTrack() { fn_82CFF478(this); }

    int m_numBytesPerSector;     // +0x0
    int m_numBytesLastSector;    // +0x4
    hkArray<hkUint8 *> m_sectors;  // +0x8
};

void emitVtable_82CFF5D0(void *p, const void *q)
{
    new (p) hkMemoryTrackStreamReader(*(const hkMemoryTrackStreamReader *)q);
}
