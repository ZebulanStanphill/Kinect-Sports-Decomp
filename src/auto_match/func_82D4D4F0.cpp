// hkpRemoveTerminalsMoppModifier::hkpRemoveTerminalsMoppModifier(const hkpMoppCode *, const hkAabb &,
// const hkArray<hkpShapeKey> &) (Physics/Collide/Shape/Compound/Tree/Mopp/Modifiers/
// hkpRemoveTerminalsMoppModifier.cpp): runs the MOPP query (fn_82DCDF98, under its fn_ name) with this as
// the modifier while m_tempShapesToRemove points at the keys. The second parameter is passed straight to
// the query; its type (an AABB) is a guess.
#include "havok/hkBase.h"

extern "C" void fn_8265CA20(void *p);   // global operator delete

typedef hkUint32 hkpShapeKey;
class hkAabb;
class hkpMoppCode;

class hkpMoppModifier {
public:
    static void operator delete(void *p) { fn_8265CA20(p); }
    virtual ~hkpMoppModifier() {}
    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);   // pure in Havok; +0x4
    virtual void ModifierFinished();                                                          // pure in Havok; +0x8
};

extern "C" void fn_82DCDF98(const hkpMoppCode *code, const hkAabb &aabb, hkpMoppModifier *modifier);
static HK_FORCE_INLINE void hkpMoppModifyVirtualMachine_queryAabb(const hkpMoppCode *code, const hkAabb &aabb,
                                                                  hkpMoppModifier *modifier)
{
    fn_82DCDF98(code, aabb, modifier);
}

class hkpRemoveTerminalsMoppModifier : public hkReferencedObject, public hkpMoppModifier {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpRemoveTerminalsMoppModifier(const hkpMoppCode *moppCode, const hkAabb &aabb,
                                   const hkArray<hkpShapeKey> &shapesToRemove);
    virtual hkBool shouldTerminalBeRemoved(unsigned int id, const hkpShapeKey *properties);
    virtual void ModifierFinished();

    hkArray<hkUint32> m_removeInfo;                      // +0xC
    const hkArray<hkpShapeKey> *m_tempShapesToRemove;    // +0x18
};

hkpRemoveTerminalsMoppModifier::hkpRemoveTerminalsMoppModifier(const hkpMoppCode *moppCode, const hkAabb &aabb,
                                                               const hkArray<hkpShapeKey> &shapesToRemove)
{
    m_tempShapesToRemove = &shapesToRemove;
    hkpMoppModifyVirtualMachine_queryAabb(moppCode, aabb, this);
    m_tempShapesToRemove = HK_NULL;
}
