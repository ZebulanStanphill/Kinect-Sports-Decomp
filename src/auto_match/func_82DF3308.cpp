#include "havok/hkBase.h"
#include "havok/hkpPhysicsSystemWithContacts.h"
#include "havok/hkpWorldCinfo.h"

extern "C" void fn_82D819D8(int, void *);
extern "C" void fn_82D84348(int, void *);
extern "C" void fn_82DF7348(void *, int, void *);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Ptrs_82DF3308 : public hkArrayBase<void *> {
public:
    HK_FORCE_INLINE void push(void *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) hkArrayUtil::_reserveMore(alloc, this, sizeof(void *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Obj_82DF3308 {
    int pad0[2];
    void *f8;
    Ptrs_82DF3308 arr;
};

struct Tmp_82DF3308 {
    unsigned char a;
    int b;
};

extern "C" void fn_82DF3308(Obj_82DF3308 *p, int a2, unsigned char flag)
{
    Tmp_82DF3308 t;

    if (p->f8 == 0) {
        p->f8 = new hkpWorldCinfo();
    }
    fn_82D819D8(a2, p->f8);
    fn_82D84348(a2, &p->arr);
    if (flag != 0) {
        t.a = 0;
        t.b = 0;
        hkpPhysicsSystemWithContacts *o = new hkpPhysicsSystemWithContacts();
        fn_82DF7348(&t, a2, o);
        o->m_active = false;
        p->arr.push(o);
    }
}
