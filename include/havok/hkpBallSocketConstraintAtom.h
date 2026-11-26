// hkpBallSocketConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x8 bytes:
// keeps the two pivots together.
// The members and their offsets are the game's reflection table for the class (lbl_8213F9C8): bodiesToNotify
// (+0x2), stabilizationFactor (+0x3) and maxImpulse (+0x4). The table lists stabilizationFactor as a UINT8;
// it is an hkUFloat8, whose assignment from a float is out of line (82CE5458): the constraint datas'
// constructors call it with 1.0f. The constructor is inline in the constraint datas' constructors.
#ifndef HAVOK_HKPBALLSOCKETCONSTRAINTATOM_H
#define HAVOK_HKPBALLSOCKETCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkUFloat8.h"
#include "havok/hkpConstraintAtom.h"

struct hkpBallSocketConstraintAtom : public hkpConstraintAtom {
    hkpBallSocketConstraintAtom()
        : hkpConstraintAtom(TYPE_BALL_SOCKET), m_bodiesToNotify(0), m_stabilizationFactor(1.0f),
          m_maxImpulse(3.40282e+38f)
    {
    }
    hkpBallSocketConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkUint8 m_bodiesToNotify;          // +0x2
    hkUFloat8 m_stabilizationFactor;   // +0x3
    hkReal m_maxImpulse;               // +0x4  HK_REAL_MAX
};

#endif
