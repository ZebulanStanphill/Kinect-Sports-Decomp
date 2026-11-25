#include "havok/hkBase.h"
#include "havok/hkVector4.h"

struct Elem_82D9AFC0 {
    hkVector4 a;
    hkVector4 b;
};

struct Owner_82D9AFC0 {
    char pad[0x18];
    hkArrayBase<Elem_82D9AFC0> list;
};

extern "C" void fn_82D9AFC0(Owner_82D9AFC0 *self, const hkVector4 &a, const hkVector4 &b)
{
    hkArrayBase<Elem_82D9AFC0> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        hkArrayUtil::_reserveMore(alloc, l, sizeof(Elem_82D9AFC0));
    }
    Elem_82D9AFC0 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a; p->b = b;
}
