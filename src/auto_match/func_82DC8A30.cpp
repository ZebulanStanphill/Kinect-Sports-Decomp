// hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil(): hkReferencedObject at +0, the hkpWorldPostSimulationListener
// interface at +8 (its own vtable store survives), then m_sequenceNumber (+0xc), the hkBool
// m_deterministicOrder (+0x10) and three empty hkArrays. A Matching C unit (func_82DB4458) calls
// it, so it keeps its fn_ name; the MI vtables are renamed to the compiler's names.
#include "havok/hkBase.h"

class hkpWorld;
class hkpEntity;

class hkpWorldPostSimulationListener {
public:
    virtual ~hkpWorldPostSimulationListener() {}
    virtual void postSimulationCallback(hkpWorld *world) = 0;
    virtual void inactiveEntityMovedCallback(hkpEntity *entity) {}
};

class hkpEndOfStepCallbackUtil : public hkReferencedObject, public hkpWorldPostSimulationListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_UTILITIES);
    HK_FORCE_INLINE hkpEndOfStepCallbackUtil();
    virtual void postSimulationCallback(hkpWorld *world);

    int m_sequenceNumber;          // +0xc
    hkBool m_deterministicOrder;   // +0x10
    hkArray<void *> m_collisions;         // +0x14
    hkArray<void *> m_newCollisions;      // +0x20
    hkArray<void *> m_removedCollisions;  // +0x2c
};

HK_FORCE_INLINE hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil()
    : m_sequenceNumber(0), m_deterministicOrder(false)
{
}

extern "C" hkpEndOfStepCallbackUtil *fn_82DC8A30(hkpEndOfStepCallbackUtil *self)
{
    self->hkpEndOfStepCallbackUtil::hkpEndOfStepCallbackUtil();
    return self;
}
