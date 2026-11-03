#include "game/Grow_827890C0.h"

struct Elem_82789CF8 {
    unsigned char b[0x3c];
};

extern "C" void *memcpy(void *d, const void *s, unsigned int n);

extern "C" void fn_82789CF8(V_827890C0 *d, const Elem_82789CF8 *src)
{
    unsigned int blk = d->size >> 8;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    memcpy(&((Elem_82789CF8 **)d->blocks)[blk][d->size & 0xff], src, sizeof(Elem_82789CF8));
    d->size++;
}
