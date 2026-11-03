#include "game/Grow_827B3938.h"

extern "C" void *fn_8267BDA8(void *, unsigned int);
extern "C" void *fn_8267BED0(V_827B3938 *, unsigned int, int *);

void V_827B3938::Grow(unsigned int idx)
{
    int a, b;
    if (idx >= cap) {
        void **p;
        if (blocks != 0) {
            p = (void **)fn_8267BDA8(blocks, (cap + 0x40) * 4);
        } else {
            a = 0x86;
            p = (void **)fn_8267BED0(this, 0x100, &a);
        }
        blocks = p;
        cap += 0x40;
    }
    b = 0x86;
    blocks[idx] = fn_8267BED0(this, 0x1000, &b);
    nblocks++;
}
