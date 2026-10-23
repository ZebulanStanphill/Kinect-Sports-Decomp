// hkpBallSocketChainData's scalar deleting destructor: it calls the out-of-line destructor (fn_82D9B138,
// ??1hkpBallSocketChainData@@UAA@XZ) and frees through the class allocator. The constructor below only
// makes the compiler emit the vtable, and with it the deleting destructor.
#include "havok/hkBase.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);

    hkUlong m_userData;   // +0x8
};

class hkpConstraintChainData : public hkpConstraintData {
};

class hkpBallSocketChainData : public hkpConstraintChainData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkpBallSocketChainData() {}
    virtual ~hkpBallSocketChainData();
};

void emitVtable_82D9B450(void *p) { new (p) hkpBallSocketChainData; }
