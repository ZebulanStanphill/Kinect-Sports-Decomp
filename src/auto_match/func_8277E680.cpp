#include "game/Grow_8277CC70.h"

struct Elem_8277E680 {
    int x;
    int y;
    int z;
    int w;
};

extern "C" void fn_8277E680(V_8277CC70 *a, Elem_8277E680 *v)
{
    unsigned int idx = a->size >> 10;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_8277E680 **)a->blocks)[idx][a->size & 0x3ff] = *v;
    a->size++;
}
