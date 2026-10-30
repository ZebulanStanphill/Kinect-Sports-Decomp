#include "havok/hkBase.h"

struct Elem_825BF828 { unsigned char data[0x20]; ~Elem_825BF828() {} };

struct Owner_825BF828 {
    int pad;
    hkArray<Elem_825BF828> arr;
};

extern "C" void fn_825BF828(Owner_825BF828 *self)
{
    hkArray<Elem_825BF828> *a = &self->arr;
    hkMemoryAllocator &alloc = hkMemoryRouter::getInstance().heap();
    for (int i = 0; i < a->m_size; i++) {}
    a->m_size = 0;
    if ((a->m_capacityAndFlags & 0x80000000) == 0) alloc.bufFree(a->m_data, a->getCapacity(), 0x20);
    a->m_data = 0;
    a->m_capacityAndFlags = 0x80000000;
}
