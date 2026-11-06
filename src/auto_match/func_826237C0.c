typedef struct Block_826237C0 {
    struct Block_826237C0 *next;
    struct Block_826237C0 *prev;
    int size;
    char *start;
    char *cur;
    int pad14[3];
} Block_826237C0;

typedef struct Arena_826237C0 {
    Block_826237C0 head;
    Block_826237C0 *current;
    int defaultSize;
    int noClear;
} Arena_826237C0;

extern void *fn_82522D98(int size);
extern void *fn_82522DF8(int size);
extern void *fn_82A1EFC0(void *dst, int value, unsigned int size);

void *fn_826237C0(Arena_826237C0 *arena, int size, int align)
{
    Block_826237C0 *block;
    Block_826237C0 *prev;
    Block_826237C0 *next;
    Block_826237C0 *nb;
    char *p;
    int mask;
    int blockSize;
    int used;

    if (arena->head.start == 0) {
        p = (char *)fn_82522D98(arena->defaultSize);
        arena->head.start = p;
        arena->head.cur = p;
        arena->head.size = arena->defaultSize;
    }
    for (block = arena->current; block != 0; block = block->next) {
        p = block->cur;
        if (align > 1) {
            mask = align - 1;
            p += mask - ((mask + (int)p) & mask);
            used = p - block->start;
        } else {
            used = p - block->start;
        }
        if (block->size - used >= size) {
            block->cur = p + size;
            goto done;
        }
    }
    blockSize = arena->defaultSize >= align * 2 + size ? arena->defaultSize : align * 2 + size;
    if (arena->noClear == 0) {
        nb = (Block_826237C0 *)fn_82522D98(blockSize + 0x20);
    } else {
        nb = (Block_826237C0 *)fn_82522DF8(blockSize + 0x20);
    }
    nb->next = 0;
    nb->prev = 0;
    next = arena->current;
    prev = next->prev;
    next->prev = nb;
    nb->next = next;
    nb->prev = prev;
    if (prev != 0) {
        prev->next = nb;
    }
    nb->size = blockSize;
    nb->cur = (char *)(nb + 1);
    nb->start = (char *)(nb + 1);
    arena->current = nb;
    block = nb;
    p = nb->cur;
    if (align > 1) {
        mask = align - 1;
        p += mask - ((mask + (int)p) & mask);
    }
    nb->cur = p + size;
done:
    if (arena->noClear == 0) {
        fn_82A1EFC0(p, 0, block->cur - p);
    }
    return p;
}
