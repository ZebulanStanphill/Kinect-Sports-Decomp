typedef struct FreeNode_82AE60E8 { struct FreeNode_82AE60E8 *next; } FreeNode_82AE60E8;
typedef struct Pool_82AE60E8 {
    FreeNode_82AE60E8 *free[0x23];
    unsigned int end;    /* 0x8c */
    unsigned int cur;    /* 0x90 */
} Pool_82AE60E8;

typedef struct Self_82AE60E8 { char pad[0x32c]; Pool_82AE60E8 pool; } Self_82AE60E8;

extern void *memset(void *dst, int c, unsigned int n);
extern void *fn_82ABDF50(Pool_82AE60E8 *pool, unsigned int size);
extern void *fn_82ABE8C8(Pool_82AE60E8 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_82AE60E8 *pool, unsigned int size)
{
    FreeNode_82AE60E8 *node;
    void *result;
    int idx;

    if (pool->end - pool->cur + 0x1000 >= size) {
        result = (void *)pool->cur;
        pool->cur += size;
    } else {
        idx = (size >> 2) - 1;
        node = pool->free[idx];
        if (node != 0) {
            pool->free[idx] = node->next;
            memset(node, 0, size);
            result = node;
        } else {
            result = fn_82ABDF50(pool, size);
        }
    }
    return result;
}

void *fn_82AE60E8(Self_82AE60E8 *self, unsigned int size)
{
    Pool_82AE60E8 *pool = &self->pool;
    void *p;

    if (size > 0x84)
        p = fn_82ABE8C8(pool, size);
    else
        p = Alloc(pool, size);
    return p;
}
