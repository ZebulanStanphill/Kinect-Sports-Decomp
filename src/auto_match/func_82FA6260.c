typedef struct Blk {
    struct Blk *prev;
    unsigned int size;
} Blk;

extern void fn_82FA5F90(void *heap, Blk *b, unsigned int size);

void *fn_82FA6260(void *heap, Blk *b, unsigned int size)
{
    Blk *next;
    void *r = 0;

    if (b != 0) {
        fn_82FA5F90(heap, b, size);
        next = (Blk *)((char *)b + (b->size & ~3) + 4);
        next->size &= ~2;
        b->size &= ~1;
        r = (char *)b + 8;
    }
    return r;
}
