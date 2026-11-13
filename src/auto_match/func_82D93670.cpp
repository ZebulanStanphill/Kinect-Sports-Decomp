#include "havok/hkBase.h"

extern "C" void fn_82CE63B0(hkMemoryAllocator *alloc, void *array, int elemSize); // hkArrayUtil::_reserveMore

struct Elem_82D93670 {
    void *key;
    int pad;
    unsigned __int64 value;
};

struct Owner_82D93670 {
    char pad[0x78];
    hkArrayBase<Elem_82D93670> list;
};

extern "C" void fn_82D93670(Owner_82D93670 *self, void *key, unsigned __int64 value)
{
    int i = 0;
    if (self->list.m_size > 0) {
        Elem_82D93670 *e = self->list.m_data;
        do {
            if (e->key == key)
                return;
            i++;
            e++;
        } while (i < self->list.m_size);
    }
    hkArrayBase<Elem_82D93670> *l = &self->list;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    if (l->m_size == l->getCapacity()) {
        fn_82CE63B0(&alloc, l, sizeof(Elem_82D93670));
    }
    Elem_82D93670 *p = l->m_data + l->m_size;
    l->m_size++;
    p->key = key; p->value = value;
}
