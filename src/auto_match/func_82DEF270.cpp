// hkpBallGun::hkpBallGun(hkFinishLoadedObjectFlag) (Physics/Utilities/Weapons/hkpBallGun.h): hkpFirstPersonGun's
// finish constructor, the vtable, and when finishing m_type = WEAPON_TYPE_BALLGUN and a new queue for the
// added bodies (+nosave), sized by m_maxBulletsInWorld.
#include "havok/hkpBallGun.h"
#include "havok/hkQueue.h"

// The queue's allocation and default constructor (hkQueue.h does not declare them): the queue is cleared
// inside the allocation's null test; setCapacity runs after it.
static HK_FORCE_INLINE hkQueue<hkpRigidBody *> *newQueue()
{
    hkQueue<hkpRigidBody *> *q =
        (hkQueue<hkpRigidBody *> *)hkMemoryRouter::getInstance().heap().blockAlloc(sizeof(hkQueue<hkpRigidBody *>));
    if (q != HK_NULL) {
        q->m_data = HK_NULL;
        q->m_capacity = 0;
        q->m_head = 0;
        q->m_tail = 0;
        q->m_elementsInUse = 0;
    } else {
        q = HK_NULL;
    }
    return q;
}

hkpBallGun::hkpBallGun(hkFinishLoadedObjectFlag flag) : hkpFirstPersonGun(flag)
{
    if (flag.m_finishing) {
        m_type = WEAPON_TYPE_BALLGUN;
        m_addedBodies = newQueue();
        m_addedBodies->setCapacity(m_maxBulletsInWorld);
    }
}
