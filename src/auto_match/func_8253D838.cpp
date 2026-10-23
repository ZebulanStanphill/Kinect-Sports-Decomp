// hkpCdBodyPairCollector scalar deleting destructor ??_GhkpCdBodyPairCollector@@UAAPAXI@Z, emitted in a game object
// (/O1). hkpCdBodyPairCollector is an interface without base class with Havok's non-virtual
// class allocator: deleting frees sizeof(hkpCdBodyPairCollector) = 8 bytes to the heap.
// The function at the end only makes the compiler emit the vtable.
#include "havok/hkBase.h"

class hkpCdBodyPairCollector {
public:
    HK_DECLARE_NONVIRTUAL_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE, hkpCdBodyPairCollector);
    virtual ~hkpCdBodyPairCollector() {}
    hkBool m_earlyOut;   // +0x4
};

void emitVtable_8253D838(hkpCdBodyPairCollector *p) { p->hkpCdBodyPairCollector::~hkpCdBodyPairCollector(); }
