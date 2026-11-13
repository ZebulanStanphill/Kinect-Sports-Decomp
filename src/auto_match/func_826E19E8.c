typedef struct Pool_826E19E8 {
    char *cur;
    unsigned int left;
} Pool_826E19E8;

typedef struct Arena_826E19E8 {
    char pad0[8];
    Pool_826E19E8 pool;
} Arena_826E19E8;

typedef struct Owner_826E19E8 {
    char pad0[0x20];
    Arena_826E19E8 *arena;
} Owner_826E19E8;

typedef struct Node_826E19E8 {
    void *vt;
    int value;
} Node_826E19E8;

extern char lbl_8200C894[];

extern void *fn_826D69D0(Pool_826E19E8 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826E19E8 *pool, unsigned int size)
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

static __forceinline Node_826E19E8 *Init(Node_826E19E8 *node)
{
    node->vt = lbl_8200C894;
    return node;
}

Node_826E19E8 *fn_826E19E8(Owner_826E19E8 *self)
{
    Node_826E19E8 *node = (Node_826E19E8 *)Alloc(&self->arena->pool, sizeof(Node_826E19E8));

    return node ? Init(node) : 0;
}
