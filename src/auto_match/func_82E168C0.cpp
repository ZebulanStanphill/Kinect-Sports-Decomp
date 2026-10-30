#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

struct Elem_82E168C0 {
    int a;
    int b;
};

struct Owner_82E168C0 {
    char pad[0x58];
    hkArrayBase<Elem_82E168C0> list;
};

extern "C" void fn_82E168C0(Owner_82E168C0 *self, int a, int b)
{
    hkArrayBase<Elem_82E168C0> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        fn_82CE63B0(&alloc, l, sizeof(Elem_82E168C0));
    }
    Elem_82E168C0 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a; p->b = b;
}
