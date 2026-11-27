// hkpSimpleContactConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpSimpleContactConstraintAtom.h,
// Havok's path), 0x30 bytes: the head of a contact constraint's atom block; the contact points and their
// properties follow it.
// The members, their offsets and types are the game's reflection table for the class (lbl_8213F908).
// The finish constructor is out of line (82D9FE90): when finishing it recomputes m_contactPointPropertiesStriding
// as (numUserDatasForBodyA + B + 5) * 4.
#ifndef HAVOK_HKPSIMPLECONTACTCONSTRAINTATOM_H
#define HAVOK_HKPSIMPLECONTACTCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintAtom.h"
#include "havok/hkpSimpleContactConstraintDataInfo.h"

struct hkpSimpleContactConstraintAtom : public hkpConstraintAtom {
    HK_FORCE_INLINE hkpSimpleContactConstraintAtom() : hkpConstraintAtom(TYPE_CONTACT) {}
    hkpSimpleContactConstraintAtom(hkFinishLoadedObjectFlag f);

    hkUint16 m_sizeOfAllAtoms;                   // +0x2
    hkUint16 m_numContactPoints;                 // +0x4
    hkUint16 m_numReservedContactPoints;         // +0x6
    hkUint8 m_numUserDatasForBodyA;              // +0x8
    hkUint8 m_numUserDatasForBodyB;              // +0x9
    hkUint8 m_contactPointPropertiesStriding;    // +0xA
    hkUint16 m_maxNumContactPoints;              // +0xC
    hkpSimpleContactConstraintDataInfo m_info;   // +0x10
};

#endif
