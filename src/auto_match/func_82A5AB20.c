typedef struct Node_82A5AB20 {
    int reserved00;             /* 0x0 */
    struct Node_82A5AB20 *next; /* 0x4 */
} Node_82A5AB20;

typedef struct Pool_82A5AB20 {
    Node_82A5AB20 *freeList; /* 0x00 */
    char reserved04[0xc8];   /* 0x04 */
    Node_82A5AB20 *usedList; /* 0xcc */
    int usedCount;           /* 0xd0 */
    int usedBytes;           /* 0xd4 */
    int reservedD8;          /* 0xd8 */
} Pool_82A5AB20;

typedef struct Stream_82A5AB20 {
    void *vtbl;             /* 0x000 */
    char reserved004[0x3c]; /* 0x004 */
    char sink[0x44];        /* 0x040 */
    Pool_82A5AB20 packets;  /* 0x084 */
    Pool_82A5AB20 buffers;  /* 0x160 */
} Stream_82A5AB20;

extern char lbl_8208DE68[];
extern void fn_82A412D8(Pool_82A5AB20 *pool);
extern void fn_82A40018(void *sink);
extern void fn_82A5A4D8(Stream_82A5AB20 *self);

static __forceinline void ReleaseAll(Pool_82A5AB20 *pool)
{
    while (pool->usedList != 0) {
        Node_82A5AB20 *node = pool->usedList;
        Node_82A5AB20 *next = node->next;

        node->next = pool->freeList;
        pool->freeList = node;
        pool->usedList = next;
    }
    pool->usedBytes = 0;
    pool->usedCount = 0;
}

void fn_82A5AB20(Stream_82A5AB20 *self)
{
    self->vtbl = lbl_8208DE68;
    ReleaseAll(&self->buffers);
    ReleaseAll(&self->packets);
    fn_82A412D8(&self->buffers);
    fn_82A412D8(&self->packets);
    fn_82A40018(self->sink);
    fn_82A5A4D8(self);
}
