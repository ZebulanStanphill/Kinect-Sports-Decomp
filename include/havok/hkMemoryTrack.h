// hkMemoryTrack, 0x14 bytes: a growable buffer kept as a list of fixed-size sectors, which
// hkMemoryTrackStreamWriter fills and hkMemoryTrackStreamReader reads. The class has no vtable and Havok's
// non-virtual class allocator (deleting one frees 0x14 bytes, 82CFF4F8, 82CEE2D0).
// The destructor is out of line (82CFF478): it clears the track (fn_82CFF298, which frees the sectors and keeps
// its fn_ name), then m_sectors is destroyed. getSize is inline (hkMemoryTrackStreamReader::isOk, 82CFF598).
// The member names are invented from what these functions do with them.
#ifndef HAVOK_HKMEMORYTRACK_H
#define HAVOK_HKMEMORYTRACK_H

#include "havok/hkBase.h"

class hkMemoryTrack;
extern "C" void fn_82CFF298(hkMemoryTrack *self);   // hkMemoryTrack::clear

class hkMemoryTrack {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkMemoryTrack);
    ~hkMemoryTrack();

    HK_FORCE_INLINE void clear() { fn_82CFF298(this); }
    HK_FORCE_INLINE int getSize() const { return (m_sectors.getSize() - 1) * m_numBytesPerSector + m_numBytesLastSector; }

    int m_numBytesPerSector;         // +0x0
    int m_numBytesLastSector;        // +0x4
    hkArray<hkUint8 *> m_sectors;    // +0x8
};

#endif
