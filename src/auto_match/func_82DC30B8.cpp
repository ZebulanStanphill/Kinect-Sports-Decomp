#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Ints_82DC30B8 : public hkArrayBase<int> {
public:
    HK_FORCE_INLINE void push(const int &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(int));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Inner_82DC30B8 {
    char pad[0x1c];
    Ints_82DC30B8 arr;
};

struct Obj_82DC30B8 {
    int pad;
    Inner_82DC30B8 *inner;
};

extern "C" void fn_82DC30B8(Obj_82DC30B8 *self)
{
    Inner_82DC30B8 *in = self->inner;
    int v = 0;
    in->arr.push(v);
}
