// hkpGenericConstraintData's scalar deleting destructor: it calls the out-of-line destructor
// (fn_82D9DF68, ??1hkpGenericConstraintData@@UAA@XZ) and frees through the class allocator.
// The constructor below only makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);

    hkUlong m_userData;   // +0x8
};

class hkpGenericConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpGenericConstraintData() {}
    virtual ~hkpGenericConstraintData();

    char m_atoms[0xC];      // +0xC  hkpBridgeAtoms
    char m_scheme[0x40];    // +0x18 hkpGenericConstraintDataScheme
};

void emitVtable_82D9EA58(void *p) { new (p) hkpGenericConstraintData; }
