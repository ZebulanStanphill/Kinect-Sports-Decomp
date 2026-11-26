#include "havok/hkBase.h"

// hkMultiThreadCheck (Common/Base/DebugUtil/MultiThreadCheck, 8 bytes).
struct hkMultiThreadCheck;
extern "C" void fn_82CEFB20(hkMultiThreadCheck *self);   // hkMultiThreadCheck::disableChecks (m_threadId = 0xFFFFFFD1)

struct hkMultiThreadCheck {
    enum { UNMARKED = 0xFFFFFFD1 };
    HK_FORCE_INLINE hkMultiThreadCheck()
    {
        m_markCount = 0;
        m_threadId = hkUint32(UNMARKED);
    }
    HK_FORCE_INLINE void disableChecks() { fn_82CEFB20(this); }

    hkUint32 m_threadId;      // +0x0
    hkInt16 m_markCount;      // +0x4
    hkUint16 m_markBitStack;  // +0x6
};

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

class hkpEntity : public hkReferencedObject {};

hkpBroadPhase::hkpBroadPhase() : m_criticalSection(HK_NULL)
{
    m_multiThreadCheck.disableChecks();
}
