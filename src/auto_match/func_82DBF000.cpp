// hkpLimitedHingeConstraintData clone: allocates a new hkpLimitedHingeConstraintData (class allocator, out-of-line constructor) and copies its
// atoms (0xcc bytes at +0x10) with hkString::memCpy. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkString.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class __declspec(align(16)) hkpLimitedHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpLimitedHingeConstraintData();
    hkUint8 m_pad[16 - 0xc];
    hkUint8 m_atoms[204];
    hkUint8 m_tail[224 - 16 - 204];
};

extern "C" hkpLimitedHingeConstraintData *fn_82DBF000(const hkpLimitedHingeConstraintData *self)
{
    hkpLimitedHingeConstraintData *copy = new hkpLimitedHingeConstraintData();
    hkString::memCpy(copy->m_atoms, self->m_atoms, 204);
    return copy;
}
