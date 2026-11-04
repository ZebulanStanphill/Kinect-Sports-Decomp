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
typedef __vector4 V4_82DC27B0;

struct Obj_82DC27B0 {
    int p0;
    int a;
    int b;
    int c;
    Arr<V4_82DC27B0> vecs;
    Arr<int> list;
    int pad28[3];
    Arr<hkReferencedObject *> list2;
};

struct Host_82DC27B0 {
    int p0;
    Obj_82DC27B0 *o;
};


static __forceinline void bump(Host_82DC27B0 *h)
{
    Obj_82DC27B0 *o = h->o;
    o->a += 0x40;
    o->b++;
    o->c += 3;
}

extern "C" int fn_82DC27B0(Host_82DC27B0 *self, unsigned char type, hkReferencedObject *val)
{
    int r;
    V4_82DC27B0 v;
    self->o->list.pushBack(0xe);
    self->o->list.pushBack(type);
    v.vector4_f32[0] = (float)self->o->list2.m_size; v.vector4_f32[1] = 0.0f; v.vector4_f32[2] = 0.0f; v.vector4_f32[3] = 0.0f;
    r = self->o->vecs.m_size;
    val->addReference();
    self->o->vecs.pushBack(v);
    self->o->list2.pushBack(val);
    bump(self);
    return r;
}
