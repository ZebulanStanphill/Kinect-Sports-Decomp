typedef struct Bucket_82BC01C0 {
    unsigned int capacity; /* 0x00 */
    unsigned int size;     /* 0x04 */
    unsigned int *data;    /* 0x08 */
    void *allocator;       /* 0x0c */
} Bucket_82BC01C0;

typedef struct Table_82BC01C0 {
    int count;                          /* 0x00 */
    int pad4;                           /* 0x04 */
    Bucket_82BC01C0 **buckets;          /* 0x08 */
    int (*equal)(unsigned int, void *); /* 0x0c */
    unsigned int (*hash)(unsigned int); /* 0x10 */
    void *allocator;                    /* 0x14 */
} Table_82BC01C0;

extern void **fn_82B7BD28(void *allocator, int size);
extern void *memset(void *dest, int value, unsigned int size);
extern void fn_82BA03B8(Bucket_82BC01C0 *bucket, void *allocator);
extern unsigned int *fn_82BC0088(Bucket_82BC01C0 *bucket, unsigned int index);

static __forceinline void *Alloc(void *allocator, int size)
{
    void **mem = fn_82B7BD28(allocator, size + 4);
    *mem = allocator;
    return mem + 1;
}

static __forceinline Bucket_82BC01C0 *BucketConstruct(Bucket_82BC01C0 *bucket, void *allocator)
{
    fn_82BA03B8(bucket, allocator);
    return bucket;
}

/* Doubles the bucket count and splits every old bucket into its two new buckets. */
void fn_82BC01C0(Table_82BC01C0 *table)
{
    int oldCount = table->count;
    Bucket_82BC01C0 **buckets;
    int i;

    table->count = oldCount * 2;
    buckets = (Bucket_82BC01C0 **)fn_82B7BD28(table->allocator, oldCount * 8);
    memset(buckets, 0, table->count * 4);
    for (i = 0; i < oldCount; i++) {
        Bucket_82BC01C0 **oldBuckets = table->buckets;
        Bucket_82BC01C0 *old = oldBuckets[i];
        Bucket_82BC01C0 *mem;
        Bucket_82BC01C0 *low;
        Bucket_82BC01C0 *high;
        int n;

        if (old == 0)
            continue;
        mem = (Bucket_82BC01C0 *)Alloc(table->allocator, 0x10);
        buckets[i] = mem ? BucketConstruct(mem, table->allocator) : 0;
        mem = (Bucket_82BC01C0 *)Alloc(table->allocator, 0x10);
        high = mem ? BucketConstruct(mem, table->allocator) : 0;
        buckets[i + oldCount] = high;
        n = old->size;
        low = buckets[i];
        while (n != 0) {
            unsigned int *item;
            unsigned int value;

            n--;
            if ((unsigned int)n < old->size)
                item = &old->data[n];
            else
                item = fn_82BC0088(old, n);
            value = *item;
            if ((table->hash(value) & (table->count - 1)) == i)
                *fn_82BC0088(low, low->size) = value;
            else
                *fn_82BC0088(high, high->size) = value;
        }
    }
    table->buckets = buckets;
}
