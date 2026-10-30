#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

struct Elem_82DC8478 {
    int a;
    int b;
    int c;
    int d;
};

struct Owner_82DC8478 {
    char pad[0xc];
    int counter;
    char pad2[0x10];
    hkArrayBase<Elem_82DC8478> list;
};

extern "C" void fn_82DC8478(Owner_82DC8478 *self, int a, int b, int c)
{
    hkArrayBase<Elem_82DC8478> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        fn_82CE63B0(&alloc, l, sizeof(Elem_82DC8478));
    }
    Elem_82DC8478 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a; p->b = b; p->c = c;
    p->d = self->counter;
    self->counter++;
}
