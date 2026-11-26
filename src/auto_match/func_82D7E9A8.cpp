// hkpConstraintChainInstance::hkpConstraintChainInstance(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.h). It keeps its fn_ name and is written as an
// extern "C" function that runs the constructor on the given storage (MSVC's explicit constructor call;
// placement new would add a null check).
#include "havok/hkpConstraintChainInstance.h"

extern "C" hkpConstraintChainInstance *fn_82D7E9A8(hkpConstraintChainInstance *self, hkFinishLoadedObjectFlag f)
{
    self->hkpConstraintChainInstance::hkpConstraintChainInstance(f);
    return self;
}
