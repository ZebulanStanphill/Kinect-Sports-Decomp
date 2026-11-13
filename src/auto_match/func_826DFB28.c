typedef struct Pool_826DFB28 {
    char *cur;
    unsigned int left;
} Pool_826DFB28;

typedef struct Arena_826DFB28 {
    char pad0[8];
    Pool_826DFB28 pool;
} Arena_826DFB28;

typedef struct Owner_826DFB28 {
    char pad0[0x20];
    Arena_826DFB28 *arena;
} Owner_826DFB28;

extern void *fn_826D69D0(Pool_826DFB28 *pool, unsigned int size);
extern void *fn_826F7EF0(void *node);

static __forceinline void *Alloc(Pool_826DFB28 *pool, unsigned int size)
{
    char *mem;

    if (size <= pool->left) {
        mem = pool->cur;
        pool->cur += size;
        pool->left -= size;
    } else {
        mem = (char *)fn_826D69D0(pool, size);
    }
    return mem;
}

void *fn_826DFB28(Owner_826DFB28 *self, int count)
{
    void *node = Alloc(&self->arena->pool, (count + 10) & ~3);

    return node ? fn_826F7EF0(node) : 0;
}
