typedef struct Node_82963998 { char pad[0x70]; struct Node_82963998 *next; } Node_82963998;
typedef struct Ctx_82963998 { void *f0; void *f4; void *f8; Node_82963998 *freeList; void *heap; } Ctx_82963998;
extern Ctx_82963998 *fn_82934160(void);
extern void *fn_829301D0(void *heap, unsigned int size, int align);

Node_82963998 *fn_82963998(unsigned int size)
{
    Ctx_82963998 *ctx = fn_82934160();
    Node_82963998 *n = ctx->freeList;
    if (n != 0) {
        ctx->freeList = n->next;
    } else {
        n = (Node_82963998 *)fn_829301D0(ctx->heap, size, 0x10);
    }
    return n;
}
