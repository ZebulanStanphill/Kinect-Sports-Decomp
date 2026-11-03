#include "game/Grow_8277CE38.h"

struct Elem_8277E7D0 {
    int x;
    int y;
    int z;
};

extern "C" void fn_8277E7D0(V_8277CE38 *a, Elem_8277E7D0 *v)
{
    unsigned int idx = a->size >> 6;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_8277E7D0 **)a->blocks)[idx][a->size & 0x3f] = *v;
    a->size++;
}
