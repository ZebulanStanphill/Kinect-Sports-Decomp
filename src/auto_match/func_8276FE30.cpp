#include "game/Grow_8276F7C0.h"

struct Elem_8276FE30 {
    int x;
    int y;
    int z;
};

extern "C" void fn_8276FE30(V_8276F7C0 *a, Elem_8276FE30 *v)
{
    unsigned int idx = a->size >> 8;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_8276FE30 **)a->blocks)[idx][a->size & 0xff] = *v;
    a->size++;
}
