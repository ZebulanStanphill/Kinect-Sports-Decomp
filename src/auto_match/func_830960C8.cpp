// hkpBroadPhase scalar deleting destructor: calls the out-of-line, user-written
// ~hkpBroadPhase (fn_83096048, ??1hkpBroadPhase@@UAA@XZ), then the class allocator's
// delete. The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

struct hkMultiThreadCheck {
    hkUint32 m_threadId;      // +0x0
    hkInt16 m_markCount;      // +0x4
    hkUint16 m_markBitStack;  // +0x6
};
class hkCriticalSection;

// hkpBroadPhase (Physics/Internal/Collide/BroadPhase/hkpBroadPhase.h)
class hkpBroadPhase : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpBroadPhase(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
    virtual ~hkpBroadPhase();   // out of line (fn_83096048)

    hkMultiThreadCheck m_multiThreadCheck;   // +0x8
    hkCriticalSection *m_criticalSection;    // +0x10
};

void emitVtable_830960C8(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpBroadPhase(f); }
