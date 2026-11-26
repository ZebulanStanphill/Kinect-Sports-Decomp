// hkKdTreeBundleCastCollector (Common/Internal/KdTree/...): the interface a kd-tree cast of a bundle of four rays
// reports the primitives it reaches to. RTTI: no base class, so its deleting destructor (83096130) frees through
// the global operator delete, fn_8265CA20.
//
// ??_7hkKdTreeBundleCastCollector@@6B@ is the deleting destructor and two pure slots. What they do comes from
// the collectors that fill them (hkKdTreeCollidableRayBundleCaster: 83096480, 830961C8;
// hkKdTreeCpuBroadphaseBundleCastCollector: 8309E950, 8309E8D0):
//  +0x4 casts the four rays against one primitive (8309E950 gets the collidable and the active-ray mask);
//  +0x8 writes the four rays' current hit fractions (the m_hitFraction of each of the four outputs).
// The names and parameters of the slots are guesses from those functions. They are pure in the game; they are
// plain virtual functions here so that a unit can construct a subclass without declaring them (the units' code
// is the same).
#ifndef HAVOK_HKKDTREEBUNDLECASTCOLLECTOR_H
#define HAVOK_HKKDTREEBUNDLECASTCOLLECTOR_H

#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkKdTreeBundleCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeBundleCastCollector() {}
    virtual void castCallback(hkUlong primitiveId, hkUint32 activeMask);
    virtual void getHitFractions(hkReal *fractionsOut) const;
};

#endif
