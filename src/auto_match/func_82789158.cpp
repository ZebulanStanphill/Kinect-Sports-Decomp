#include "game/Grow_82789158.h"

extern "C" void *fn_8267BDA8(void *, unsigned int);
extern "C" void *fn_8267BED0(V_82789158 *, unsigned int, int *);

void V_82789158::Grow(unsigned int idx)
{
    int a, b;
    if (idx >= cap) {
        void **p;
        if (blocks != 0) {
            p = (void **)fn_8267BDA8(blocks, (cap + 0x10) * 4);
        } else {
            a = 0x88;
            p = (void **)fn_8267BED0(this, 0x40, &a);
        }
        blocks = p;
        cap += 0x10;
    }
    b = 0x88;
    blocks[idx] = fn_8267BED0(this, 0x100, &b);
    nblocks++;
}
