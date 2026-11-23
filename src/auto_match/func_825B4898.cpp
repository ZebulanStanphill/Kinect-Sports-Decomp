extern "C" double __fctid(double);
extern "C" double __fcfid(double);

inline void *operator new(unsigned int, void *where)
{
    return where;
}

struct Node_825B4898;

struct FreeList_825B4898 {
    int count;             /* 0x0 */
    Node_825B4898 *head;   /* 0x4 */
    unsigned char *bitmap; /* 0x8 */

    FreeList_825B4898(unsigned int pages);
};

extern "C" void *fn_82549798(unsigned int size, unsigned int align, int pool, int flags);
extern "C" void *fn_82522DF8(unsigned int size);
extern "C" void fn_825B47E8(FreeList_825B4898 *list, Node_825B4898 *block);

__forceinline FreeList_825B4898::FreeList_825B4898(unsigned int pages)
{
    count = 0;
    head = 0;
    bitmap = (unsigned char *)fn_82522DF8((unsigned int)(float)__fcfid(__fctid(pages * 0.125f + 0.49999999)));
}

struct Buddy_825B4898 {
    unsigned int levels;      /* 0x00 */
    unsigned int size;        /* 0x04 */
    int pool;                 /* 0x08 */
    unsigned char *base;      /* 0x0c */
    int used;                 /* 0x10 */
    int peak;                 /* 0x14 */
    int allocations;          /* 0x18 */
    FreeList_825B4898 *lists; /* 0x1c */
};

extern "C" Buddy_825B4898 *fn_825B4898(Buddy_825B4898 *self, unsigned int levels, int blocks, int pool)
{
    unsigned int pages;
    unsigned int i;
    unsigned char *block;
    unsigned int blockSize;

    self->pool = pool;
    self->size = (0x1000 << (levels - 1)) * blocks;
    self->levels = levels;
    self->used = 0;
    self->peak = 0;
    self->allocations = 0;
    self->base = (unsigned char *)fn_82549798(self->size, 0x1000, pool, 0);
    self->lists = (FreeList_825B4898 *)fn_82522DF8(levels * sizeof(FreeList_825B4898));
    pages = self->size >> 12;
    for (i = 0; i < levels; i++, pages >>= 1) {
        new (&self->lists[i]) FreeList_825B4898(pages);
    }
    blockSize = 0x1000 << (self->levels - 1);
    for (block = self->base; block < self->base + self->size; block += blockSize) {
        fn_825B47E8(&self->lists[levels - 1], (Node_825B4898 *)block);
    }
    return self;
}
