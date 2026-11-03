#include "game/Grow_8276F7C0.h"

extern "C" void *fn_8267BDA8(void *, unsigned int);
extern "C" void *fn_8267BED0(V_8276F7C0 *, unsigned int, int *);

void V_8276F7C0::Grow(unsigned int idx)
{
    int a, b;
    if (idx >= cap) {
        void **p;
        if (blocks != 0) {
            p = (void **)fn_8267BDA8(blocks, (cap + 0x40) * 4);
        } else {
            a = 0x2;
            p = (void **)fn_8267BED0(this, 0x100, &a);
        }
        blocks = p;
        cap += 0x40;
    }
    b = 0x2;
    blocks[idx] = fn_8267BED0(this, 0xc00, &b);
    nblocks++;
}
