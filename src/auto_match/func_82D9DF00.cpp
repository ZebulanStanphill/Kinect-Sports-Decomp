// hkpGenericConstraintData::hkpGenericConstraintData(hkFinishLoadedObjectFlag)
// (Physics/Dynamics/Constraint/Bilateral/Generic/hkpGenericConstraintData.cpp).
#include "havok/hkBase.h"
#include "havok/hkpGenericConstraintData.h"

hkpGenericConstraintData::hkpGenericConstraintData(hkFinishLoadedObjectFlag f) : hkpConstraintData(f), m_atoms(f), m_scheme(f)
{
    if (f.m_finishing)
        m_atoms.m_bridgeAtom.init(this);
}
