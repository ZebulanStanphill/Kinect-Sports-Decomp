#include "game/Grow_8277CED0.h"

struct Elem_8277E848 {
    unsigned char b[0x1c];
};

extern "C" void *memcpy(void *d, const void *s, unsigned int n);

extern "C" void fn_8277E848(V_8277CED0 *d, const Elem_8277E848 *src)
{
    unsigned int blk = d->size >> 4;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    memcpy(&((Elem_8277E848 **)d->blocks)[blk][d->size & 0xf], src, sizeof(Elem_8277E848));
    d->size++;
}
