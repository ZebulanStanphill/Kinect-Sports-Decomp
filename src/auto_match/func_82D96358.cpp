#include "havok/hkBase.h"
#include "havok/hkpConstraintInstance.h"

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

hkpConstraintInstance::hkpConstraintInstance(ConstraintPriority priority)
    : m_owner(HK_NULL), m_constraintModifiers(HK_NULL), m_priority(priority), m_wantRuntime(true),
      m_destructionRemapInfo(ON_DESTRUCTION_REMAP), m_userData(0), m_internal(HK_NULL), m_uid(0xfffffff0)
{
}
