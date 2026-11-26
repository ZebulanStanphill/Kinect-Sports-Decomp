// Destructor of a game class derived from hkpPhysicsSystem (vtable lbl_821CA9D8, 5 slots like
// hkpPhysicsSystem's): stores its vtable, releases and clears the constraints, actions, rigid bodies
// and phantoms (count read once per array), then runs hkpPhysicsSystem::~hkpPhysicsSystem (fn_82D94BD8).
// The phantom loop goes through a local array reference: that puts the byte offset first in its
// lwzx/stwx (the other three loops access the member directly and put the data pointer first).
#include "havok/hkBase.h"
#include "havok/hkpAction.h"
#include "havok/hkpConstraintInstance.h"
#include "havok/hkpPhantom.h"
#include "havok/hkpPhysicsSystem.h"
#include "havok/hkpRigidBody.h"

extern "C" const void *lbl_821CA9D8[];

extern "C" void fn_826097E8(hkpPhysicsSystem *self)
{
    *(const void **)self = lbl_821CA9D8;
    {
        int n = self->m_constraints.getSize();
        for (int i = 0; i < n; i++) {
            if (self->m_constraints[i]) {
                self->m_constraints[i]->removeReference();
                self->m_constraints[i] = 0;
            }
        }
    }
    {
        int n = self->m_actions.getSize();
        for (int i = 0; i < n; i++) {
            if (self->m_actions[i]) {
                self->m_actions[i]->removeReference();
                self->m_actions[i] = 0;
            }
        }
    }
    {
        int n = self->m_rigidBodies.getSize();
        for (int i = 0; i < n; i++) {
            if (self->m_rigidBodies[i]) {
                self->m_rigidBodies[i]->removeReference();
                self->m_rigidBodies[i] = 0;
            }
        }
    }
    {
        hkArray<hkpPhantom *> &phantoms = self->m_phantoms;
        int n = phantoms.getSize();
        for (int i = 0; i < n; i++) {
            if (phantoms[i]) {
                phantoms[i]->removeReference();
                phantoms[i] = 0;
            }
        }
    }
    self->hkpPhysicsSystem::~hkpPhysicsSystem();
}
