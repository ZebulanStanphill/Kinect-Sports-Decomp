#include "game/Grow_8277D130.h"

struct Elem_8277E9F8 {
    int x;
    int y;
    int z;
};

extern "C" void fn_8277E9F8(V_8277D130 *a, Elem_8277E9F8 *v)
{
    unsigned int idx = a->size >> 10;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_8277E9F8 **)a->blocks)[idx][a->size & 0x3ff] = *v;
    a->size++;
}
