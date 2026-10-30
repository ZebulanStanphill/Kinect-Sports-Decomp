#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

struct Elem_82D907E8 {
    char pad[0x22];
    unsigned short index;
    unsigned char pad2[2];
    unsigned char flags;
};

class Elems_82D907E8 : public hkArrayBase<Elem_82D907E8 *> {
public:
    HK_FORCE_INLINE void push(Elem_82D907E8 *const &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(Elem_82D907E8 *));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Owner_82D907E8 {
    char pad[0x40];
    Elems_82D907E8 elems;
};

extern "C" void fn_82D907E8(Owner_82D907E8 *self, Elem_82D907E8 *e)
{
    e->flags = e->flags & 0xcf;
    if (e->index == 0xffff) {
        e->index = (unsigned short)self->elems.m_size;
        Elem_82D907E8 *v = e;
        self->elems.push(v);
    }
}
