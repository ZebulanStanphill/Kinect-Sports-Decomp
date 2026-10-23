// hkpSimpleContactConstraintData's scalar deleting destructor ??_GhkpSimpleContactConstraintData@@UAAPAXI@Z
// (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.h): calls the out-of-line destructor
// (fn_82DAC840), then frees through the class allocator. The function at the end only makes the compiler
// emit the vtable, and with it this function.
#include "havok/hkBase.h"

class hkpRigidBody;
class hkpConstraintInstance;
struct hkpSimpleContactConstraintAtom;

// hkpDynamicsCpIdMgr (Physics/Dynamics/Collide/hkpDynamicsCpIdMgr.h): an hkArray<hkUint8>.
class hkpDynamicsCpIdMgr {
public:
    hkArrayBase<hkUint8> m_values;   // +0x0 (hkArray<hkUint8>)
};

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkUlong m_userData;   // +0x8
};

// hkpSimpleContactConstraintData (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.h), 0x30 bytes.
class hkpSimpleContactConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual ~hkpSimpleContactConstraintData();

    hkpDynamicsCpIdMgr m_idMgrA;                  // +0xC
    void *m_clientData;                           // +0x18
    hkpConstraintInstance *m_constraint;          // +0x1C
    char m_pad20[0x8];                            // +0x20
    hkpSimpleContactConstraintAtom *m_atom;       // +0x28
    hkUint32 m_atomSize;                          // +0x2C
};

void emitVtable_82DAC8C0(void *p) { new (p) hkpSimpleContactConstraintData; }
