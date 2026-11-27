// hkpMalleableConstraintData::hkpMalleableConstraintData(hkFinishLoadedObjectFlag)
// (Physics/Dynamics/Constraint/Malleable/hkpMalleableConstraintData.cpp). The bridge atom's finish constructor
// re-inits it with its stored pointer, then the class points it at itself.
#include "havok/hkBase.h"
#include "havok/hkpMalleableConstraintData.h"

hkpMalleableConstraintData::hkpMalleableConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f)
{
    if (f.m_finishing)
        m_atoms.m_bridgeAtom.init(this);
}
