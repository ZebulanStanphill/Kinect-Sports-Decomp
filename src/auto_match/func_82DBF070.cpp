// hkpPointToPathConstraintData clone: allocates a new hkpPointToPathConstraintData (class allocator, out-of-line constructor) and copies its
// atoms (0xc bytes at +0xc) with hkString::memCpy. Havok code: /O2.
#include "havok/hkBase.h"
#include "havok/hkString.h"

class hkpConstraintData : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpConstraintData() : m_userData(0) {}
    hkUlong m_userData;   // +0x8
};

class __declspec(align(16)) hkpPointToPathConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_CONSTRAINT);
    hkpPointToPathConstraintData();
    hkUint8 m_atoms[12];
    hkUint8 m_tail[176 - 12 - 12];
};

extern "C" hkpPointToPathConstraintData *fn_82DBF070(const hkpPointToPathConstraintData *self)
{
    hkpPointToPathConstraintData *copy = new hkpPointToPathConstraintData();
    hkString::memCpy(copy->m_atoms, self->m_atoms, 12);
    return copy;
}
