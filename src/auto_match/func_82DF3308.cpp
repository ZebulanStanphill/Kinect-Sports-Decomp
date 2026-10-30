#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);
extern "C" void *fn_82D8E600(void);
extern "C" void fn_82D819D8(int, void *);
extern "C" void fn_82D84348(int, void *);
extern "C" void *fn_82DF3B68(void);
extern "C" void fn_82DF7348(void *, int, void *);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

struct Blk_82DF3308 {
    int pad0;
    unsigned short memSize;
};

class Ptrs_82DF3308 : public hkArrayBase<void *> {
public:
    HK_FORCE_INLINE void push(void *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(void *));
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
    Blk_82DF3308 *b;
    Tmp_82DF3308 t;

    if (p->f8 == 0) {
        b = (Blk_82DF3308 *)hkMemoryRouter::getInstance().heap().blockAlloc(0xe0);
        b->memSize = 0xe0;
        p->f8 = fn_82D8E600();
    }
    fn_82D819D8(a2, p->f8);
    fn_82D84348(a2, &p->arr);
    if (flag != 0) {
        t.a = 0;
        t.b = 0;
        b = (Blk_82DF3308 *)hkMemoryRouter::getInstance().heap().blockAlloc(0x50);
        b->memSize = 0x50;
        void *o = fn_82DF3B68();
        fn_82DF7348(&t, a2, o);
        *((unsigned char *)o + 0x40) = 0;
        p->arr.push(o);
    }
}
