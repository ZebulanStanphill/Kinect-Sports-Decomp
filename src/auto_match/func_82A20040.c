extern long _InterlockedIncrement(long *);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct Block_82A20040 {
    struct Block_82A20040 *next; /* 0x0 */
    int f4;                      /* 0x4 */
    long refs;                   /* 0x8 */
} Block_82A20040;

typedef struct Pool_82A20040 {
    Block_82A20040 **buckets; /* 0x00 */
    unsigned int count;       /* 0x04 */
    char pad08[0x10];
    char cs[0x1c]; /* 0x18 */
    int locked;    /* 0x34 */
    int enabled;   /* 0x38 */
} Pool_82A20040;

typedef struct Iterator_82A20040 {
    unsigned int index;      /* 0x0 */
    Block_82A20040 *current; /* 0x4 */
} Iterator_82A20040;

static __forceinline void *ToData(Pool_82A20040 *pool, Block_82A20040 *block)
{
    if (pool->enabled != 0) {
        return (char *)block + 0xc;
    }
    return (char *)block + 8;
}

static __forceinline Block_82A20040 *FromData(Pool_82A20040 *pool, void *data)
{
    if (pool->enabled != 0) {
        return (Block_82A20040 *)((char *)data - 0xc);
    }
    return (Block_82A20040 *)((char *)data - 8);
}

static __forceinline void AddRef(Pool_82A20040 *pool, void *data)
{
    if (pool->enabled != 0) {
        Block_82A20040 *block = FromData(pool, data);
        _InterlockedIncrement(&block->refs);
    }
}

void *fn_82A20040(Pool_82A20040 *pool, Iterator_82A20040 *it)
{
    Block_82A20040 *block;
    void *data;
    int first;

    if (pool->locked != 0) {
        RtlEnterCriticalSection(pool->cs);
    }
    if (it->current != 0 && it->current->next != 0) {
        it->current = it->current->next;
    } else {
        first = it->current == 0;
        for (;;) {
            if (!first) {
                if (++it->index >= pool->count) {
                    it->current = 0;
                    break;
                }
            }
            it->current = pool->buckets[it->index];
            if (it->current != 0) {
                break;
            }
            first = 0;
        }
    }
    if (pool->locked != 0) {
        RtlLeaveCriticalSection(pool->cs);
    }
    block = it->current;
    if (block != 0) {
        data = ToData(pool, block);
        AddRef(pool, data);
        return data;
    }
    return 0;
}
