#include "havok/hkBase.h"
#include "havok/hkpConstraintChainInstanceAction.h"
#include "havok/hkpConstraintChainInstance.h"

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

hkpConstraintChainInstance::hkpConstraintChainInstance(hkpConstraintChainData *data) : hkpConstraintInstance(PRIORITY_PSI)
{
    m_data = data;
    data->addReference();
    m_entities[0] = HK_NULL;
    m_entities[1] = HK_NULL;
    m_action = new hkpConstraintChainInstanceAction(this);
}
