typedef struct Block {
    char pad0[0x20];
    unsigned int tag;
    unsigned int size;
} Block;

typedef struct Heap {
    unsigned int shift;
    int pad4[2];
    char list1[4];
    char list2[4];
    unsigned int total;
} Heap;

extern void fn_8268E570(void *list, Block *b);
extern void fn_8268E320(void *list, Block *b);

void fn_8268E938(Heap *heap, Block *blk, unsigned int start, unsigned int len)
{
    unsigned int tag;
    unsigned int n;
    unsigned int rest;
    Block *nb;

    tag = blk->tag;
    rest = (blk->size << heap->shift) - start - len + (unsigned int)blk;
    if (start - (unsigned int)blk != 0) {
        n = (start - (unsigned int)blk) >> heap->shift;
        blk->size = n;
        fn_8268E570(heap->list1, blk);
        fn_8268E320(heap->list2, blk);
        heap->total += n;
    }
    if (rest != 0) {
        nb = (Block *)(start + len);
        n = rest >> heap->shift;
        nb->size = n;
        nb->tag = tag;
        fn_8268E570(heap->list1, nb);
        fn_8268E320(heap->list2, nb);
        heap->total += n;
    }
}
