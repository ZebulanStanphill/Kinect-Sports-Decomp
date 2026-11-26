#ifndef HAVOK_HKPTYPEDBROADPHASEHANDLE_H
#define HAVOK_HKPTYPEDBROADPHASEHANDLE_H

#include "havok/hkBaseTypes.h"

// hkpTypedBroadPhaseHandle (Physics/Collide/BroadPhase/hkpTypedBroadPhaseHandle.h),
// 0xC bytes. Its base, hkpBroadPhaseHandle, is the id; it is written flat here
// and without constructors, so that a class holding one can leave it to an
// out-of-line constructor.
class hkpTypedBroadPhaseHandle {
public:
    void setOwner(void *owner) { m_ownerOffset = hkInt8(hkUlong(owner) - hkUlong(this)); }

    hkUint32 m_id;                    // +0x0 (hkpBroadPhaseHandle)
    hkInt8 m_type;                    // +0x4
    hkInt8 m_ownerOffset;             // +0x5
    hkInt8 m_objectQualityType;       // +0x6
    hkUint32 m_collisionFilterInfo;   // +0x8
};

#endif
