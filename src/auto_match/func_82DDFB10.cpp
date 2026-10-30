#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Ptrs_82DDFB10 : public hkArrayBase<void *> {
public:
    HK_FORCE_INLINE void push(void *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(void *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
    HK_FORCE_INLINE int indexOf(void *const &v) const
    {
        int n = m_size;
        int i = 0;
        if (0 < n) {
            void *const *d = m_data;
            do {
                if (*d == v)
                    return i;
                i++;
                d++;
            } while (i < n);
        }
        return -1;
    }
};

struct Body_82DDFB10 {
    unsigned char d[0x68];
};

struct Rec_82DDFB10 {
    Body_82DDFB10 body;
    void *key;
    unsigned char f6c;
    unsigned char f6d;
    unsigned char pad[2];
};

struct Obj_82DDFB10 {
    char pad0[0x34];
    Ptrs_82DDFB10 arr;
    Rec_82DDFB10 *wp;
    Body_82DDFB10 cur;
    int fac;
    unsigned char fb0;
    char padb1[7];
    char fb8;
    char padb9[3];
    void *fbc;
    unsigned char fc0;
};

extern "C" void fn_82DDFB10(Obj_82DDFB10 *p, void *x)
{
    if (p->arr.indexOf(x) == -1) {
        char a = p->fb8 != 0 && x == p->fbc;
        if (p->fb8 == 0 || a) {
            Rec_82DDFB10 *r = p->wp;
            r->f6d = 1;
            r->key = x;
            r->f6c = (unsigned char)p->fac;
            r->body = p->cur;
            p->wp = p->wp + 1;
            p->fb0 = p->fb0 != 0 || a;
        }
        p->arr.push(x);
    }
    if (p->fb0 != 0)
        p->fc0 = 1;
}
