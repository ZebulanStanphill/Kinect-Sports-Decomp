typedef struct Item_82692008 Item_82692008;

typedef struct FreeList_82692008 {
    Item_82692008 *head; /* 0x0 */
    Item_82692008 *tail; /* 0x4 */
} FreeList_82692008;

typedef struct Block_82692008 {
    char reserved00[0x18]; /* 0x00 */
    unsigned int size;     /* 0x18 */
    Item_82692008 *items;  /* 0x1c */
} Block_82692008;

struct Item_82692008 {
    Item_82692008 *next;     /* 0x0 */
    FreeList_82692008 *prev; /* 0x4 */
    Block_82692008 *block;   /* 0x8 */
};

typedef struct Pool_82692008 {
    char reserved00[0xc];            /* 0x000 */
    unsigned int shift;              /* 0x00c */
    char reserved10[0x1a4];          /* 0x010 */
    FreeList_82692008 freeLists[11]; /* 0x1b4 */
    char reserved20c[4];             /* 0x20c */
    unsigned int totalSize;          /* 0x210 */
} Pool_82692008;

typedef struct Globals_82692008 {
    char reserved000[0x2c4]; /* 0x000 */
    char lock[0x1c];         /* 0x2c4 */
} Globals_82692008;

extern Globals_82692008 *lbl_831E7E60;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern Block_82692008 *fn_826914F8(Pool_82692008 *pool, unsigned int type, unsigned int size,
                                   unsigned int pageSize, unsigned int headerSize, unsigned char *created);

Item_82692008 *fn_82692008(Pool_82692008 *pool, unsigned int sizeClass)
{
    void *cs = lbl_831E7E60->lock;
    unsigned int itemSize;
    unsigned int size;
    unsigned int count;
    unsigned char created;
    Block_82692008 *block;
    Item_82692008 *result;

    RtlEnterCriticalSection(cs);
    itemSize = (sizeClass + 1) << pool->shift;
    size = itemSize * 4;
    if (size <= 0x1000) {
        size = 0x1000;
    }
    block = fn_826914F8(pool, sizeClass, (size + 0xfff) & ~0xfff, 0x1000, 0, &created);
    if (block != 0) {
        Item_82692008 *item = block->items;
        unsigned int *total = &pool->totalSize;
        FreeList_82692008 *list = &pool->freeLists[sizeClass];
        for (count = block->size / itemSize; count != 0; count--) {
            item->block = block;
            item->next = list->head;
            item->prev = list;
            list->head->prev = (FreeList_82692008 *)item;
            list->head = item;
            item = (Item_82692008 *)((char *)item + itemSize);
        }
        *total += block->size;
        result = block->items;
        RtlLeaveCriticalSection(cs);
        return result;
    } else {
        result = 0;
        RtlLeaveCriticalSection(cs);
        return result;
    }
}
