typedef struct CriticalSection_82A1FC48 {
    int words[7]; /* 0x0 */
} CriticalSection_82A1FC48;

typedef struct Node_82A1FC48 {
    struct Node_82A1FC48 *next; /* 0x0 */
    unsigned int key;           /* 0x4 */
    int refCount;               /* 0x8 */
    int value;                  /* 0xc */
} Node_82A1FC48;

typedef struct Block_82A1FC48 {
    struct Block_82A1FC48 *next; /* 0x0 */
    char nodes[4];               /* 0x4 */
} Block_82A1FC48;

typedef struct HashTable_82A1FC48 {
    Node_82A1FC48 **buckets;       /* 0x00 */
    unsigned int bucketCount;      /* 0x04 */
    void **freeList;               /* 0x08 */
    Block_82A1FC48 *blocks;        /* 0x0c */
    unsigned int nodeSize;         /* 0x10 */
    int unknown14;                 /* 0x14 */
    CriticalSection_82A1FC48 lock; /* 0x18 */
    int locked;                    /* 0x34 */
    int refCounted;                /* 0x38 */
} HashTable_82A1FC48;

extern unsigned int lbl_8315D2EC;
extern void RtlEnterCriticalSection(CriticalSection_82A1FC48 *section);
extern void RtlLeaveCriticalSection(CriticalSection_82A1FC48 *section);
extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void *memset(void *dst, int value, unsigned int size);

void *fn_82A1FC48(HashTable_82A1FC48 *self, unsigned int key)
{
    unsigned int hash = ((((key >> 8) ^ key) >> 8 ^ key) >> 8 ^ key) % self->bucketCount;
    Node_82A1FC48 *node;
    Block_82A1FC48 *block;
    unsigned int size;
    unsigned int i;

    if (self->locked != 0) {
        RtlEnterCriticalSection(&self->lock);
    }
    if (self->freeList == 0) {
        if (self->locked != 0) {
            RtlLeaveCriticalSection(&self->lock);
        }
        size = self->nodeSize * 20 + 4;
        block = (Block_82A1FC48 *)fn_8265C940(size, lbl_8315D2EC);
        if (block == 0) {
            return 0;
        }
        if (self->locked != 0) {
            RtlEnterCriticalSection(&self->lock);
        }
        block->next = self->blocks;
        self->blocks = block;
        for (i = (size - 4) / self->nodeSize - 1; i != 0; i--) {
            void **entry = (void **)(block->nodes + self->nodeSize * i);
            *entry = self->freeList;
            self->freeList = entry;
        }
    }
    node = (Node_82A1FC48 *)self->freeList;
    self->freeList = (void **)*self->freeList;
    memset(node, 0, self->nodeSize);
    node->next = self->buckets[hash];
    node->key = key;
    self->buckets[hash] = node;
    if (self->refCounted != 0) {
        node->refCount = 2;
    }
    if (self->locked != 0) {
        RtlLeaveCriticalSection(&self->lock);
    }
    return self->refCounted != 0 ? (void *)&node->value : (void *)&node->refCount;
}
