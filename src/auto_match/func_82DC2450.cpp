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
typedef __vector4 V4_82DC2450;

struct Obj_82DC2450 {
    int p0;
    int a;
    int b;
    int c;
    Arr<V4_82DC2450> vecs;
    Arr<int> list;
};

struct Host_82DC2450 {
    int p0;
    Obj_82DC2450 *o;
};

extern "C" double fn_82F643F8(double x);

static __forceinline void bump(Host_82DC2450 *h)
{
    Obj_82DC2450 *o = h->o;
    o->a += 0x30;
    o->b++;
    o->c++;
}

extern "C" int fn_82DC2450(Host_82DC2450 *self, unsigned char type, float x)
{
    int r;
    V4_82DC2450 v;
    self->o->list.pushBack(0x12);
    self->o->list.pushBack(type);
    v.vector4_f32[0] = (float)fn_82F643F8(x); v.vector4_f32[1] = 100.0f; v.vector4_f32[2] = 0.0f; v.vector4_f32[3] = 0.0f;
    r = self->o->vecs.m_size;
    self->o->vecs.pushBack(v);
    bump(self);
    return r;
}
