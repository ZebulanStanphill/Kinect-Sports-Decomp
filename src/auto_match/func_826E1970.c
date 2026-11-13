typedef struct Pool_826E1970 {
    char *cur;
    unsigned int left;
} Pool_826E1970;

typedef struct Arena_826E1970 {
    char pad0[8];
    Pool_826E1970 pool;
} Arena_826E1970;

typedef struct Owner_826E1970 {
    char pad0[0x20];
    Arena_826E1970 *arena;
} Owner_826E1970;

typedef struct Node_826E1970 {
    void *vt;
    int value;
} Node_826E1970;

extern char lbl_8200C874[];

extern void *fn_826D69D0(Pool_826E1970 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826E1970 *pool, unsigned int size)
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

static __forceinline Node_826E1970 *Init(Node_826E1970 *node)
{
    node->vt = lbl_8200C874;
    return node;
}

Node_826E1970 *fn_826E1970(Owner_826E1970 *self)
{
    Node_826E1970 *node = (Node_826E1970 *)Alloc(&self->arena->pool, sizeof(Node_826E1970));

    return node ? Init(node) : 0;
}
