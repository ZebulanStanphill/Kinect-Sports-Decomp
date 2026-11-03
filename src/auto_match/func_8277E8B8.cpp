#include "game/Grow_8277CF68.h"

struct Elem_8277E8B8 {
    int a;
    int b;
};

extern "C" void fn_8277E8B8(V_8277CF68 *d, Elem_8277E8B8 *v)
{
    unsigned int blk = d->size >> 4;
    Elem_8277E8B8 *e;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    e = ((Elem_8277E8B8 **)d->blocks)[blk] + (d->size & 0xf);
    *e = *v;
    d->size = d->size + 1;
}
