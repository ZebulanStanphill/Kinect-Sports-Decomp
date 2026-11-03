#include "game/Grow_8276F858.h"

extern "C" void fn_8276FEA8(V_8276F858 *a, unsigned int *v)
{
    unsigned int idx = a->size >> 6;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((unsigned int **)a->blocks)[idx][a->size & 0x3f] = *v;
    a->size++;
}
