// hkpRotationalConstraintData::hkpRotationalConstraintData() (Physics/Dynamics/Constraint/Bilateral/Rotational).
//
// Layout: hkpConstraintData (hkReferencedObject + hkUlong m_userData at +0x8), then the 16-byte aligned
// Atoms at +0x10: hkpSetLocalRotationsConstraintAtom (type 4; m_rotationA at +0x20, m_rotationB at
// +0x50) and hkpAngConstraintAtom at +0x80 (type 13, first constrained axis +0x82, count +0x83).
// hkMatrix3::setIdentity() zeroes the columns through an uninitialised local (lvx + vxor) and then
// writes 1.0f to the diagonal through hkVector4::operator().
//
// The original uses the literal 1.0f, whose load (one lfs for all six stores) the scheduler places
// freely. Built with /O2 /QVMXReserve.
#include "havok/hkBase.h"
#include "havok/hkpRotationalConstraintData.h"

hkpRotationalConstraintData::hkpRotationalConstraintData()
{
    m_atoms.m_rotations.m_rotationA.setIdentity();
    m_atoms.m_rotations.m_rotationB.setIdentity();
    m_atoms.m_ang.m_firstConstrainedAxis = 0;
    m_atoms.m_ang.m_numConstrainedAxes = 3;
}
