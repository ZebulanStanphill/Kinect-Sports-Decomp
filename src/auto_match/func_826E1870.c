typedef struct Pool_826E1870 {
    char *cur;
    unsigned int left;
} Pool_826E1870;

typedef struct Arena_826E1870 {
    char pad0[8];
    Pool_826E1870 pool;
} Arena_826E1870;

typedef struct Owner_826E1870 {
    char pad0[0x20];
    Arena_826E1870 *arena;
} Owner_826E1870;

typedef struct Node_826E1870 {
    void *vt;
} Node_826E1870;

extern char lbl_8200C8E0[];
extern void *fn_826D69D0(Pool_826E1870 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826E1870 *pool, unsigned int size)
{
    char *mem;

    if (size <= pool->left) {
        mem = pool->cur;
        pool->left -= size;
        pool->cur = mem + size;
        return mem;
    }
    return fn_826D69D0(pool, size);
}

static __forceinline Node_826E1870 *Init(Node_826E1870 *node)
{
    node->vt = lbl_8200C8E0;
    return node;
}

Node_826E1870 *fn_826E1870(Owner_826E1870 *self, unsigned int length)
{
    Node_826E1870 *node = (Node_826E1870 *)Alloc(&self->arena->pool, (length + 10) & ~3);

    return node ? Init(node) : 0;
}
