typedef struct Allocator_82691CD8 {
    char padding[0x1f8];
    unsigned int blockSize;
    char padding1fc[0x208 - 0x1fc];
    unsigned int threshold;
    char padding20c[8];
    unsigned int bytes;
} Allocator_82691CD8;

typedef struct Allocation_82691CD8 {
    char padding[0x18];
    unsigned int size;
    void *data;
} Allocation_82691CD8;

extern Allocation_82691CD8 *fn_826916F0(Allocator_82691CD8 *self, unsigned int size, unsigned int alignment,
                                        unsigned char *retry);
extern Allocation_82691CD8 *fn_826919A0(Allocator_82691CD8 *self, unsigned int kind, unsigned int size,
                                        unsigned int alignment, unsigned int flags, unsigned char *retry);

void *fn_82691CD8(Allocator_82691CD8 *self, unsigned int size, unsigned int alignment)
{
    Allocation_82691CD8 *allocation;
    unsigned char retry = 0;
    unsigned int blockSize;
    if (self->threshold != 0 && size >= self->threshold) {
        do {
            allocation = fn_826916F0(self, size, alignment, &retry);
            if (allocation != 0) {
                goto found;
            }
        } while (retry != 0);
    }
    blockSize = self->blockSize;
    retry = 0;
    size = (((size + alignment - 1) & ~(alignment - 1)) + blockSize - 1) / blockSize * blockSize;
    do {
        allocation = fn_826919A0(self, 9, size, alignment, 0, &retry);
        if (allocation != 0) {
            goto found;
        }
    } while (retry != 0);
    return 0;
found:
    self->bytes = allocation->size + self->bytes;
    return allocation->data;
}
