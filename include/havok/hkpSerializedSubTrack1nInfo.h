// hkpSerializedSubTrack1nInfo (Physics/Utilities/Dynamics/SaveContactPoints/hkpSerializedAgentNnEntry.h, where
// Havok declares it with hkpSerializedTrack1nInfo), 0x20 bytes: a saved sub-track, an hkpSerializedTrack1nInfo with
// the place of the sub-track in its parent track. The game's hkClass (initialiser 83134BD8, members lbl_82144780)
// gives the parent, the size and the two members: sectorIndex at +0x18 and offsetInSector at +0x1C. The constructor
// is inline and sets m_sectorIndex to -1 (82DF7AF8, which news one per agent entry); the destructor is the implicit
// one, which calls hkpSerializedTrack1nInfo's out-of-line destructor. The sub-tracks are allocated with their own
// size (82DF4EF8 frees 0x20 bytes), so the class has its own allocator.
#ifndef HAVOK_HKPSERIALIZEDSUBTRACK1NINFO_H
#define HAVOK_HKPSERIALIZEDSUBTRACK1NINFO_H

#include "havok/hkBase.h"
#include "havok/hkpSerializedTrack1nInfo.h"

struct hkpSerializedSubTrack1nInfo : public hkpSerializedTrack1nInfo {
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpSerializedSubTrack1nInfo);
    hkpSerializedSubTrack1nInfo() : m_sectorIndex(-1) {}
    hkpSerializedSubTrack1nInfo(hkFinishLoadedObjectFlag f) : hkpSerializedTrack1nInfo(f) {}

    int m_sectorIndex;      // +0x18
    int m_offsetInSector;   // +0x1C
};

#endif
