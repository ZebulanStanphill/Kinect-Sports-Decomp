// hkpHingeConstraintData::hkpHingeConstraintData() (Physics/Dynamics/Constraint/Bilateral/Hinge/
// hkpHingeConstraintData.cpp), /O2 /QVMXReserve. The atoms' own constructor (82D96EB0) is out of line.
#include "havok/hkBase.h"
#include "havok/hkpHingeConstraintData.h"

hkpHingeConstraintData::hkpHingeConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();
    m_atoms.m_2dAng.m_freeRotationAxis = 0;
}
