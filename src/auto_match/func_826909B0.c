typedef struct Block_826909B0 {
    struct Block_826909B0 *next; /* 0x00 */
    struct Block_826909B0 *prev; /* 0x04 */
    char pad8[0x4];
    unsigned short size; /* 0x0c */
    char pade[0x2];
    unsigned int largeSize; /* 0x10 */
} Block_826909B0;

typedef struct Bins_826909B0 {
    unsigned int mask;         /* 0x00 */
    Block_826909B0 *heads[32]; /* 0x04 */
} Bins_826909B0;

typedef struct Heap_826909B0 {
    Bins_826909B0 small;  /* 0x000 */
    Bins_826909B0 medium; /* 0x084 */
    char tree[0x84];      /* 0x108 */
    unsigned int total;   /* 0x18c */
} Heap_826909B0;

extern void fn_82690490(void *tree, Block_826909B0 *block);

static __forceinline void PushBin(Bins_826909B0 *bins, Block_826909B0 *block, unsigned int index)
{
    Block_826909B0 *head = bins->heads[index];

    if (head != 0) {
        block->next = head;
        block->prev = head->prev;
        head->prev->next = block;
        head->prev = block;
    } else {
        block->prev = block;
        block->next = block;
    }
    bins->heads[index] = block;
    bins->mask |= 1 << index;
}

void fn_826909B0(Heap_826909B0 *heap, Block_826909B0 *block)
{
    unsigned int size = block->size;

    if (size >= 0x21) {
        size = block->largeSize;
    }
    heap->total += size;
    if (size <= 0x20) {
        PushBin(&heap->small, block, size - 1);
        return;
    }
    if (size <= 0x40) {
        PushBin(&heap->medium, block, size - 0x21);
        return;
    }
    fn_82690490(heap->tree, block);
}
