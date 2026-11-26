// hkpBallGun::~hkpBallGun: takes every queued bullet out of the queue, tells the listeners (last to first),
// removes it from its world and releases it, then frees the queue's storage and the queue.
#include "havok/hkpBallGun.h"
#include "havok/hkpRigidBody.h"

// hkQueue (Common/Base/Container/Queue/hkQueue.h): only the members this destructor uses.
template <typename T> class hkQueue {
public:
    T dequeue()
    {
        T p = m_data[m_head++];
        if (m_head == m_capacity) m_head = 0;
        --m_elementsInUse;
        return p;
    }
    T *m_data;
    int m_capacity;
    int m_head;
    int m_tail;
    int m_elementsInUse;
};

extern "C" hkBool fn_82D81240(hkpWorld *world, hkpRigidBody *body);   // hkpWorld::removeEntity

hkpBallGun::~hkpBallGun()
{
    while (m_addedBodies->m_elementsInUse != 0) {
        hkpRigidBody *rb = m_addedBodies->dequeue();
        for (int i = m_listeners.getSize() - 1; i >= 0; --i) m_listeners[i]->bulletDeletedCallback(rb);
        if (rb->getWorld()) {
            fn_82D81240(rb->getWorld(), rb);
        }
        rb->removeReference();
    }
    hkQueue<hkpRigidBody *> *b = m_addedBodies;
    if (b) {
        int n = b->m_capacity;
        if (n) {
            hkpRigidBody **data = b->m_data;
            hkMemoryRouter::getInstance().heap().blockFree(data, n * 4);
        }
        hkMemoryRouter::getInstance().heap().blockFree(b, sizeof(hkQueue<hkpRigidBody *>));
    }
}
