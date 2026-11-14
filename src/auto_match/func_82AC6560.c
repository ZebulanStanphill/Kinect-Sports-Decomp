typedef struct FreeNode_82AC6560 { struct FreeNode_82AC6560 *next; } FreeNode_82AC6560;
typedef struct Pool_82AC6560 {
    FreeNode_82AC6560 *free[0x23];
    unsigned int end;    /* 0x8c */
    unsigned int cur;    /* 0x90 */
} Pool_82AC6560;
typedef struct Self_82AC6560 { char pad[0x32c]; Pool_82AC6560 pool; } Self_82AC6560;

extern void *memset(void *dst, int c, unsigned int n);
extern void *fn_82ABDF50(Pool_82AC6560 *pool, unsigned int size);
void *fn_82AC6560(Self_82AC6560 *self, unsigned int size)
{
    Pool_82AC6560 *pool = &self->pool;
    FreeNode_82AC6560 *node;
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
