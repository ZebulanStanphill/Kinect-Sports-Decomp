#include "game/Grow_827B6080.h"

// Appends a 0x1c-byte element (copied word by word) to the chunked container.
extern "C" void fn_827B8810(V_827B6080 *a, unsigned int *v)
{
    unsigned int w1;
    unsigned int w2;
    unsigned int w3;
    unsigned int blk;
    unsigned int *p;

    blk = a->size >> 6;
    if (blk >= a->nblocks) {
        a->Grow(blk);
    }
    w1 = v[1];
    p = (unsigned int *)((char *)a->blocks[blk] + (a->size & 0x3f) * 0x1c);
    p[0] = v[0];
    p[1] = w1;
    w1 = v[5];
    w2 = v[4];
    w3 = v[3];
    p[2] = v[2];
    p[3] = w3;
    p[4] = w2;
    p[5] = w1;
    p[6] = v[6];
    a->size = a->size + 1;
}
