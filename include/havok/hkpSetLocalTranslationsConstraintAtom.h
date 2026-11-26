// hkpSetLocalTranslationsConstraintAtom (Physics/ConstraintSolver/Constraint/Atom/hkpConstraintAtom.h), 0x30 bytes:
// the pivots in each body's space. The members, their offsets and types are the game's reflection table for the
// class (lbl_8213FA58, the hkClassMember array of hkpSetLocalTranslationsConstraintAtomClass). The constructor is
// inline in the constraint datas' constructors; it sets the atom type. The finish constructor (Havok's) leaves the
// loaded members alone.
#ifndef HAVOK_HKPSETLOCALTRANSLATIONSCONSTRAINTATOM_H
#define HAVOK_HKPSETLOCALTRANSLATIONSCONSTRAINTATOM_H

#include "havok/hkBase.h"
#include "havok/hkVector4.h"
#include "havok/hkpConstraintAtom.h"

struct hkpSetLocalTranslationsConstraintAtom : public hkpConstraintAtom {
    hkpSetLocalTranslationsConstraintAtom() : hkpConstraintAtom(TYPE_SET_LOCAL_TRANSLATIONS) {}
    hkpSetLocalTranslationsConstraintAtom(hkFinishLoadedObjectFlag f) : hkpConstraintAtom(f) {}

    hkVector4 m_translationA;   // +0x10
    hkVector4 m_translationB;   // +0x20
};

#endif
