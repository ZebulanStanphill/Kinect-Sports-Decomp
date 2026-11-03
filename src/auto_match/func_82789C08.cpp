#include "game/Grow_82788F90.h"

struct Elem_82789C08 {
    int x;
    int y;
    int z;
};

extern "C" void fn_82789C08(V_82788F90 *a, Elem_82789C08 *v)
{
    unsigned int idx = a->size >> 8;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_82789C08 **)a->blocks)[idx][a->size & 0xff] = *v;
    a->size++;
}
