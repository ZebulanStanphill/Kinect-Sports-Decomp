#include "game/Grow_82779BC8.h"

struct Elem_82779C60 {
    int x;
    int y;
    int z;
};

extern "C" void fn_82779C60(V_82779BC8 *a, Elem_82779C60 *v)
{
    unsigned int idx = a->size >> 6;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_82779C60 **)a->blocks)[idx][a->size & 0x3f] = *v;
    a->size++;
}
