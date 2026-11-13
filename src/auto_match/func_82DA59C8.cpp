#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }

    hkQuadReal m_quad;
};

struct Elem_82DA59C8 {
    hkVector4 a;
    hkVector4 b;
    float f;
};

struct Owner_82DA59C8 {
    char pad[0x18];
    hkArrayBase<Elem_82DA59C8> list;
};

extern "C" void fn_82DA59C8(Owner_82DA59C8 *self, const hkVector4 &a, const hkVector4 &b, float f)
{
    hkArrayBase<Elem_82DA59C8> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        fn_82CE63B0(&alloc, l, sizeof(Elem_82DA59C8));
    }
    Elem_82DA59C8 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a; p->b = b; p->f = f;
}
