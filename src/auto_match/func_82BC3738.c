typedef struct Node_82BC3738 {
    void *vt;
    int f04;
    int f08;
    int f0c;
    int f10;
    int f14;
    int f18;
    char pad1c[0xc8];
    unsigned int flags;     /* 0xe4 */
} Node_82BC3738;

typedef struct Ctx_82BC3738 {
    char pad[0xab0];
    void *list;             /* 0xab0 */
} Ctx_82BC3738;

extern char lbl_820E3E68[];
extern Node_82BC3738 *fn_82BC33B0(Node_82BC3738 *self, int kind, Ctx_82BC3738 *ctx);
extern void fn_82BA0690(void *list, Node_82BC3738 *node);

static __forceinline void SetFlags_82BC3738(unsigned int *flags, unsigned int m)
{
    *flags |= m;
}

Node_82BC3738 *fn_82BC3738(Node_82BC3738 *self, Ctx_82BC3738 *ctx)
{
    Node_82BC3738 *n = fn_82BC33B0(self, 0x30, ctx);
    n->f10 = 1;
    n->vt = lbl_820E3E68;
    SetFlags_82BC3738(&n->flags, 0x12);
    fn_82BA0690(ctx->list, n);
    self->f18 = 0x30;
    self->f14 = 1;
    self->f10 = 0;
    return self;
}
