typedef struct Pool_826E1778 {
    char *cur;
    unsigned int left;
} Pool_826E1778;

typedef struct Arena_826E1778 {
    char pad0[8];
    Pool_826E1778 pool;
} Arena_826E1778;

typedef struct Owner_826E1778 {
    char pad0[0x20];
    Arena_826E1778 *arena;
} Owner_826E1778;

typedef struct Node_826E1778 {
    void *vt;
    int value;
} Node_826E1778;

extern char lbl_8200C854[];

extern void *fn_826D69D0(Pool_826E1778 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826E1778 *pool, unsigned int size)
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

static __forceinline Node_826E1778 *Init(Node_826E1778 *node)
{
    node->vt = lbl_8200C854;
    return node;
}

Node_826E1778 *fn_826E1778(Owner_826E1778 *self)
{
    Node_826E1778 *node = (Node_826E1778 *)Alloc(&self->arena->pool, sizeof(Node_826E1778));

    return node ? Init(node) : 0;
}
