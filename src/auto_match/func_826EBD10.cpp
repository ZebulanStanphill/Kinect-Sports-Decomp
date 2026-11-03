#include "game/Grow_826EB760.h"

struct Elem_826EBD10 {
    unsigned int a;
    unsigned int b;
};

extern "C" void fn_826EBD10(V_826EB760 *a, Elem_826EBD10 *v)
{
    unsigned int idx = a->size >> 8;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_826EBD10 **)a->blocks)[idx][a->size & 0xff] = *v;
    a->size++;
}
