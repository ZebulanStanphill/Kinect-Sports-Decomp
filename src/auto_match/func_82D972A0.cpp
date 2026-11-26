// hkpPrismaticConstraintData::hkpPrismaticConstraintData() (Physics/Dynamics/Constraint/Bilateral/Prismatic/
// hkpPrismaticConstraintData.cpp), /O2 /QVMXReserve. It keeps its fn_ name: its three callers
// (func_8260A120, func_82DBF0E0, func_82DBF6D8) use no other C++ and could match as C.
// The atoms' constructors are inlined (each stores its type; motor and friction start enabled).
// HK_REAL_MAX and -HK_REAL_MAX were literals in Havok; they are defined here (selectany) with their
// configured lbl_ names so that the compiler may schedule their loads like constants (an extern
// declaration keeps the HK_REAL_MAX load after the stores).
#include "havok/hkBase.h"
#include "havok/hkpPrismaticConstraintData.h"

// The game's 1.0f keeps its lbl_ name (Matching units reference it).

HK_FORCE_INLINE hkpPrismaticConstraintData::hkpPrismaticConstraintData()
{
    m_atoms.m_transforms.m_transformA.setIdentity();
    m_atoms.m_transforms.m_transformB.setIdentity();

    m_atoms.m_linLimit.m_axisIndex = 0;
    m_atoms.m_friction.m_frictionAxis = 0;
    m_atoms.m_linLimit.m_min = -3.40282e+38f;
    m_atoms.m_linLimit.m_max = 3.40282e+38f;
    m_atoms.m_friction.m_maxFrictionForce = 0.0f;
    m_atoms.m_motor.m_isEnabled = false;
    m_atoms.m_motor.m_targetPosition = 0.0f;
    m_atoms.m_motor.m_motor = HK_NULL;
    m_atoms.m_motor.m_motorAxis = 0;
    m_atoms.m_motor.m_initializedOffset = 0x40;
    m_atoms.m_motor.m_previousTargetPositionOffset = 0x44;
    m_atoms.m_ang.m_firstConstrainedAxis = 0;
    m_atoms.m_ang.m_numConstrainedAxes = 3;
    m_atoms.m_lin0.m_axisIndex = 1;
    m_atoms.m_lin1.m_axisIndex = 2;
}

extern "C" hkpPrismaticConstraintData *fn_82D972A0(hkpPrismaticConstraintData *self)
{
    self->hkpPrismaticConstraintData::hkpPrismaticConstraintData();
    return self;
}
