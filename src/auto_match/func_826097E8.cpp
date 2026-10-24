// Destructor of a game class derived from hkpPhysicsSystem (vtable lbl_821CA9D8, 5 slots like
// hkpPhysicsSystem's): stores its vtable, releases and clears the constraints, actions, rigid bodies
// and phantoms (count read once per array), then runs hkpPhysicsSystem::~hkpPhysicsSystem (fn_82D94BD8).
// The phantom loop goes through a local array reference: that puts the byte offset first in its
// lwzx/stwx (the other three loops access the member directly and put the data pointer first).
#include "havok/hkBase.h"

extern "C" const void *lbl_821CA9D8[];

class hkpRigidBody;
class hkpConstraintInstance;
class hkpAction;
class hkpPhantom;

class hkpPhysicsSystem : public hkReferencedObject {
public:
    virtual ~hkpPhysicsSystem();

    hkArray<hkReferencedObject *> m_rigidBodies;   // +0x8
    hkArray<hkReferencedObject *> m_constraints;   // +0x14
    hkArray<hkReferencedObject *> m_actions;       // +0x20
    hkArray<hkReferencedObject *> m_phantoms;      // +0x2C
};

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
        hkArray<hkReferencedObject *> &phantoms = self->m_phantoms;
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
