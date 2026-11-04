#include "game/Grow_827B0B58.h"

extern "C" void *fn_8267B890(void *, int, unsigned *);
extern "C" void *fn_8267BDA8(void *, unsigned);
extern "C" void *lbl_831E7E64;

void V_827B0B58::Grow(unsigned int idx)
{
    unsigned a, b;
    if (idx >= cap) {
        void *r;
        if (blocks != 0) {
            r = fn_8267BDA8(blocks, (cap + 0x40) * 4);
        } else {
            a = 0x105;
            r = fn_8267B890(lbl_831E7E64, 0x100, &a);
        }
        blocks = (void **)r;
        cap = cap + 0x40;
    }
    b = 0x105;
    blocks[idx] = fn_8267B890(lbl_831E7E64, 0x200, &b);
    nblocks = nblocks + 1;
}
