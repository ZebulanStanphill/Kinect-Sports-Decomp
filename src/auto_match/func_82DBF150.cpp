// hkpRagdollConstraintData clone: allocates a new hkpRagdollConstraintData (class allocator, out-of-line constructor) and copies its
// atoms (0x130 bytes at +0x10) with hkString::memCpy. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkString.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class __declspec(align(16)) hkpRagdollConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpRagdollConstraintData();
    hkUint8 m_pad[16 - 0xc];
    hkUint8 m_atoms[304];
    hkUint8 m_tail[320 - 16 - 304];
};

extern "C" hkpRagdollConstraintData *fn_82DBF150(const hkpRagdollConstraintData *self)
{
    hkpRagdollConstraintData *copy = new hkpRagdollConstraintData();
    hkString::memCpy(copy->m_atoms, self->m_atoms, 304);
    return copy;
}
