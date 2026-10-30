#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }

class Ints_82DC1C40 : public hkArrayBase<int> {
public:
    HK_FORCE_INLINE void push(const int &v)
    {
        hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
        if (m_size == getCapacity()) fn_82CE63B0(&alloc, this, sizeof(int));
        constructWithCopy(m_data + m_size, 1, v);
        m_size++;
    }
};

struct Inner_82DC1C40 {
    char pad[0x1c];
    Ints_82DC1C40 arr;
};

struct Obj_82DC1C40 {
    int pad;
    Inner_82DC1C40 *inner;
    char pad2[0x16 - 8];
    unsigned char flag;
};

extern "C" void fn_82DC1C40(Obj_82DC1C40 *self)
{
    Inner_82DC1C40 *in = self->inner;
    int v = 10;
    in->arr.push(v);
    self->flag = 1;
}
