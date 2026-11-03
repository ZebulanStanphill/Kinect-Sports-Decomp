#include "game/Grow_8277CDA0.h"

extern "C" void fn_8277E770(V_8277CDA0 *a, unsigned int *v)
{
    unsigned int idx = a->size >> 10;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((unsigned int **)a->blocks)[idx][a->size & 0x3ff] = *v;
    a->size++;
}
