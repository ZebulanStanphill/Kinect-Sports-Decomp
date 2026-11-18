typedef struct Blk_82FA6550 {
    struct Blk_82FA6550 *prev; /* 0x0 */
    unsigned int size;         /* 0x4 */
} Blk_82FA6550;

extern Blk_82FA6550 *fn_82FA61A0(void *heap, unsigned int size);
extern Blk_82FA6550 *fn_82FA60D8(void *heap, Blk_82FA6550 *block, int offset);
extern void *fn_82FA6260(void *heap, Blk_82FA6550 *block, unsigned int size);

static __forceinline unsigned int AlignSize(unsigned int size, unsigned int alignment)
{
    unsigned int aligned = 0;

    if (size != 0 && size < 0x40000000) {
        unsigned int rounded = (size + alignment - 1) & ~(alignment - 1);

        aligned = rounded > 0xc ? rounded : 0xc;
    }
    return aligned;
}

void *fn_82FA6550(void *heap, unsigned int alignment, unsigned int size)
{
    unsigned int blockSize;
    unsigned int request;
    Blk_82FA6550 *block;

    blockSize = AlignSize(size, 4);
    request = AlignSize(blockSize + alignment + 0x10, alignment);
    block = fn_82FA61A0(heap, alignment > 4 ? request : blockSize);
    if (block != 0) {
        unsigned int start = (unsigned int)block + 8;
        unsigned int aligned = (start + alignment - 1) & ~(alignment - 1);
        int offset = aligned - start;

        if (offset != 0) {
            if (offset < 0x10) {
                int extra = 0x10 - offset;

                if (extra <= (int)alignment) {
                    extra = alignment;
                }
                offset = ((extra + aligned + alignment - 1) & ~(alignment - 1)) - start;
            }
            if (offset != 0) {
                block = fn_82FA60D8(heap, block, offset);
            }
        }
    }
    return fn_82FA6260(heap, block, blockSize);
}
