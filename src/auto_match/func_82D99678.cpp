// hkpWheelConstraintData::hkpWheelConstraintData() (Physics/Dynamics/Constraint/Bilateral/Wheel/
// hkpWheelConstraintData.cpp), /O2 /QVMXReserve. Layouts from the game's hkClass data.
// The padding byte loop (HK_CONSTRAINT_FILL_PADDING_WITH_ZERO, from &m_lin2 + 1 to &m_steeringBase,
// an empty range) is not folded when it runs in the constructor body through an Atoms reference;
// inside Atoms() it folds away. Because that loop comes first, the matrices' local zero vectors are
// read as undefined registers (`vxor v11,v11,v11`, no stack load): MSVC keeps an uninitialized local
// in its stack slot only when it is read in the entry block.
// The lin0Limit assignments must come before lin0Soft's (order of the constant loads).
// 1.0f is a literal; 0.5f is __real@3f000000 (Matching units reference it), a selectany definition. -0.5f is
// renamed __real@bf000000.
#include "havok/hkBase.h"
#include "havok/hkpWheelConstraintData.h"

#define HK_CONSTRAINT_FILL_PADDING_WITH_ZERO(fromAfter, tillBefore) \
    { for (hkUint8 *p = (hkUint8 *)((&(fromAfter)) + 1); p < (hkUint8 *)(&(tillBefore)); p++) *p = 0; }

hkpWheelConstraintData::hkpWheelConstraintData()
{
    Atoms &atoms = m_atoms;
    HK_CONSTRAINT_FILL_PADDING_WITH_ZERO(atoms.m_lin2, atoms.m_steeringBase);
    m_atoms.m_lin0Limit.m_axisIndex = 0;
    m_atoms.m_lin0Limit.m_min = -0.5f;
    m_atoms.m_lin0Limit.m_max = 0.5f;
    m_atoms.m_lin0Soft.m_axisIndex = 0;
    m_atoms.m_lin0Soft.m_tau = 0.0f;
    m_atoms.m_lin0Soft.m_damping = 0.0f;
    m_atoms.m_lin1.m_axisIndex = 1;
    m_atoms.m_lin2.m_axisIndex = 2;

    m_atoms.m_steeringBase.m_rotationA.setIdentity();
    m_atoms.m_steeringBase.m_rotationB.setIdentity();
    m_atoms.m_suspensionBase.m_transformA.setIdentity();
    m_atoms.m_suspensionBase.m_transformB.setIdentity();

    m_atoms.m_2dAng.m_freeRotationAxis = 0;
}
