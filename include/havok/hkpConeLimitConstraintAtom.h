// hkpConeLimitConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x14 bytes:
// limits the angle between an axis of each body (a ragdoll's cone and its planes).
// The members, their offsets and types are the game's reflection table for the class (lbl_83184040, built by
// 83132AC8 with the MeasurementMode enum of lbl_8213FD0C, whose items are at lbl_8213FCFC). The reflection
// defaults are m_memOffsetToAngleOffset = 1 and m_angularLimitsTauFactor = 1.0f; the constructor, inline in
// the constraint datas' constructors, sets the atom type, m_isEnabled = true and m_memOffsetToAngleOffset = 0.
#ifndef HAVOK_HKPCONELIMITCONSTRAINTATOM_H
#define HAVOK_HKPCONELIMITCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"

struct hkpConeLimitConstraintAtom : public hkpConstraintAtom {
    enum MeasurementMode {
        ZERO_WHEN_VECTORS_ALIGNED = 0,
        ZERO_WHEN_VECTORS_PERPENDICULAR = 1
    };
    hkpConeLimitConstraintAtom() : hkpConstraintAtom(TYPE_CONE_LIMIT), m_isEnabled(true), m_memOffsetToAngleOffset(0) {}
    hkpConeLimitConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_isEnabled;                // +0x2
    hkUint8 m_twistAxisInA;             // +0x3
    hkUint8 m_refAxisInB;               // +0x4
    hkUint8 m_angleMeasurementMode;     // +0x5  hkEnum<MeasurementMode, hkUint8>
    hkUint8 m_memOffsetToAngleOffset;   // +0x6
    hkReal m_minAngle;                  // +0x8
    hkReal m_maxAngle;                  // +0xC
    hkReal m_angularLimitsTauFactor;    // +0x10
};

#endif
