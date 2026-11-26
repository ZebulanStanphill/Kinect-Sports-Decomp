#include "havok/hkBase.h"
#include "havok/hkMultiThreadCheck.h"

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

hkpBroadPhase::hkpBroadPhase() : m_criticalSection(HK_NULL)
{
    fn_82CEFB20(&m_multiThreadCheck);
}
