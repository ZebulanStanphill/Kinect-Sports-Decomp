typedef struct Node_82964128 { char pad[0x78]; struct Node_82964128 *next; } Node_82964128;
typedef struct Ctx_82964128 { void *f0; Node_82964128 *freeList; void *heap; } Ctx_82964128;
extern Ctx_82964128 *fn_82934160(void);
extern void *fn_829301D0(void *heap, unsigned int size, int align);

Node_82964128 *fn_82964128(unsigned int size)
{
    Ctx_82964128 *ctx = fn_82934160();
    Node_82964128 *n = ctx->freeList;
    if (n != 0) {
        ctx->freeList = n->next;
    } else {
        n = (Node_82964128 *)fn_829301D0(ctx->heap, size, 0x10);
    }
    return n;
}
