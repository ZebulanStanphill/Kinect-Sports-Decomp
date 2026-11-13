typedef struct Pool_826A9CB8 {
    char *cur;
    unsigned int left;
} Pool_826A9CB8;

typedef struct Arena_826A9CB8 {
    char pad0[8];
    Pool_826A9CB8 pool;
} Arena_826A9CB8;

typedef struct Owner_826A9CB8 {
    char pad0[0x20];
    Arena_826A9CB8 *arena;
} Owner_826A9CB8;

typedef struct Node_826A9CB8 {
    void *vt;
    int value;
} Node_826A9CB8;

extern char lbl_82007264[];

extern void *fn_826D69D0(Pool_826A9CB8 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826A9CB8 *pool, unsigned int size)
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

static __forceinline Node_826A9CB8 *Init(Node_826A9CB8 *node)
{
    node->vt = lbl_82007264;
    { int *p = &node->value; *p = 0; }
    return node;
}

Node_826A9CB8 *fn_826A9CB8(Owner_826A9CB8 *self)
{
    Node_826A9CB8 *node = (Node_826A9CB8 *)Alloc(&self->arena->pool, sizeof(Node_826A9CB8));

    return node ? Init(node) : 0;
}
