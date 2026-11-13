// finishLoadedObjecthkpRemoveTerminalsMoppModifier: the finish function in hkpRemoveTerminalsMoppModifier's
// hkTypeInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok). RTTI: hkReferencedObject at +0, the
// interface hkpMoppModifier at +0x8. Its finish constructor stores the interface's vtable, then both of
// the class's (hkReferencedObject's store is dead and removed).
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
    hkpRemoveTerminalsMoppModifier(hkFinishLoadedObjectFlag flag) : hkReferencedObject(flag) {}
    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);
    virtual void ModifierFinished();
};

void HK_CALL finishLoadedObjecthkpRemoveTerminalsMoppModifier(void *p, int finishing)
{
    hkFinishLoadedObjectFlag f;
    f.m_finishing = finishing;
    new (p) hkpRemoveTerminalsMoppModifier(f);
}
