// hkpWheelConstraintData clone: allocates a new hkpWheelConstraintData (class allocator, out-of-line constructor) and copies its
// atoms (0x124 bytes at +0x10) with hkString::memCpy. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkString.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class __declspec(align(16)) hkpWheelConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpWheelConstraintData();
    hkUint8 m_pad[16 - 0xc];
    hkUint8 m_atoms[292];
    hkUint8 m_tail[352 - 16 - 292];
};

extern "C" hkpWheelConstraintData *fn_82DBF230(const hkpWheelConstraintData *self)
{
    hkpWheelConstraintData *copy = new hkpWheelConstraintData();
    hkString::memCpy(copy->m_atoms, self->m_atoms, 292);
    return copy;
}
