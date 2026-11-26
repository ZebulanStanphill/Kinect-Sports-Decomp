// hkpEndOfStepCallbackUtil::~hkpEndOfStepCallbackUtil, the implicit destructor emitted out of line: the three
// arrays in reverse order, then hkpWorldPostSimulationListener's and hkReferencedObject's parts. It keeps its fn_
// name (the deleting destructor fn_82DC90C8 calls it), so the members are destroyed explicitly.
#include "havok/hkBase.h"
#include "havok/hkpEndOfStepCallbackUtil.h"

extern "C" void fn_82DB4350(hkpEndOfStepCallbackUtil *self)
{
    self->m_removedCollisions.~hkArray();
    self->m_newCollisions.~hkArray();
    self->m_collisions.~hkArray();
    self->hkpWorldPostSimulationListener::~hkpWorldPostSimulationListener();
    self->hkReferencedObject::~hkReferencedObject();
}
