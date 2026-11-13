typedef struct Pool_826F44D0 {
    char *cur;
    unsigned int left;
} Pool_826F44D0;

typedef struct Owner_826F44D0 {
    char pad0[8];
    Pool_826F44D0 pool;
} Owner_826F44D0;

typedef struct Node_826F44D0 {
    int field[4];
} Node_826F44D0;

extern void *fn_826D69D0(Pool_826F44D0 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826F44D0 *pool, unsigned int size)
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

static __forceinline Node_826F44D0 *Init(Node_826F44D0 *node)
{
    node->field[0] = 0;
    node->field[1] = 0;
    node->field[3] = 0;
    return node;
}

Node_826F44D0 *fn_826F44D0(Owner_826F44D0 *self)
{
    Node_826F44D0 *node = (Node_826F44D0 *)Alloc(&self->pool, sizeof(Node_826F44D0));

    return node ? Init(node) : 0;
}
