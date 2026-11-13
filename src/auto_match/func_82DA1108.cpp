// Appends a record of three vectors and three referenced objects to an hkArray at +0x18.
#include "havok/hkBase.h"
#include "havok/hkReferencedObject.h"

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

extern "C" const hkVector4 lbl_8323B1C0;

struct Elem_82DA1108 {
    hkVector4 a;
    hkVector4 b;
    hkVector4 c;
    hkVector4 d;
    const hkReferencedObject *x;
    const hkReferencedObject *y;
    const hkReferencedObject *z;
    hkBool flag;
};

struct Owner_82DA1108 {
    char pad[0x18];
    hkArrayBase<Elem_82DA1108> list;
};

extern "C" void fn_82DA1108(Owner_82DA1108 *self, const hkVector4 &a, const hkVector4 &b, const hkVector4 &c,
                            const hkReferencedObject *x, const hkReferencedObject *y, const hkReferencedObject *z)
{
    hkArrayBase<Elem_82DA1108> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        fn_82CE63B0(&alloc, l, sizeof(Elem_82DA1108));
    }
    Elem_82DA1108 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a;
    p->b = b;
    p->c = c;
    p->x = x;
    x->addReference();
    p->y = y;
    y->addReference();
    p->z = z;
    z->addReference();
    p->flag = false;
    p->d = lbl_8323B1C0;
}
