#include "game/Grow_827B4A98.h"

extern "C" void *fn_8267BDA8(void *, unsigned int);
extern "C" void *fn_8267BED0(V_827B4A98 *, unsigned int, int *);

void V_827B4A98::Grow(unsigned int idx)
{
    int a, b;
    if (idx >= cap) {
        void **p;
        if (blocks != 0) {
            p = (void **)fn_8267BDA8(blocks, (cap + 0x10) * 4);
        } else {
            a = 2;
            p = (void **)fn_8267BED0(this, 0x40, &a);
        }
        blocks = p;
        cap += 0x10;
    }
    b = 2;
    blocks[idx] = fn_8267BED0(this, 0x80, &b);
    nblocks++;
}
