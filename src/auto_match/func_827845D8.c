extern void *memcpy(void *d, const void *s, unsigned int n);
extern void fn_82784220(void *self, unsigned int block);

typedef struct { unsigned int count; unsigned int nblocks; int x8; char **blocks; } Self;

void fn_827845D8(Self *self, const void *item)
{
    unsigned int block = self->count >> 6;
    if (block >= self->nblocks) {
        fn_82784220(self, block);
    }
    memcpy(self->blocks[block] + (self->count & 0x3f) * 0x18, item, 0x18);
    self->count = self->count + 1;
}
