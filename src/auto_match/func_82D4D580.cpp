// hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier (Physics/Collide/Shape/Compound/Tree/Mopp/
// Modifiers/hkpRemoveTerminalsMoppModifier.cpp): empty; the hkArray of terminals to remove (+0xC) is
// destroyed, then the bases (hkpMoppModifier's inline destructor stores its vtable at +0x8).
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

hkpRemoveTerminalsMoppModifier::~hkpRemoveTerminalsMoppModifier()
{
}
