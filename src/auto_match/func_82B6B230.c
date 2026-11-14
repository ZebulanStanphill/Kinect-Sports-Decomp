typedef struct Block_82B6B230 {
    unsigned char pad[0xc];
    void **base;
    int elemSize;
    int count;
    int freeCount;
    struct Block_82B6B230 *next;
} Block_82B6B230;

static __forceinline Block_82B6B230 *FindBlock(Block_82B6B230 *block, void **item)
{
    int elemSize = block->elemSize;
    do {
        if ((char *)item >= (char *)block->base && (char *)item <= (char *)block->base + block->count * elemSize)
            return block;
        block = block->next;
    } while (block != 0);
    return 0;
}

int fn_82B6B230(Block_82B6B230 *block, void **item)
{
    Block_82B6B230 *b = FindBlock(block, item);
    if (b != 0) {
        void **head = b->base;
        *item = *head;
        *head = item;
        b->freeCount++;
        return 0;
    }
    return 1;
}

