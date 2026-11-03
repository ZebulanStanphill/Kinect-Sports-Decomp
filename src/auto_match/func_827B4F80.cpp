#include "game/Grow_827B4A98.h"

struct Elem_827B4F80 {
    int a;
    int b;
};

extern "C" void fn_827B4F80(V_827B4A98 *d, Elem_827B4F80 *v)
{
    unsigned int blk = d->size >> 4;
    Elem_827B4F80 *e;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    e = ((Elem_827B4F80 **)d->blocks)[blk] + (d->size & 0xf);
    *e = *v;
    d->size = d->size + 1;
}
