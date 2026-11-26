#include "havok/hkBase.h"
#include "havok/hkpConstraintInstance.h"

// Out-of-line helpers that keep their fn_ names.
extern "C" {
void fn_82DBFAA8(void *constraint);   // hkpConstraintCallbackUtil::fireConstraintDeleted(hkpConstraintInstance *)
}

extern "C" hkpConstraintInstance *fn_82D962A8(hkpConstraintInstance *self, hkpEntity *entityA, hkpEntity *entityB,
                                              hkpConstraintData *data, hkpConstraintInstance::ConstraintPriority priority)
{
    self->hkpConstraintInstance::hkpConstraintInstance(entityA, entityB, data, priority);
    return self;
}
