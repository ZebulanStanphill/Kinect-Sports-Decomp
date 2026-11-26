// hkpSerializedTrack1nInfo (Physics/Utilities/Dynamics/SaveContactPoints/hkpSerializedAgentNnEntry.h, where
// Havok declares it with hkpSerializedAgentNnEntry), 0x18 bytes: the saved sectors and sub-tracks of an
// hkpAgent1nTrack. The destructor is out of line (??1hkpSerializedTrack1nInfo@@QAA@XZ, 82DF4EF8: unless an
// array does not own its storage, it frees every 0x200-byte sector and destroys and frees every 0x20-byte
// sub-track). hkpSerializedAgentNnEntry holds one at +0xF4 and finishes both arrays. The member names follow
// Havok's header.
#ifndef HAVOK_HKPSERIALIZEDTRACK1NINFO_H
#define HAVOK_HKPSERIALIZEDTRACK1NINFO_H

#include "havok/hkBase.h"

struct hkpAgent1nSector;
struct hkpSerializedSubTrack1nInfo;

struct hkpSerializedTrack1nInfo {
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSerializedTrack1nInfo);
    hkpSerializedTrack1nInfo() {}
    hkpSerializedTrack1nInfo(hkFinishLoadedObjectFlag f) : m_sectors(f), m_subTracks(f) {}
    ~hkpSerializedTrack1nInfo();

    hkArray<hkpAgent1nSector *> m_sectors;                // +0x0
    hkArray<hkpSerializedSubTrack1nInfo *> m_subTracks;   // +0xC
};

#endif
