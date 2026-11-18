typedef struct CriticalSection_82A1FEB8 {
    int words[7]; /* 0x0 */
} CriticalSection_82A1FEB8;

typedef struct Node_82A1FEB8 {
    struct Node_82A1FEB8 *next; /* 0x0 */
    unsigned int key;           /* 0x4 */
    int refCount;               /* 0x8 */
    int value;                  /* 0xc */
} Node_82A1FEB8;

typedef struct HashTable_82A1FEB8 {
    Node_82A1FEB8 **buckets;       /* 0x00 */
    unsigned int bucketCount;      /* 0x04 */
    Node_82A1FEB8 *freeList;       /* 0x08 */
    int unknownC[3];               /* 0x0c */
    CriticalSection_82A1FEB8 lock; /* 0x18 */
    int locked;                    /* 0x34 */
    int refCounted;                /* 0x38 */
} HashTable_82A1FEB8;

extern void RtlEnterCriticalSection(CriticalSection_82A1FEB8 *section);
extern void RtlLeaveCriticalSection(CriticalSection_82A1FEB8 *section);

void fn_82A1FDC8(HashTable_82A1FEB8 *self, unsigned int key)
{
    unsigned int hash = ((((key >> 8) ^ key) >> 8 ^ key) >> 8 ^ key) % self->bucketCount;
    Node_82A1FEB8 *node;
    Node_82A1FEB8 *prev = 0;

    if (self->locked != 0) {
        RtlEnterCriticalSection(&self->lock);
    }
    node = self->buckets[hash];
    while (node != 0) {
        if (node->key == key) {
            break;
        }
        prev = node;
        node = node->next;
    }
    if (node != 0) {
        if (prev == 0) {
            self->buckets[hash] = node->next;
        } else {
            prev->next = node->next;
        }
        if (self->refCounted != 0) {
            if (--node->refCount == 0) {
                node->next = self->freeList;
                self->freeList = node;
            }
        }
    }
    if (self->locked != 0) {
        RtlLeaveCriticalSection(&self->lock);
    }
}
