// hkpHingeConstraintData clone: allocates a new hkpHingeConstraintData (class allocator, out-of-line constructor) and copies its
// atoms (0x9c bytes at +0x10) with hkString::memCpy. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkString.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class __declspec(align(16)) hkpHingeConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpHingeConstraintData();
    hkUint8 m_pad[16 - 0xc];
    hkUint8 m_atoms[156];
    hkUint8 m_tail[176 - 16 - 156];
};

extern "C" hkpHingeConstraintData *fn_82DBEF90(const hkpHingeConstraintData *self)
{
    hkpHingeConstraintData *copy = new hkpHingeConstraintData();
    hkString::memCpy(copy->m_atoms, self->m_atoms, 156);
    return copy;
}
