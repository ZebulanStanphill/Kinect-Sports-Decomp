// hkpRemoveTerminalsMoppModifier::hkpRemoveTerminalsMoppModifier(const hkpMoppCode *, const hkAabb &,
// const hkArray<hkpShapeKey> &) (Physics/Collide/Shape/Compound/Tree/Mopp/Modifiers/
// hkpRemoveTerminalsMoppModifier.cpp): runs the MOPP query (fn_82DCDF98, under its fn_ name) with this as
// the modifier while m_tempShapesToRemove points at the keys. The second parameter is passed straight to
// the query; its type (an AABB) is a guess.
#include "havok/hkBase.h"
#include "havok/hkpRemoveTerminalsMoppModifier.h"

extern "C" void fn_82DCDF98(const hkpMoppCode *code, const hkAabb &aabb, hkpMoppModifier *modifier);
static HK_FORCE_INLINE void hkpMoppModifyVirtualMachine_queryAabb(const hkpMoppCode *code, const hkAabb &aabb,
                                                                  hkpMoppModifier *modifier)
{
    fn_82DCDF98(code, aabb, modifier);
}

hkpRemoveTerminalsMoppModifier::hkpRemoveTerminalsMoppModifier(const hkpMoppCode *moppCode, const hkAabb &aabb,
                                                               const hkArray<hkpShapeKey> &shapesToRemove)
{
    m_tempShapesToRemove = &shapesToRemove;
    hkpMoppModifyVirtualMachine_queryAabb(moppCode, aabb, this);
    m_tempShapesToRemove = HK_NULL;
}
