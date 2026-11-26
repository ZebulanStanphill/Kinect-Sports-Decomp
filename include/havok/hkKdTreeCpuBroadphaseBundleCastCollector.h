// hkKdTreeCpuBroadphaseBundleCastCollector (Physics/Internal/Collide/BroadPhase/KdTree?), 0x90 bytes: the
// collector of the kd-tree broad phase's four-ray casts (8309C028). RTTI: hkKdTreeBundleCastCollector at +0;
// Havok's non-virtual class allocator (the deleting destructor 8309EE10 frees 0x90 bytes). The constructor
// (??0hkKdTreeCpuBroadphaseBundleCastCollector@@QAA@XZ, 8309E920) is out of line; it clears +0xC, +0x70, +0x74
// and the four words from +0x80, in that order.
// Its vtable fills the interface's slots with 8309E950 and 8309E8D0. What is known of the members:
//  - +0x4: the collision filter. 8309E950 calls the hkpRayCollidableFilter base of it (+0x14) with +0x8 and the
//    collidable when it is set; 8309C028 sets +0x4 to its filter argument and +0x8 to the first ray's input;
//  - +0xC: the rays being cast and their outputs (8309C028's stack bundle: four hkpWorldRayCastInputs, an hkBool
//    at +0xC0, the four outputs at +0xC4); 8309E8D0 returns nothing when it is null;
//  - +0x10..+0x6F: six vectors 8309E950 fills for each primitive;
//  - +0x70: the first ray's filter info (8309C028);
//  - +0x80: one word for each ray, set to 1 when it hits (8309E950); 8309C028 copies the bundle's words in.
// The names are guesses; +0x74..+0x7C are not known.
#ifndef HAVOK_HKKDTREECPUBROADPHASEBUNDLECASTCOLLECTOR_H
#define HAVOK_HKKDTREECPUBROADPHASEBUNDLECASTCOLLECTOR_H

#include "havok/hkKdTreeBundleCastCollector.h"
#include "havok/hkVector4.h"

class hkpCollisionFilter;
struct hkpWorldRayCastInput;

class hkKdTreeCpuBroadphaseBundleCastCollector : public hkKdTreeBundleCastCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkKdTreeCpuBroadphaseBundleCastCollector);
    hkKdTreeCpuBroadphaseBundleCastCollector();
    virtual void castCallback(hkUlong primitiveId, hkUint32 activeMask);
    virtual void getHitFractions(hkReal *fractionsOut) const;

    const hkpCollisionFilter *m_filter;       // +0x4
    const hkpWorldRayCastInput *m_input;      // +0x8
    void *m_bundle;                           // +0xC
    hkVector4 m_vectors[6];                   // +0x10
    hkUint32 m_filterInfo;                    // +0x70
    hkUint32 m_unknown74;                     // +0x74
    hkUint32 m_unknown78[2];                  // +0x78
    hkUint32 m_hits[4];                       // +0x80
};

#endif
