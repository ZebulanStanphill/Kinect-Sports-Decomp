#include "game/Grow_82784220.h"

extern "C" void *memcpy(void *d, const void *s, unsigned int n);

extern "C" void fn_827845D8(V_82784220 *self, const void *item)
{
    unsigned int block = self->size >> 6;
    if (block >= self->nblocks) {
        self->Grow(block);
    }
    memcpy((char *)self->blocks[block] + (self->size & 0x3f) * 0x18, item, 0x18);
    self->size = self->size + 1;
}
