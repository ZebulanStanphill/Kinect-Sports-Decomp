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
typedef __vector4 V4_82DC25D0;
static HK_FORCE_INLINE void set4(V4_82DC25D0 &v, float x, float y, float z, float w)
{
    v.vector4_f32[0] = x;
    v.vector4_f32[1] = y;
    v.vector4_f32[2] = z;
    v.vector4_f32[3] = w;
}

struct Obj_82DC25D0 {
    int p0;
    int a;
    int b;
    int c;
    Arr<V4_82DC25D0> vecs;
    Arr<int> list;
};

struct Host_82DC25D0 {
    int p0;
    Obj_82DC25D0 *o;
};

extern "C" double sin(double x);
static __forceinline void bump(Host_82DC25D0 *h)
{
    Obj_82DC25D0 *o = h->o;
    o->a += 0x30;
    o->b++;
    o->c++;
}
extern "C" int fn_82DC25D0(Host_82DC25D0 *self, unsigned char a, unsigned char b, float x, float y)
{
    int r;
    V4_82DC25D0 v;
    self->o->list.pushBack(0x13);
    self->o->list.pushBack(a);
    self->o->list.pushBack(b);
    set4(v, (float)sin(x), (float)sin(y), 0.0f, 0.0f);
    r = self->o->vecs.m_size;
    self->o->vecs.pushBack(v);
    bump(self);
    return r;
}
