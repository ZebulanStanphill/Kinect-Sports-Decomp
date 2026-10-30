extern void *memcpy(void *d, const void *s, unsigned int n);
extern void fn_8277D000(void *self, unsigned int block);

typedef struct { unsigned int count; unsigned int nblocks; int x8; char **blocks; } Self;

void fn_8277E928(Self *self, const void *item)
{
    unsigned int block = self->count >> 6;
    if (block >= self->nblocks) {
        fn_8277D000(self, block);
    }
    memcpy(self->blocks[block] + (self->count & 0x3f) * 0x18, item, 0x18);
    self->count = self->count + 1;
}
