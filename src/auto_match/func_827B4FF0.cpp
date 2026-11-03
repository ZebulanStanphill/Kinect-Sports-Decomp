#include "game/Grow_827B4B30.h"

struct Elem_827B4FF0 {
    unsigned char b[0x1c];
};

extern "C" void *memcpy(void *d, const void *s, unsigned int n);

extern "C" void fn_827B4FF0(V_827B4B30 *d, const Elem_827B4FF0 *src)
{
    unsigned int blk = d->size >> 8;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    memcpy(&((Elem_827B4FF0 **)d->blocks)[blk][d->size & 0xff], src, sizeof(Elem_827B4FF0));
    d->size++;
}
