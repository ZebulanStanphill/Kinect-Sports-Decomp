// hkpBallGun constructor: runs the hkpFirstPersonGun constructor (kept as
// fn_82DF0AD8, called by a Matching unit), stores ??_7hkpBallGun@@6B@, and for a
// real (non-finish) construction allocates the 0x14-byte state object.
#include "havok/hkBase.h"

extern "C" {
void fn_82DF0AD8(void *self);
void fn_82DEF8C8(void *state, int arg);
}

struct hkpBallGunState {
    int v[5];
};

// hkpFirstPersonGun's constructor is out of line (fn_82DF0AD8) and stores its
// own vtable, so this stand-in must not store one.
class __declspec(novtable) hkpFirstPersonGun {
public:
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    HK_FORCE_INLINE hkpFirstPersonGun() { fn_82DF0AD8(this); }
    char pad4[0x4];
    unsigned char m_flag;           // +0x8
    char pad9[0x30 - 0x9];
    int m_arg;                      // +0x30
    char pad34[0x50 - 0x34];
    hkpBallGunState *m_state;       // +0x50
};

class hkpBallGun : public hkpFirstPersonGun {
public:
    HK_FORCE_INLINE hkpBallGun(int doInit)
    {
        if (doInit != 0) {
            m_flag = 1;
            hkMemoryAllocator &heap = hkMemoryRouter::getInstance().heap();
            hkpBallGunState *p = (hkpBallGunState *)heap.blockAlloc(0x14);
            if (p != 0) {
                p->v[0] = 0;
                p->v[1] = 0;
                p->v[2] = 0;
                p->v[3] = 0;
                p->v[4] = 0;
            } else {
                p = 0;
            }
            m_state = p;
            fn_82DEF8C8(p, m_arg);
        }
    }
};

extern "C" hkpBallGun *fn_82DEF270(hkpBallGun *self, int doInit)
{
    self->hkpBallGun::hkpBallGun(doInit);
    return self;
}
