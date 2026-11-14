typedef struct Block_82ABE1E8 {
    struct Block_82ABE1E8 *next;
    int f04;
    int f08;
    int f0c;
} Block_82ABE1E8;

typedef struct Heap_82ABE1E8 {
    Block_82ABE1E8 *freeLists[0x22];   /* by size / 4 - 1 */
    int f88;
    char *limit;                       /* 0x8c: end of the page minus 0x1000 */
    char *cur;                         /* 0x90 */
} Heap_82ABE1E8;

extern void *fn_82ABDF50(Heap_82ABE1E8 *heap, unsigned int size);

static __forceinline void *Alloc(Heap_82ABE1E8 *heap, unsigned int size)
{
    Block_82ABE1E8 *b;
    char *p = heap->cur;

    if ((unsigned int)(heap->limit - p + 0x1000) >= size) {
        heap->cur = p + size;
        return p;
    }
    b = heap->freeLists[size / 4 - 1];
    if (b != 0) {
        heap->freeLists[size / 4 - 1] = b->next;
        b->next = 0;
        b->f04 = 0;
        b->f08 = 0;
        b->f0c = 0;
        return b;
    }
    return fn_82ABDF50(heap, size);
}

void *fn_82ABE1E8(void *unused, Heap_82ABE1E8 *heap)
{
    return Alloc(heap, 0x10);
}
