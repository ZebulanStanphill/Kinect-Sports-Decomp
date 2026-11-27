// hkpConstraintChainInstance::hkpConstraintChainInstance(hkFinishLoadedObjectFlag), the finish constructor
// (Physics/Dynamics/Constraint/Chain/hkpConstraintChainInstance.cpp).
#include "havok/hkpConstraintChainInstance.h"

hkpConstraintChainInstance::hkpConstraintChainInstance(hkFinishLoadedObjectFlag f) : hkpConstraintInstance(f), m_chainedEntities(f)
{
}
