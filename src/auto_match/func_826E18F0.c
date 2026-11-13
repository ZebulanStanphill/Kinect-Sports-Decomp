typedef struct Pool_826E18F0 {
    char *cur;
    unsigned int left;
} Pool_826E18F0;

typedef struct Arena_826E18F0 {
    char pad0[8];
    Pool_826E18F0 pool;
} Arena_826E18F0;

typedef struct Owner_826E18F0 {
    char pad0[0x20];
    Arena_826E18F0 *arena;
} Owner_826E18F0;

typedef struct Node_826E18F0 {
    void *vt;
} Node_826E18F0;

extern char lbl_8200C90C[];
extern void *fn_826D69D0(Pool_826E18F0 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826E18F0 *pool, unsigned int size)
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

static __forceinline Node_826E18F0 *Init(Node_826E18F0 *node)
{
    node->vt = lbl_8200C90C;
    return node;
}

Node_826E18F0 *fn_826E18F0(Owner_826E18F0 *self, unsigned int length)
{
    Node_826E18F0 *node = (Node_826E18F0 *)Alloc(&self->arena->pool, (length + 10) & ~3);

    return node ? Init(node) : 0;
}
