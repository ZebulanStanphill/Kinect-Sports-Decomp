// hkpEndOfStepCallbackUtil (Physics/Utilities/Collide/ContactModifiers/EndOfStepCallback/hkpEndOfStepCallbackUtil.h?
// the path is not known), 0x38 bytes: a post-simulation listener that collects collisions during a step and
// reports them at its end. The RTTI gives hkReferencedObject, then hkpWorldPostSimulationListener at +0x8. The
// layout is the constructor's (fn_82DC8A30: the sequence number at +0xC, the hkBool at +0x10 and three empty
// arrays) and the destructor's (fn_82DB4350: it frees the arrays at +0x2C, +0x20 and +0x14 with element sizes 0xC,
// 0x10 and 0xC, then stores hkpWorldPostSimulationListener's and hkBaseObject's vtables). Both keep their fn_
// names (a Matching C unit, 82DB4458, calls the constructor; the deleting destructor 82DC90C8 calls the
// destructor), so the constructor is declared here and defined, HK_FORCE_INLINE, in its unit; the destructor is
// left implicit, and its unit destroys the members explicitly. What the array elements hold is not known; the
// member and element names follow Havok's header.
#ifndef HAVOK_HKPENDOFSTEPCALLBACKUTIL_H
#define HAVOK_HKPENDOFSTEPCALLBACKUTIL_H

#include "havok/hkBase.h"
#include "havok/hkpWorldPostSimulationListener.h"

class hkpEndOfStepCallbackUtil : public hkReferencedObject, public hkpWorldPostSimulationListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    // 0xC bytes; the contents are not known.
    struct Collision {
        hkUint32 m_data[3];
    };
    // 0x10 bytes; the contents are not known.
    struct NewCollision {
        hkUint32 m_data[4];
    };

    hkpEndOfStepCallbackUtil();   // fn_82DC8A30
    virtual void postSimulationCallback(hkpWorld *world);

    int m_sequenceNumber;                       // +0xC
    hkBool m_deterministicOrder;                // +0x10
    hkArray<Collision> m_collisions;            // +0x14
    hkArray<NewCollision> m_newCollisions;      // +0x20
    hkArray<Collision> m_removedCollisions;     // +0x2C
};

#endif
