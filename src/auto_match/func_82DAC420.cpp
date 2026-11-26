#include "havok/hkBase.h"
#include "havok/hkpSimpleContactConstraintAtom.h"
#include "havok/hkpSimpleConstraintContactMgr.h"

extern "C" {
int fn_82DC73A8(int sizeOfAllAtoms);   // the allocation size of a contact atom block (hkpSimpleContactConstraintAtomUtil)
}

#define C2_HKPCONSTRAINTDATA
// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

// hkpWorldOperationUtil::removeConstraintImmediately(hkpWorld *, hkpConstraintInstance *, FireCallbacks) is
// out of line (fn_82D8EAD8).
extern "C" void fn_82D8EAD8(hkpWorld *world, hkpConstraintInstance *constraint, int fireCallbacks);

// hkpConstraintInstance::setPriority(ConstraintPriority) is out of line (fn_82D958D8).
extern "C" void fn_82D958D8(hkpConstraintInstance *self, hkpConstraintInstance::ConstraintPriority priority);

hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr()
{
    if (m_contactConstraintData.m_atom->m_numContactPoints)
        fn_82D8EAD8(m_world, &m_constraint, 1);
    m_constraint.m_entities[0] = HK_NULL;
    m_constraint.m_entities[1] = HK_NULL;
    m_constraint.m_data = HK_NULL;
}
