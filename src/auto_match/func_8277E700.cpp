#include "game/Grow_8277CD08.h"

struct Elem_8277E700 {
    unsigned char b[0x38];
};

extern "C" void *memcpy(void *d, const void *s, unsigned int n);

extern "C" void fn_8277E700(V_8277CD08 *d, const Elem_8277E700 *src)
{
    unsigned int blk = d->size >> 6;
    if (blk >= d->nblocks) {
        d->Grow(blk);
    }
    memcpy(&((Elem_8277E700 **)d->blocks)[blk][d->size & 0x3f], src, sizeof(Elem_8277E700));
    d->size++;
}
