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
typedef __vector4 V4_82DC1F50;

struct Obj_82DC1F50 {
    int p0;
    int a;
    int b;
    int c;
    Arr<V4_82DC1F50> vecs;
    Arr<int> list;
};

struct Host_82DC1F50 {
    int p0;
    Obj_82DC1F50 *o;
    char pad[0x10];
    unsigned char flag;
};

extern "C" int fn_82DC1F50(Host_82DC1F50 *self, const V4_82DC1F50 *v)
{
    int r;
    self->o->list.pushBack(1);
    r = self->o->vecs.m_size;
    self->o->vecs.pushBack(v[0]);
    self->flag = 1;
    return r;
}
