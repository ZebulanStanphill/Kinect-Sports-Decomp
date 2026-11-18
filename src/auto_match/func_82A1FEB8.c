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
    int unknown8[4];               /* 0x08 */
    CriticalSection_82A1FEB8 lock; /* 0x18 */
    int locked;                    /* 0x34 */
    int refCounted;                /* 0x38 */
} HashTable_82A1FEB8;

extern void RtlEnterCriticalSection(CriticalSection_82A1FEB8 *section);
extern void RtlLeaveCriticalSection(CriticalSection_82A1FEB8 *section);

void *fn_82A1FEB8(HashTable_82A1FEB8 *self, unsigned int key)
{
    unsigned int hash = ((((key >> 8) ^ key) >> 8 ^ key) >> 8 ^ key) % self->bucketCount;
    Node_82A1FEB8 *node;

    if (self->locked != 0) {
        RtlEnterCriticalSection(&self->lock);
    }
    for (node = self->buckets[hash]; node != 0; node = node->next) {
        if (node->key == key) {
            if (self->refCounted != 0) {
                node->refCount++;
            }
            if (self->locked != 0) {
                RtlLeaveCriticalSection(&self->lock);
            }
            return self->refCounted != 0 ? (void *)&node->value : (void *)&node->refCount;
        }
    }
    if (self->locked != 0) {
        RtlLeaveCriticalSection(&self->lock);
    }
    return 0;
}
