typedef struct Pool_826DFB98 {
    char *cur;
    unsigned int left;
} Pool_826DFB98;

typedef struct Arena_826DFB98 {
    char pad0[8];
    Pool_826DFB98 pool;
} Arena_826DFB98;

typedef struct Owner_826DFB98 {
    char pad0[0x20];
    Arena_826DFB98 *arena;
} Owner_826DFB98;

typedef struct Node_826DFB98 {
    void *vt;
    int value;
} Node_826DFB98;

extern char lbl_8200C834[];
extern void *fn_826D69D0(Pool_826DFB98 *pool, unsigned int size);

static __forceinline void *Alloc(Pool_826DFB98 *pool, unsigned int size)
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

static __forceinline Node_826DFB98 *Init(Node_826DFB98 *node)
{
    node->value = 0;
    node->vt = lbl_8200C834;
    return node;
}

Node_826DFB98 *fn_826DFB98(Owner_826DFB98 *self)
{
    Node_826DFB98 *node = (Node_826DFB98 *)Alloc(&self->arena->pool, sizeof(Node_826DFB98));

    return node ? Init(node) : 0;
}
