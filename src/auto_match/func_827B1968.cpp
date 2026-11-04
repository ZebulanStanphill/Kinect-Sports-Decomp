#include "game/Grow_827B0B58.h"

struct Pair_827B1968 {
    int a;
    int b;
};

extern "C" void fn_827B1968(V_827B0B58 *d, Pair_827B1968 *v)
{
    unsigned int blk = d->size >> 6;
    Pair_827B1968 *e;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    e = ((Pair_827B1968 **)d->blocks)[blk] + (d->size & 0x3f);
    *e = *v;
    d->size = d->size + 1;
}
