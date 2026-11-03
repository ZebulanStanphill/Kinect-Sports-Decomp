#include "game/Grow_82789028.h"

struct Elem_82789C80 {
    int x;
    int y;
    int z;
};

extern "C" void fn_82789C80(V_82789028 *a, Elem_82789C80 *v)
{
    unsigned int idx = a->size >> 10;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_82789C80 **)a->blocks)[idx][a->size & 0x3ff] = *v;
    a->size++;
}
