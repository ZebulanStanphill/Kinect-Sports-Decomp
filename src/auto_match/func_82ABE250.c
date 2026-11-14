typedef struct FreeNode_82ABE250 { struct FreeNode_82ABE250 *next; } FreeNode_82ABE250;
typedef struct Pool_82ABE250 {
    FreeNode_82ABE250 *free[0x23];
    unsigned int end;    /* 0x8c */
    unsigned int cur;    /* 0x90 */
} Pool_82ABE250;
typedef struct Self_82ABE250 { char pad[0x3cc]; Pool_82ABE250 pool; } Self_82ABE250;

extern void *memset(void *dst, int c, unsigned int n);
extern void *fn_82ABDF50(Pool_82ABE250 *pool, unsigned int size);
void *fn_82ABE250(Self_82ABE250 *self, unsigned int size)
{
    Pool_82ABE250 *pool = &self->pool;
    FreeNode_82ABE250 *node;
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
