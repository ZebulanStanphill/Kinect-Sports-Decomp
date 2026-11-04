#include "game/Grow_827B0AB8.h"

struct E_827B18F8 {
    unsigned short a, b;
};

extern "C" void fn_827B18F8(V_827B0AB8 *q, E_827B18F8 *v)
{
    unsigned int blk = q->size >> 6;
    if (blk >= q->nblocks)
        q->Grow(blk);
    ((E_827B18F8 **)q->blocks)[blk][q->size & 0x3f] = *v;
    q->size++;
}
