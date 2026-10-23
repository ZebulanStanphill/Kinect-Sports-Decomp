#include "havok/hkBase.h"
struct Ball : public hkReferencedObject { int m_world; };
class GunListener {
public:
    virtual void a();virtual void b();virtual void c();virtual void d();
    virtual void removed(Ball *);
};
struct RingBuffer {
    Ball **m_data;
    int m_capacity, m_read, m_write, m_size;
    Ball *popFront() {
        Ball *p=m_data[m_read++];
        if (m_read==m_capacity) m_read=0;
        --m_size;
        return p;
    }
};
class hkpFirstPersonGun : public hkReferencedObject {
public:
    virtual ~hkpFirstPersonGun();
    char pad[0xC];
    hkArrayBase<GunListener *> m_listeners;
    char tail[0x30];
};
class hkpBallGun : public hkpFirstPersonGun {
public:
    virtual ~hkpBallGun();
    RingBuffer *m_balls;
};
extern "C" void fn_82D81240(void *, int, Ball *);
hkpBallGun::~hkpBallGun()
{
    while (m_balls->m_size != 0) {
        Ball *ball=m_balls->popFront();
        for (int i=m_listeners.m_size-1;i>=0;--i) m_listeners.m_data[i]->removed(ball);
        if (ball->m_world) {
            char result[16];
            fn_82D81240(result,ball->m_world,ball);
        }
        ball->removeReference();
    }
    RingBuffer *b=m_balls;
    if (b) {
        int n=b->m_capacity;
        if (n) {
            Ball **data=b->m_data;
            hkMemoryRouter::getInstance().heap().blockFree(data,n*4);
        }
        hkMemoryRouter::getInstance().heap().blockFree(b,sizeof(RingBuffer));
    }
}
