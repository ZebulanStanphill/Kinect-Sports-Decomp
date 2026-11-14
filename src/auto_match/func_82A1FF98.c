extern long _InterlockedDecrement(long *);
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct Block_82A1FF98 {
    struct Block_82A1FF98 *next;
    int f4;
    long refs;
} Block_82A1FF98;

typedef struct Pool_82A1FF98 {
    char pad0[8];
    Block_82A1FF98 *freeList;
    char padc[0xc];
    char cs[0x1c];
    int locked;
    int enabled;
} Pool_82A1FF98;

void fn_82A1FF98(Pool_82A1FF98 *pool, void *data)
{
    Block_82A1FF98 *block;

    if (pool->enabled != 0) {
        block = (Block_82A1FF98 *)data - 1;
        if ((unsigned long)block->refs == 1) {
            if (pool->locked != 0)
                RtlEnterCriticalSection(pool->cs);
            block->next = pool->freeList;
            pool->freeList = block;
            if (pool->locked != 0)
                RtlLeaveCriticalSection(pool->cs);
        } else {
            _InterlockedDecrement(&block->refs);
        }
    }
}
