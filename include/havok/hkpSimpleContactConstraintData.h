// hkpSimpleContactConstraintData (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.h), 0x30 bytes: the
// constraint data of a contact, which holds the contact points in an hkpSimpleContactConstraintAtom block.
// Layout from the constructor (??0hkpSimpleContactConstraintData@@QAA@PAVhkpConstraintInstance@@PAVhkpRigidBody@@1@Z,
// 82DC7F58, out of line): the id manager at +0xC, the constraint at +0x24, the atom block it allocates
// (fn_82DC74A8) at +0x28 and the block's size at +0x2C; from the destructor (??1, 82DAC840), which frees the
// block. +0x20 is not written by either; its name (m_clientData) and the others' follow Havok's header. The
// vtable (??_7hkpSimpleContactConstraintData@@6B@, 18 slots) has eight slots after those hkpConstraintData.h
// declares; they are not declared (no unit names them).
#ifndef HAVOK_HKPSIMPLECONTACTCONSTRAINTDATA_H
#define HAVOK_HKPSIMPLECONTACTCONSTRAINTDATA_H

#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpDynamicsCpIdMgr.h"

class hkpConstraintInstance;
class hkpRigidBody;
struct hkpSimpleContactConstraintAtom;

class hkpSimpleContactConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    hkpSimpleContactConstraintData(hkpConstraintInstance *constraint, hkpRigidBody *bodyA, hkpRigidBody *bodyB);
    virtual ~hkpSimpleContactConstraintData();

    hkpDynamicsCpIdMgr m_idMgrA;                 // +0xC
    void *m_clientData;                          // +0x20
    hkpConstraintInstance *m_constraint;         // +0x24
    hkpSimpleContactConstraintAtom *m_atom;      // +0x28
    hkUint32 m_atomSize;                         // +0x2C
};

#endif
