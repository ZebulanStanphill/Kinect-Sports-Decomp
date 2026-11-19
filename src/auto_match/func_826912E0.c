typedef struct Block_826912E0 {
    char pad0[0x10];
    int useCount; /* 0x10 */
} Block_826912E0;

typedef struct Heap_826912E0 {
    unsigned int shift;     /* 0x0 */
    unsigned int alignMask; /* 0x4 */
} Heap_826912E0;

typedef struct Pool_826912E0 {
    char pad0[4];
    unsigned int granularity; /* 0x4 */
    char pad8[8];
    Heap_826912E0 heap; /* 0x10 */
} Pool_826912E0;

extern unsigned int fn_8270AAF8(Heap_826912E0 *heap, unsigned int size, Block_826912E0 **out);
extern Block_826912E0 *fn_82691128(Pool_826912E0 *pool, unsigned int size);

/* Block header plus the block's bitmap (one bit per allocation unit), rounded up to 16 bytes. */
static __forceinline unsigned int HeaderSize_826912E0(Heap_826912E0 *heap, unsigned int total)
{
    unsigned int units = (heap->alignMask + total) >> heap->shift;

    return ((units + 31) / 32 * 4 + 0x2f) & ~0xf;
}

void fn_826912E0(Pool_826912E0 *pool, unsigned int size)
{
    Heap_826912E0 *heap;
    Block_826912E0 *block;
    Block_826912E0 *allocated;
    unsigned int aligned;
    unsigned int total;
    unsigned int request;

    request = size < 0x10 ? 0x10 : size;
    heap = &pool->heap;
    aligned = (heap->alignMask + request) & ~heap->alignMask;
    if (fn_8270AAF8(heap, aligned, &block) == 0) {
        total = (pool->granularity + aligned - 1) / pool->granularity * pool->granularity;
        while (total < HeaderSize_826912E0(heap, total) + aligned) {
            total += pool->granularity;
        }
        block = fn_82691128(pool, total);
        if (block == 0) {
            return;
        }
        fn_8270AAF8(heap, aligned, &allocated);
    }
    block->useCount++;
}
