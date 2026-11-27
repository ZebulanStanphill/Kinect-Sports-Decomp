// hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/PointToPlane/hkpPointToPlaneConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types; the body sets both local transforms to identity and the
// constrained axis to 0.
// The 1.0f is a literal in the original (loaded once for all six diagonal stores).
#include "havok/hkBase.h"
#include "havok/hkpPointToPlaneConstraintData.h"

hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();
    m_atoms.m_lin.m_axisIndex = 0;
}
