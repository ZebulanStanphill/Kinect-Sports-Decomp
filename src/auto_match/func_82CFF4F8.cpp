// hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader: deletes the track it owns (delete checks for null).
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
    // hkArray<hkUint8 *> m_sectors (+0x8), destroyed by the out-of-line
    // destructor; declared without a destructor here so that the inline
    // wrapper does not destroy it a second time.
    hkUint8 **m_sectorsData;
    int m_sectorsSize;
    int m_sectorsCapacityAndFlags;
};

hkMemoryTrackStreamReader::~hkMemoryTrackStreamReader()
{
    if (m_memType == MEMORY_TAKE)
        delete m_track;
}
