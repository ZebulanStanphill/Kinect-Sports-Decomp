// hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData()
// (Physics/Dynamics/Constraint/Bilateral/PointToPlane/hkpPointToPlaneConstraintData.cpp), /O2 /QVMXReserve.
// The atoms' constructors set the atom types; the body sets both local transforms to identity and the
// constrained axis to 0. It keeps its fn_ name (func_82DBF2A0, a clone function a C unit can match, calls it),
// so the constructor is inline and run by MSVC's explicit constructor call.
// The 1.0f is a literal in the original (loaded once for all six diagonal stores).
#include "havok/hkBase.h"
#include "havok/hkpPointToPlaneConstraintData.h"

HK_FORCE_INLINE hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();
    m_atoms.m_lin.m_axisIndex = 0;
}

extern "C" hkpPointToPlaneConstraintData *fn_82D98F80(hkpPointToPlaneConstraintData *self)
{
    self->hkpPointToPlaneConstraintData::hkpPointToPlaneConstraintData();
    return self;
}
