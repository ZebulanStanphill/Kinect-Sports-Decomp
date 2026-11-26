// hkpSetLocalTransformsConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x90 bytes:
// the transforms of the constraint space in each body's space. The members, their offsets and types are the game's
// reflection table for the class (lbl_8213FA28, the hkClassMember array of
// hkpSetLocalTransformsConstraintAtomClass). The constructor is inline in the constraint datas' constructors; it
// sets the atom type. The finish constructor (Havok's) leaves the loaded members alone.
#ifndef HAVOK_HKPSETLOCALTRANSFORMSCONSTRAINTATOM_H
#define HAVOK_HKPSETLOCALTRANSFORMSCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkTransform.h"
#include "havok/hkpConstraintAtom.h"

struct hkpSetLocalTransformsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTransformsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSFORMS) {}
    hkpSetLocalTransformsConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkTransform m_transformA;   // +0x10
    hkTransform m_transformB;   // +0x50
};

#endif
