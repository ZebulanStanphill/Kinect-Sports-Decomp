// hkpRemoveTerminalsMoppModifier scalar deleting destructor (primary vtable): calls the user-written
// destructor (fn_82D4D580) out of line, then frees through the class allocator. The function at the end only
// makes the compiler emit the vtables.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

typedef hkUint32 hkpShapeKey;

class hkpMoppModifier {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpMoppModifier() {}
    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);   // pure in Havok; +0x4
    virtual void ModifierFinished();                                                          // pure in Havok; +0x8
};

class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpRemoveTerminalsMoppModifier(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag), m_removeInfo(flag) {}
    virtual ~hkpRemoveTerminalsMoppModifier();
    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);
    virtual void ModifierFinished();

    hkArray<hkUint32> m_removeInfo;   // +0xC
};

void emitVtable_82D4D6F0(void *p, hkFinishLoadedObjectFlag f) { new (p) hkpRemoveTerminalsMoppModifier(f); }
