#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

template <typename T>
static HK_FORCE_INLINE void constructWithCopy(T *p, int n, const T &tcopy)
{
    for (int i = 0; i < n; ++i) {
        p[i] = tcopy;
    }
}

template <typename T>
class Arr : public hkArrayBase<T> {
public:
    HK_FORCE_INLINE void pushBackUnchecked(const T &e)
    {
        constructWithCopy(this->m_data + this->m_size, 1, e);
        this->m_size++;
    }
    HK_FORCE_INLINE void _pushBack(hkMemoryAllocator &alloc, const T &e)
    {
        if (this->m_size == this->getCapacity()) {
            fn_82CE63B0(&alloc, this, sizeof(T));
        }
        pushBackUnchecked(e);
    }
    HK_FORCE_INLINE void pushBack(const T &e)
    {
        _pushBack(hkContainerHeapAllocator::get(this), e);
    }
};

typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef __vector4 V4_82DC13F0;

struct Obj_82DC13F0 {
    int p0;
    int a;
    int b;
    int c;
    Arr<V4_82DC13F0> vecs;
    Arr<int> list;
};

struct Host_82DC13F0 {
    int p0;
    Obj_82DC13F0 *o;
    char pad[8];
    unsigned char flag[1];
    int addVertex(const V4_82DC13F0 *v, int idx);
};

int Host_82DC13F0::addVertex(const V4_82DC13F0 *v, int idx)
{
    int r;
    o->list.pushBack(3);
    o->list.pushBack(idx);
    r = o->vecs.m_size;
    o->vecs.pushBack(v[0]);
    flag[idx] = 1;
    return r;
}
