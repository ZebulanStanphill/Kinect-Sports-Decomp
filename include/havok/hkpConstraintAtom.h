// hkpConstraintAtom and the bridge atom
// (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h).
#ifndef HAVOK_HKPCONSTRAINTATOM_H
#define HAVOK_HKPCONSTRAINTATOM_H

#include "havok/hkBase.h"

class hkpConstraintData;

// The atom types are the 30 names and values of the game's reflection table for this enum
// (hkpConstraintAtomAtomTypeEnumItems, lbl_8213F780), which ends with
// TYPE_MODIFIER_CENTER_OF_MASS_CHANGER = 28 and TYPE_MAX = 29. FIRST_MODIFIER_TYPE and
// LAST_MODIFIER_TYPE are not in the table; they follow Havok's header.
struct hkpConstraintAtom {
    enum AtomType {
        TYPE_INVALID = 0,
        TYPE_BRIDGE = 1,
        TYPE_SET_LOCAL_TRANSFORMS = 2,
        TYPE_SET_LOCAL_TRANSLATIONS = 3,
        TYPE_SET_LOCAL_ROTATIONS = 4,
        TYPE_BALL_SOCKET = 5,
        TYPE_STIFF_SPRING = 6,
        TYPE_LIN = 7,
        TYPE_LIN_SOFT = 8,
        TYPE_LIN_LIMIT = 9,
        TYPE_LIN_FRICTION = 10,
        TYPE_LIN_MOTOR = 11,
        TYPE_2D_ANG = 12,
        TYPE_ANG = 13,
        TYPE_ANG_LIMIT = 14,
        TYPE_TWIST_LIMIT = 15,
        TYPE_CONE_LIMIT = 16,
        TYPE_ANG_FRICTION = 17,
        TYPE_ANG_MOTOR = 18,
        TYPE_RAGDOLL_MOTOR = 19,
        TYPE_PULLEY = 20,
        TYPE_OVERWRITE_PIVOT = 21,
        TYPE_CONTACT = 22,
        TYPE_MODIFIER_SOFT_CONTACT = 23,
        TYPE_MODIFIER_MASS_CHANGER = 24,
        TYPE_MODIFIER_VISCOUS_SURFACE = 25,
        TYPE_MODIFIER_MOVING_SURFACE = 26,
        TYPE_MODIFIER_IGNORE_CONSTRAINT = 27,
        TYPE_MODIFIER_CENTER_OF_MASS_CHANGER = 28,
        TYPE_MAX = 29,
        FIRST_MODIFIER_TYPE = TYPE_MODIFIER_SOFT_CONTACT,
        LAST_MODIFIER_TYPE = TYPE_MODIFIER_CENTER_OF_MASS_CHANGER
    };
    hkpConstraintAtom(AtomType type) : m_type(hkUint16(type)) {}
    hkpConstraintAtom(hkFinishLoadedObjectFlag f) {}
    bool isModifierType() const { return m_type >= FIRST_MODIFIER_TYPE; }

    hkUint16 m_type;   // +0x0  hkEnum<AtomType, hkUint16>
};

// hkpModifierConstraintAtom, 0x20 bytes: the head of a chain of modifiers in front of a constraint's own
// atoms. The members are those of its reflection table (lbl_82140000; the class is registered with size
// 0x20 by 83132E48): modifierAtomSize +0x10 (flagged 16-byte aligned, which is why it does not follow
// m_type directly), childSize +0x12, child +0x14 and `pad`, two words at +0x18.
struct hkpModifierConstraintAtom : public hkpConstraintAtom {
    __declspec(align(16)) hkUint16 m_modifierAtomSize;   // +0x10
    hkUint16 m_childSize;                                // +0x12
    hkpConstraintAtom *m_child;                          // +0x14
    hkUint32 m_pad[2];                                   // +0x18
};

extern "C" void fn_82D9FE70(void *self, hkpConstraintData *constraintData);   // hkpBridgeConstraintAtom::init

// 0xC bytes: lets a constraint data build its own Jacobians.
struct hkpBridgeConstraintAtom : public hkpConstraintAtom {
    hkpBridgeConstraintAtom() : hkpConstraintAtom(TYPE_BRIDGE) {}
    hkpBridgeConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f)
    {
        if (f.m_finishing)
            init(m_constraintData);
    }
    void init(hkpConstraintData *constraintData) { fn_82D9FE70(this, constraintData); }

    void *m_buildJacobianFunc;           // +0x4
    hkpConstraintData *m_constraintData; // +0x8
};

struct hkpBridgeAtoms {
    hkpBridgeAtoms() {}
    hkpBridgeAtoms(hkFinishLoadedObjectFlag f) : m_bridgeAtom(f) {}
    hkpBridgeConstraintAtom m_bridgeAtom;
};

#endif
