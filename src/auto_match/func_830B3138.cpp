#include "havok/hkBase.h"
#include "havok/hkpAction.h"
#include "havok/hkpEntity.h"

extern "C" void fn_82CEFB20(hkMultiThreadCheck *self);   // hkMultiThreadCheck::disableChecks (m_threadId = 0xFFFFFFD1)

// hkCriticalSection (0x1C bytes on Xbox 360: a CRITICAL_SECTION); its
// destructor generates no code here.
class hkCriticalSection {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE, hkCriticalSection);
    hkUint32 m_section[7];
};

// hkpBroadPhase (Physics/Internal/Collide/BroadPhase/hkpBroadPhase.h)
class hkpBroadPhase : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBroadPhase();
    virtual ~hkpBroadPhase();

    hkMultiThreadCheck m_multiThreadCheck;   // +0x8
    hkCriticalSection *m_criticalSection;    // +0x10
};

hkpBinaryAction::hkpBinaryAction(hkpEntity *entityA, hkpEntity *entityB, hkUlong userData)
    : hkpAction(userData), m_entityA(entityA), m_entityB(entityB)
{
    if (m_entityB != HK_NULL || m_entityA != HK_NULL) {
        if (m_entityA != HK_NULL)
            m_entityA->addReference();
        if (m_entityB != HK_NULL)
            m_entityB->addReference();
    }
}
