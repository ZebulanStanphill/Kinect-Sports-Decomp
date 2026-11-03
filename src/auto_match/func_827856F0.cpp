#include "game/Grow_82785658.h"

struct Elem_827856F0 {
    int x;
    int y;
    int z;
};

extern "C" void fn_827856F0(V_82785658 *a, Elem_827856F0 *v)
{
    unsigned int idx = a->size >> 8;
    if (idx >= a->nblocks) {
        a->Grow(idx);
    }
    ((Elem_827856F0 **)a->blocks)[idx][a->size & 0xff] = *v;
    a->size++;
}
