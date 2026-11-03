#include "game/Grow_827B0BF8.h"

extern "C" void fn_827B19D8(V_827B0BF8 *a, unsigned char *v)
{
    unsigned int idx = a->size >> 12;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((unsigned char **)a->blocks)[idx][a->size & 0xfff] = *v;
    a->size++;
}
