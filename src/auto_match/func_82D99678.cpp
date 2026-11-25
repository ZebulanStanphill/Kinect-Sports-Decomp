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
#include "havok/hkTransform.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

#define HK_CONSTRAINT_FILL_PADDING_WITH_ZERO(fromAfter, tillBefore) \
    { for (hkUint8 *p = (hkUint8 *)((&(fromAfter)) + 1); p < (hkUint8 *)(&(tillBefore)); p++) *p = 0; }

struct hkpConstraintAtom {
    enum AtomType {
        TYPE_SET_LOCAL_TRANSFORMS = 2,
        TYPE_SET_LOCAL_ROTATIONS = 4,
        TYPE_LIN = 7,
        TYPE_LIN_SOFT = 8,
        TYPE_LIN_LIMIT = 9,
        TYPE_2D_ANG = 12
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkUint16 m_type;
};

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkTransform m_transformA;
    hkTransform m_transformB;
};

struct hkpLinLimitConstraintAtom : public hkpConstraintAtom {
    hkpLinLimitConstraintAtom() : hkpConstraintAtom(TYPE_LIN_LIMIT) {}
    hkUint8 m_axisIndex;
    hkReal m_min;
    hkReal m_max;
};

struct hkpLinSoftConstraintAtom : public hkpConstraintAtom {
    hkpLinSoftConstraintAtom() : hkpConstraintAtom(TYPE_LIN_SOFT) {}
    hkUint8 m_axisIndex;
    hkReal m_tau;
    hkReal m_damping;
};

struct hkpLinConstraintAtom : public hkpConstraintAtom {
    hkpLinConstraintAtom() : hkpConstraintAtom(TYPE_LIN) {}
    hkUint8 m_axisIndex;
};

struct hkpSetLocalRotationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalRotationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_ROTATIONS) {}
    hkRotation m_rotationA;
    hkRotation m_rotationB;
};

struct hkp2dAngConstraintAtom : public hkpConstraintAtom {
    hkp2dAngConstraintAtom() : hkpConstraintAtom(TYPE_2D_ANG) {}
    hkUint8 m_freeRotationAxis;
};

class hkpWheelConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    struct Atoms {
        Atoms() {}
        hkpSetLocalTransformsConstraintAtom m_suspensionBase;   // +0x10
        hkpLinLimitConstraintAtom m_lin0Limit;                  // +0xA0
        hkpLinSoftConstraintAtom m_lin0Soft;                    // +0xAC
        hkpLinConstraintAtom m_lin1;                            // +0xB8
        hkpLinConstraintAtom m_lin2;                            // +0xBC
        hkpSetLocalRotationsConstraintAtom m_steeringBase;      // +0xC0
        hkp2dAngConstraintAtom m_2dAng;                         // +0x130
    };
    hkpWheelConstraintData();
    Atoms m_atoms;                        // +0x10
    hkVector4 m_initialAxleInB;           // +0x140
    hkVector4 m_initialSteeringAxisInB;   // +0x150
};

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
