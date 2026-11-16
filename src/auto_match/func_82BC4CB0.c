struct Node_82BC4CB0 {
    int value;
    struct Node_82BC4CB0 *next; /* 0x04 */
};

struct Allocator_82BC4CB0 {
    char padding[0x5b0];
    void *heap; /* 0x5b0 */
};

struct Table_82BC4CB0 {
    void *storage;
    void *array1;
    void *array2;
    void *array3;
    void *array4;
    struct Node_82BC4CB0 **buckets; /* 0x14 */
    void *entries;
    unsigned int mask;
    int unused;
    struct Allocator_82BC4CB0 *allocator; /* 0x24 */
};

extern void fn_82B7BEB0(void *heap, void *allocation);

static __forceinline void FreeNode_82BC4CB0(struct Node_82BC4CB0 *node)
{
    if (node != 0) {
        void **allocation = (void **)node - 1;
        fn_82B7BEB0(*allocation, allocation);
    }
}

void fn_82BC4CB0(struct Table_82BC4CB0 *self)
{
    unsigned int bucket = 0;
    do {
        while (self->buckets[bucket] != 0) {
            struct Node_82BC4CB0 *next;
            if (self->buckets[bucket]->next == 0) {
                break;
            }
            next = self->buckets[bucket]->next;
            FreeNode_82BC4CB0(self->buckets[bucket]);
            self->buckets[bucket] = next;
        }
        {
            int node = (int)self->buckets[bucket];
            if (node != 0) {
                fn_82B7BEB0(*(void **)(node - 4), (void *)(node - 4));
            }
        }
        ++bucket;
    } while (bucket <= self->mask);
    fn_82B7BEB0(self->allocator->heap, self->buckets);
    fn_82B7BEB0(self->allocator->heap, self->entries);
    fn_82B7BEB0(self->allocator->heap, self->storage);
    fn_82B7BEB0(self->allocator->heap, self->array3);
    fn_82B7BEB0(self->allocator->heap, self->array4);
    fn_82B7BEB0(self->allocator->heap, self->array1);
    fn_82B7BEB0(self->allocator->heap, self->array2);
    self->entries = 0;
}
