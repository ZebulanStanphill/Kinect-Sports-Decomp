typedef struct Block_82D02F08 {
    unsigned int prev;
    unsigned int head;
    unsigned int pad[2];
    struct Block_82D02F08 *left;
    struct Block_82D02F08 *right;
} Block_82D02F08;

typedef struct Heap_82D02F08 {
    char pad[0x14];
    unsigned int minSize;
    Block_82D02F08 *bins[32];
} Heap_82D02F08;

extern int fn_82D02880(unsigned int size);

static __forceinline unsigned int TreeMaxSize(Block_82D02F08 *b, unsigned int best)
{
    do {
        unsigned int size = b->head & ~3u;
        if (size > best)
            best = size;
        b = b->right != 0 ? b->right : b->left;
    } while (b != 0);
    return best;
}

unsigned int fn_82D02F08(Heap_82D02F08 *self)
{
    unsigned int best = self->minSize;
    int first = fn_82D02880(best);
    int i;

    for (i = 31; i >= first; i--) {
        Block_82D02F08 *b = self->bins[i];
        if (b != 0)
            return TreeMaxSize(b, best);
    }
    return best;
}
