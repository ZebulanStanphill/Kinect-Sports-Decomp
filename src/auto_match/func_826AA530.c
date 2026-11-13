typedef struct Pool_826AA530 {
    char *cur;
    unsigned int left;
} Pool_826AA530;

typedef struct Arena_826AA530 {
    char pad0[8];
    Pool_826AA530 pool;
} Arena_826AA530;

typedef struct Owner_826AA530 {
    char pad0[0x20];
    Arena_826AA530 *arena;
} Owner_826AA530;

typedef struct Node_826AA530 {
    void *vt;
    int value;
} Node_826AA530;

extern char lbl_8200728C[];
extern void *fn_826D69D0(Pool_826AA530 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826AA530 *pool, unsigned int size)
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

static __forceinline Node_826AA530 *Init(Node_826AA530 *node)
{
    node->value = 0;
    node->vt = lbl_8200728C;
    return node;
}

Node_826AA530 *fn_826AA530(Owner_826AA530 *self)
{
    Node_826AA530 *node = (Node_826AA530 *)Alloc(&self->arena->pool, sizeof(Node_826AA530));

    return node ? Init(node) : 0;
}
