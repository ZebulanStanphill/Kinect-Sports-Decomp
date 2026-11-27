// hkpBallGun::reset(hkpWorld *) (Physics/Utilities/Weapons/hkpBallGun.cpp): slot +0x20 of ??_7hkpBallGun@@6B@,
// inherited by hkpMountedBallGun's. Takes every queued bullet out: the listeners hear of it (last first), a
// bullet still in this world is removed from it (fn_82D81240, hkpWorld has no header yet), and it is released.
#include "havok/hkpRigidBody.h"
#include "havok/hkpBallGun.h"
#include "havok/hkQueue.h"

extern "C" hkBool fn_82D81240(hkpWorld *world, hkpEntity *entity);

void hkpBallGun::reset(hkpWorld *world)
{
    while (m_addedBodies->getSize() != 0) {
        hkpRigidBody *rb;
        m_addedBodies->dequeue(rb);
        for (int i = m_listeners.getSize() - 1; i >= 0; i--) {
            m_listeners[i]->bulletDeletedCallback(rb);
        }
        if (rb->getWorld() == world) {
            fn_82D81240(world, rb);
        }
        rb->removeReference();
    }
}
