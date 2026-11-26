// hkpEntityEntityBroadPhaseListener::hkpEntityEntityBroadPhaseListener(hkpWorld *) (Physics/Dynamics/World/BroadPhaseBorder/hkpEntityEntityBroadPhaseListener.cpp). Bases from the RTTI: hkReferencedObject at +0, hkpBroadPhaseListener at +0x8.
#include "havok/hkBase.h"
#include "havok/hkpBroadPhaseListener.h"

class hkpWorld;

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
