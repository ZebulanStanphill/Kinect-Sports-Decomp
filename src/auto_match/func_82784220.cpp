#include "game/Grow_82784220.h"

extern "C" void *fn_8267BDA8(void *, unsigned int);
extern "C" void *fn_8267BED0(V_82784220 *, unsigned int, int *);

void V_82784220::Grow(unsigned int idx)
{
    int a, b;
    if (idx >= cap) {
        void **p;
        if (blocks != 0) {
            p = (void **)fn_8267BDA8(blocks, (cap + 0x10) * 4);
        } else {
            a = 0x8a;
            p = (void **)fn_8267BED0(this, 0x40, &a);
        }
        blocks = p;
        cap += 0x10;
    }
    b = 0x8a;
    blocks[idx] = fn_8267BED0(this, 0x600, &b);
    nblocks++;
}
