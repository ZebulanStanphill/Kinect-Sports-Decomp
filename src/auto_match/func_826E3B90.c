typedef struct Pool_826E3B90 {
    char *cur;
    unsigned int left;
} Pool_826E3B90;

typedef struct Arena_826E3B90 {
    char pad0[8];
    Pool_826E3B90 pool;
} Arena_826E3B90;

typedef struct Owner_826E3B90 {
    char pad0[0x20];
    Arena_826E3B90 *arena;
} Owner_826E3B90;

typedef struct Node_826E3B90 {
    int field[7];
} Node_826E3B90;

extern Node_826E3B90 *fn_826E3078(Node_826E3B90 *node);

extern void *fn_826D69D0(Pool_826E3B90 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826E3B90 *pool, unsigned int size)
{
    void *mem;

    if (pool->left >= size) {
        mem = pool->cur;
        pool->left -= size;
        pool->cur += size;
    } else {
        mem = fn_826D69D0(pool, size);
    }
    return mem;
}

Node_826E3B90 *fn_826E3B90(Owner_826E3B90 *self)
{
    Node_826E3B90 *node = (Node_826E3B90 *)Alloc(&self->arena->pool, sizeof(Node_826E3B90));

    return node ? fn_826E3078(node) : 0;
}
