// hkQueue (Common/Base/Container/Queue/hkQueue.h), 0x14 bytes: a ring buffer of T on the heap allocator. The member
// names and the inline functions follow Havok's header; their bodies are the forms the game inlines
// (hkpMountedBallGun::fireGun 82DF21A0 and hkpBallGun 82DEF548 enqueue and dequeue, ~hkpBallGun 82DEF408 dequeues).
// setCapacity is out of line and keeps its fn_ name (fn_82DEF8C8, the instance for hkQueue<hkpRigidBody *>, the
// only queue the game's units use); the wrapper serves queues of 4-byte elements only.
#ifndef HAVOK_HKQUEUE_H
#define HAVOK_HKQUEUE_H

#include "havok/hkBaseTypes.h"

extern "C" void fn_82DEF8C8(void *queue, int capacity);   // hkQueue<hkpRigidBody *>::setCapacity

template <typename T>
class hkQueue {
public:
    HK_FORCE_INLINE int getSize() const { return m_elementsInUse; }
    HK_FORCE_INLINE int getCapacity() const { return m_capacity; }
    HK_FORCE_INLINE bool isEmpty() const { return m_elementsInUse == 0; }
    HK_FORCE_INLINE void setCapacity(int n) { fn_82DEF8C8(this, n); }
    HK_FORCE_INLINE void increaseCapacity()
    {
        if (m_capacity == 0)
            setCapacity(8);
        else
            setCapacity(m_capacity * 2);
    }
    HK_FORCE_INLINE void enqueue(const T &element)
    {
        if (m_elementsInUse >= m_capacity)
            increaseCapacity();
        if (m_tail == m_capacity)
            m_tail = 0;
        m_data[m_tail++] = element;
        m_elementsInUse++;
    }
    HK_FORCE_INLINE void dequeue(T &data)
    {
        data = m_data[m_head];
        if (++m_head == m_capacity)
            m_head = 0;
        m_elementsInUse--;
    }

    T *m_data;             // +0x0
    int m_capacity;        // +0x4
    int m_head;            // +0x8
    int m_tail;            // +0xC
    int m_elementsInUse;   // +0x10
};

#endif
