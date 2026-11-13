typedef struct Pool_826F4540 {
    char *cur;
    unsigned int left;
} Pool_826F4540;

typedef struct Owner_826F4540 {
    char pad0[8];
    Pool_826F4540 pool;
} Owner_826F4540;

typedef struct Node_826F4540 {
    int field[4];
} Node_826F4540;

extern void *fn_826D69D0(Pool_826F4540 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826F4540 *pool, unsigned int size)
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

static __forceinline Node_826F4540 *Init(Node_826F4540 *node)
{
    node->field[0] = 0x40000;
    { int *p = &node->field[1]; *p = 0; }
    node->field[2] = 0;
    node->field[3] = 0;
    return node;
}

Node_826F4540 *fn_826F4540(Owner_826F4540 *self)
{
    Node_826F4540 *node = (Node_826F4540 *)Alloc(&self->pool, sizeof(Node_826F4540));

    return node ? Init(node) : 0;
}
