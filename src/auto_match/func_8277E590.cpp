#include "game/Grow_8277CBD8.h"

struct Elem_8277E590 {
    int a;
    int b;
};

extern "C" void fn_8277E590(V_8277CBD8 *d, Elem_8277E590 *v)
{
    unsigned int blk = d->size >> 10;
    Elem_8277E590 *e;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    e = ((Elem_8277E590 **)d->blocks)[blk] + (d->size & 0x3ff);
    *e = *v;
    d->size = d->size + 1;
}
