// hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.cpp): frees the contact atom block; then m_idMgrA's destructor (out of line).
#include "havok/hkBase.h"

class hkpWorld;
class hkpRigidBody;
class hkpConstraintInstance;

#ifndef C2_HKDEALLOCATECHUNK
#define C2_HKDEALLOCATECHUNK
template <typename TYPE>
HK_FORCE_INLINE void HK_CALL hkDeallocateChunk(TYPE *ptr, int numberOfObjects, HK_MEMORY_CLASS cl)
{
    hkMemoryRouter::getInstance().heap().blockFree(static_cast<void *>(ptr), numberOfObjects * int(sizeof(TYPE)));
}
#endif

extern "C" {
int fn_82DC73A8(int sizeOfAllAtoms);   // the allocation size of a contact atom block (hkpSimpleContactConstraintAtomUtil)
}

// hkpDynamicsCpIdMgr (Physics/Dynamics/Collide/hkpDynamicsCpIdMgr.h): an hkArray<hkUint8>. Its implicit
// destructor is out of line (fn_82DAC7C8) and keeps its fn_ name (a C unit matches it), so it is reached
// through an inline wrapper; the array is declared without a destructor so that it is not destroyed twice.
class hkpDynamicsCpIdMgr;
extern "C" void fn_82DAC7C8(hkpDynamicsCpIdMgr *self);   // hkpDynamicsCpIdMgr::~hkpDynamicsCpIdMgr
class hkpDynamicsCpIdMgr {
public:
    HK_FORCE_INLINE ~hkpDynamicsCpIdMgr() { fn_82DAC7C8(this); }
    hkArrayBase<hkUint8> m_values;   // +0x0 (hkArray<hkUint8>)
};

struct hkpSimpleContactConstraintAtom {
    hkUint16 m_type;                 // +0x0
    hkUint16 m_sizeOfAllAtoms;       // +0x2
    hkUint16 m_numContactPoints;     // +0x4
    hkUint16 m_numReservedContactPoints;   // +0x6
};

#define C2_HKPCONSTRAINTDATA
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

hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData()
{
    hkpSimpleContactConstraintAtom *atom = m_atom;
    if (atom)
        hkDeallocateChunk<char>(reinterpret_cast<char *>(atom), fn_82DC73A8(atom->m_sizeOfAllAtoms), HK_MEMORY_CLASS_DYNAMICS);
}
