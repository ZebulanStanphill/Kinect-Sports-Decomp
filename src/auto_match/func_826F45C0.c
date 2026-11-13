typedef struct Pool_826F45C0 {
    char *cur;
    unsigned int left;
} Pool_826F45C0;

typedef struct Owner_826F45C0 {
    char pad0[8];
    Pool_826F45C0 pool;
} Owner_826F45C0;

typedef struct Node_826F45C0 {
    int field[9];
} Node_826F45C0;

extern void *fn_826D69D0(Pool_826F45C0 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826F45C0 *pool, unsigned int size)
{
    char *mem;

    if (pool->left >= size) {
        mem = pool->cur;
        pool->left -= size;
        pool->cur = mem + size;
    } else {
        mem = (char *)fn_826D69D0(pool, size);
    }
    return mem;
}

static __forceinline Node_826F45C0 *Init(Node_826F45C0 *node)
{
    node->field[0] = 0;
    node->field[1] = 0;
    node->field[2] = 0;
    node->field[3] = 0;
    node->field[4] = 0;
    node->field[5] = 0;
    node->field[6] = 0;
    node->field[7] = 0;
    node->field[8] = 0;
    return node;
}

Node_826F45C0 *fn_826F45C0(Owner_826F45C0 *self)
{
    Node_826F45C0 *node = (Node_826F45C0 *)Alloc(&self->pool, sizeof(Node_826F45C0));

    return node ? Init(node) : 0;
}
