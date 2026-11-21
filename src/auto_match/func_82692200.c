typedef struct Item_82692200 Item_82692200;

typedef struct FreeList_82692200 {
    Item_82692200 *head; /* 0x0 */
    Item_82692200 *tail; /* 0x4 */
} FreeList_82692200;

typedef struct Block_82692200 {
    char reserved00[0x10];
    int used; /* 0x10 */
} Block_82692200;

struct Item_82692200 {
    Item_82692200 *next;     /* 0x0 */
    FreeList_82692200 *prev; /* 0x4 */
    Block_82692200 *block;   /* 0x8 */
};

typedef struct Pool_82692200 {
    char reserved00[0xc];
    unsigned int shift;     /* 0x00c */
    unsigned int alignMask; /* 0x010 */
    char reserved14[0x1a0];
    FreeList_82692200 freeLists[8]; /* 0x1b4 */
    unsigned char smallEnabled;     /* 0x1f4 */
    char reserved1f5[0xf];
    unsigned int pageThreshold; /* 0x204 */
    char reserved208[0x8];
    unsigned int totalSize; /* 0x210 */
} Pool_82692200;

extern Item_82692200 *fn_82692008(Pool_82692200 *pool, unsigned int sizeClass);
extern void *fn_82691F08(Pool_82692200 *pool, unsigned int size);
extern void *fn_82691CD8(Pool_82692200 *pool, unsigned int size, unsigned int alignment);

static __forceinline Item_82692200 *AllocSmall_82692200(Pool_82692200 *pool, unsigned int size)
{
    unsigned int sizeClass;
    Item_82692200 *item;

    sizeClass = (size - 1) >> pool->shift;
    item = pool->freeLists[sizeClass].tail;
    if (item == (Item_82692200 *)&pool->freeLists[sizeClass]) {
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

void *fn_82692200(Pool_82692200 *pool, unsigned int size)
{
    Item_82692200 *item;

    if (size < 16) {
        size = 16;
    }
    size = (size + pool->alignMask) & ~pool->alignMask;
    if (pool->smallEnabled != 0 && size <= (8u << pool->shift)) {
        item = AllocSmall_82692200(pool, size);
        if (item != 0) {
            return item;
        }
        item = AllocSmall_82692200(pool, size);
        if (item != 0) {
            return item;
        }
    }
    if (size < pool->pageThreshold) {
        return fn_82691F08(pool, size);
    }
    return fn_82691CD8(pool, size, 0x1000);
}
