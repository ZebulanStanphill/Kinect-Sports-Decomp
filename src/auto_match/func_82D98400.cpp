// hkpBreakableConstraintData::hkpBreakableConstraintData(hkFinishLoadedObjectFlag)
// (Physics/Dynamics/Constraint/Breakable/hkpBreakableConstraintData.cpp). The bridge atom's finish constructor
// re-inits it with its stored pointer, then the class points it at itself.
#include "havok/hkBase.h"
#include "havok/hkpBreakableConstraintData.h"

hkpBreakableConstraintData::hkpBreakableConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
{
    if (f.m_finishing)
        m_atoms.m_bridgeAtom.init(this);
}
