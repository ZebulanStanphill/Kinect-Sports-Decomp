#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

struct Elem_82DC8500 {
    int a;
    int b;
    int c;
};

struct Owner_82DC8500 {
    char pad[0x2c];
    hkArrayBase<Elem_82DC8500> list;
};

extern "C" void fn_82DC8500(Owner_82DC8500 *self, int a, int b, int c)
{
    hkArrayBase<Elem_82DC8500> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        fn_82CE63B0(&alloc, l, sizeof(Elem_82DC8500));
    }
    Elem_82DC8500 *p = l->m_data + l->m_size;
    l->m_size++;
    p->a = a; p->b = b; p->c = c;
}
