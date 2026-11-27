// hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.cpp): frees the contact atom block; then m_idMgrA's destructor (out of line).
#include "havok/hkBase.h"
#include "havok/hkpConstraintData.h"
#include "havok/hkpDynamicsCpIdMgr.h"
#include "havok/hkpSimpleContactConstraintAtom.h"

class hkpConstraintInstance;

extern "C" {
int fn_82DC73A8(int sizeOfAllAtoms);   // the allocation size of a contact atom block (hkpSimpleContactConstraintAtomUtil)
}

#define C2_HKPCONSTRAINTDATA
// hkpSimpleContactConstraintData (Physics/Dynamics/Collide/hkpSimpleContactConstraintData.h), 0x30 bytes.
class hkpSimpleContactConstraintData : public hkpConstraintData {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_DYNAMICS);
    virtual ~hkpSimpleContactConstraintData();

    hkpDynamicsCpIdMgr m_idMgrA;                  // +0xC (0x14 bytes)
    void *m_clientData;                           // +0x20
    hkpConstraintInstance *m_constraint;          // +0x24
    hkpSimpleContactConstraintAtom *m_atom;       // +0x28
    hkUint32 m_atomSize;                          // +0x2C
};

hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData()
{
    hkpSimpleContactConstraintAtom *atom = m_atom;
    if (atom)
        hkDeallocateChunk<char>(reinterpret_cast<char *>(atom), fn_82DC73A8(atom->m_sizeOfAllAtoms), HK_MEMORY_CLASS_DYNAMICS);
}
