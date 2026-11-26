// hkKdTreeCollidableRayBundleCaster (Physics/Internal/Collide/BroadPhase/KdTree?), 0x14 bytes: casts a bundle
// of four world rays against the collidables a kd-tree reaches. RTTI: hkKdTreeBundleCastCollector at +0; Havok's
// non-virtual class allocator (the deleting destructor 830969B0 frees 0x14 bytes).
// Its vtable fills the interface's slots with 83096480 and 830961C8; the latter reads the four hit fractions
// from the output array at +0x10 (stride 0x60, sizeof(hkpWorldRayCastOutput)). The constructor
// (??0hkKdTreeCollidableRayBundleCaster@@QAA@XZ, 830961A0) clears the four words in order. What +0x4..+0xC hold
// is not known.
#ifndef HAVOK_HKKDTREECOLLIDABLERAYBUNDLECASTER_H
#define HAVOK_HKKDTREECOLLIDABLERAYBUNDLECASTER_H

#include "havok/hkKdTreeBundleCastCollector.h"

struct hkpWorldRayCastOutput;

class hkKdTreeCollidableRayBundleCaster : public hkKdTreeBundleCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTreeCollidableRayBundleCaster);
    hkKdTreeCollidableRayBundleCaster();
    virtual void castCallback(hkUlong primitiveId, hkUint32 activeMask);
    virtual void getHitFractions(hkReal *fractionsOut) const;

    void *m_unknown4;                    // +0x4
    void *m_unknown8;                    // +0x8
    void *m_unknownC;                    // +0xC
    hkpWorldRayCastOutput *m_outputs;    // +0x10, four outputs
};

#endif
