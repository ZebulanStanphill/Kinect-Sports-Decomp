#include "game/Grow_82789158.h"

extern "C" void fn_82789D68(V_82789158 *a, unsigned int *v)
{
    unsigned int idx = a->size >> 6;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((unsigned int **)a->blocks)[idx][a->size & 0x3f] = *v;
    a->size++;
}
