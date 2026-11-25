#include "havok/hkBase.h"
#include "havok/hkVector4.h"

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
        hkArrayUtil::_reserveMore(alloc, l, sizeof(Elem_82DA59C8));
    }
    Elem_82DA59C8 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a; p->b = b; p->f = f;
}
