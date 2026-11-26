// hkKdTreeCastCollector (Common/Internal/KdTree/...): the interface a kd-tree ray or linear cast reports the
// primitives it reaches to. RTTI: no base class, so its deleting destructor (82DB0928) frees through the global
// operator delete, fn_8265CA20.
//
// ??_7hkKdTreeCastCollector@@6B@ is the deleting destructor and three pure slots. What they do comes from the
// collectors that fill them (hkpKdTreeCollidableRaycaster: 830961F0, 83096178, 83096190;
// hkpKdTreeWorldLinearCaster: 83096A50, 83096A18, 83096A40):
//  +0x4 casts against one primitive (the raycaster gets the collidable) and returns whether it hit; hkBool is
//       returned through a hidden pointer;
//  +0x8 returns whether anything was hit so far (the output's root collidable is set, or the early-out fraction
//       is below 1);
//  +0xC returns the current early-out hit fraction.
// The names of the slots are guesses from those functions. They are pure in the game; they are plain virtual
// functions here so that a unit can construct a subclass without declaring them (the units' code is the same).
#ifndef HAVOK_HKKDTREECASTCOLLECTOR_H
#define HAVOK_HKKDTREECASTCOLLECTOR_H

#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkKdTreeCastCollector {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkKdTreeCastCollector() {}
    virtual hkBool castCallback(hkUlong primitiveId);
    virtual hkBool hasHit() const;
    virtual hkReal getEarlyOutHitFraction() const;
};

#endif
