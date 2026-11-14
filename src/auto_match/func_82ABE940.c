typedef struct FreeNode_82ABE940 { struct FreeNode_82ABE940 *next; } FreeNode_82ABE940;
typedef struct Pool_82ABE940 {
    FreeNode_82ABE940 *free[0x23];
    unsigned int end;    /* 0x8c */
    unsigned int cur;    /* 0x90 */
} Pool_82ABE940;

extern void *memset(void *dst, int c, unsigned int n);
extern void *fn_82ABDF50(Pool_82ABE940 *pool, unsigned int size);
extern void *fn_82ABE8C8(Pool_82ABE940 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_82ABE940 *pool, unsigned int size)
{
    FreeNode_82ABE940 *node;
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

/* The pool pointer sits at the start of the 4 KB page that holds the block. */
void *fn_82ABE940(void *block, unsigned int size)
{
    Pool_82ABE940 *pool = *(Pool_82ABE940 **)((unsigned int)block & ~0xfffu);
    void *p;

    if (size > 0x84)
        p = fn_82ABE8C8(pool, size);
    else
        p = Alloc(pool, size);
    return p;
}
