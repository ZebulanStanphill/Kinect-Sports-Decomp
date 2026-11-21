typedef struct Item_82692370 Item_82692370;

typedef struct FreeList_82692370 {
    Item_82692370 *head; /* 0x0 */
    Item_82692370 *tail; /* 0x4 */
} FreeList_82692370;

typedef struct Block_82692370 {
    char reserved00[0x10];
    int used; /* 0x10 */
} Block_82692370;

struct Item_82692370 {
    Item_82692370 *next;     /* 0x0 */
    FreeList_82692370 *prev; /* 0x4 */
    Block_82692370 *block;   /* 0x8 */
};

typedef struct Pool_82692370 {
    char reserved00[0xc];
    unsigned int shift;     /* 0x00c */
    unsigned int alignMask; /* 0x010 */
    char reserved14[0x1a0];
    FreeList_82692370 freeLists[8]; /* 0x1b4 */
    unsigned char smallEnabled;     /* 0x1f4 */
    char reserved1f5[0xf];
    unsigned int pageThreshold; /* 0x204 */
    char reserved208[0x8];
    unsigned int totalSize; /* 0x210 */
} Pool_82692370;

extern const unsigned int lbl_82005F20[8];
extern Item_82692370 *fn_82692008(Pool_82692370 *pool, unsigned int sizeClass);
extern void *fn_82692200(Pool_82692370 *pool, unsigned int size);
extern void *fn_82691F88(Pool_82692370 *pool, unsigned int size, unsigned int alignment);
extern void *fn_82691CD8(Pool_82692370 *pool, unsigned int size, unsigned int alignment);

static __forceinline Item_82692370 *AllocSmall_82692370(Pool_82692370 *pool, unsigned int size)
{
    unsigned int sizeClass;
    Item_82692370 *item;

    sizeClass = lbl_82005F20[(size - 1) >> pool->shift];
    item = pool->freeLists[sizeClass].tail;
    if (item == (Item_82692370 *)&pool->freeLists[sizeClass]) {
        item = fn_82692008(pool, sizeClass);
        if (item == 0) {
            return 0;
        }
    }
    item->next->prev = item->prev;
    item->prev->head = item->next;
    item->block->used++;
    pool->totalSize -= (sizeClass + 1) << pool->shift;
    return item;
}

void *fn_82692370(Pool_82692370 *pool, unsigned int size, unsigned int alignment)
{
    Item_82692370 *item;

    if (alignment - 1 <= pool->alignMask) {
        return fn_82692200(pool, size);
    }
    if (size < 16) {
        size = 16;
    }
    if (alignment < pool->alignMask + 1) {
        alignment = pool->alignMask + 1;
    }
    if (size < alignment) {
        size = alignment;
    }
    size = (size + alignment - 1) & ~(alignment - 1);
    if (pool->smallEnabled != 0 && size <= (8u << pool->shift)) {
        item = AllocSmall_82692370(pool, size);
        if (item != 0) {
            return item;
        }
        item = AllocSmall_82692370(pool, size);
        if (item != 0) {
            return item;
        }
    }
    if (size < pool->pageThreshold) {
        return fn_82691F88(pool, size, alignment);
    }
    return fn_82691CD8(pool, size, alignment);
}
