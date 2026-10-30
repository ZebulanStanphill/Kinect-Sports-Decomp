// hkpRagdollLimitsData clone: allocates a new hkpRagdollLimitsData (class allocator, out-of-line constructor) and copies its
// atoms (0xac bytes at +0x10) with hkString::memCpy. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkString.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class __declspec(align(16)) hkpRagdollLimitsData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpRagdollLimitsData();
    hkUint8 m_pad[16 - 0xc];
    hkUint8 m_atoms[172];
    hkUint8 m_tail[192 - 16 - 172];
};

extern "C" hkpRagdollLimitsData *fn_82DBF3F0(const hkpRagdollLimitsData *self)
{
    hkpRagdollLimitsData *copy = new hkpRagdollLimitsData();
    hkString::memCpy(copy->m_atoms, self->m_atoms, 172);
    return copy;
}
