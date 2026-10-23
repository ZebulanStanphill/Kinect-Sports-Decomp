// hkpEntityEntityBroadPhaseListener::hkpEntityEntityBroadPhaseListener(hkpWorld *) (Physics/Dynamics/World/BroadPhaseBorder/hkpEntityEntityBroadPhaseListener.cpp). Bases from the RTTI: hkReferencedObject at +0, hkpBroadPhaseListener at +0x8.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpWorld;
class hkpTypedBroadPhaseHandlePair;

// hkpBroadPhaseListener (Physics/Collide/BroadPhase/hkpBroadPhaseListener.h): an interface with no base
// class (RTTI); the destructor is slot 0, then the two pair callbacks (pure).
class hkpBroadPhaseListener {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpBroadPhaseListener() {}
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair) = 0;
};

class hkpEntityEntityBroadPhaseListener : public hkReferencedObject, public hkpBroadPhaseListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpEntityEntityBroadPhaseListener(hkpWorld *world);
    virtual void addCollisionPair(hkpTypedBroadPhaseHandlePair &pair);
    virtual void removeCollisionPair(hkpTypedBroadPhaseHandlePair &pair);

    hkpWorld *m_world;   // +0xC
};

hkpEntityEntityBroadPhaseListener::hkpEntityEntityBroadPhaseListener(hkpWorld *world)
{
    m_world = world;
}
