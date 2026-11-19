typedef struct Link_82B478C8 {
    unsigned int next;
    unsigned int prev;
} Link_82B478C8;

typedef struct Node_82B478C8 {
    int unk0[4];
    Link_82B478C8 lists[3]; /* 0x10 */
    int unk28[2];
    unsigned int pad30 : 12; /* 0x30 */
    unsigned int flag : 1;
    unsigned int unk30 : 19;
    int unk34[4];
    unsigned int pad44 : 4; /* 0x44 */
    unsigned int count : 28;
    int unk48[11];
    int value; /* 0x74 */
    int unk78;
} Node_82B478C8;

typedef struct Ctx_82B478C8 {
    unsigned int head; /* 0x0 */
    int unk4[185];
    void *listener; /* 0x2e8 */
} Ctx_82B478C8;

extern Node_82B478C8 *fn_82AC6560(Ctx_82B478C8 *ctx, int size, int kind);
extern void fn_82B47068(Ctx_82B478C8 *ctx, Node_82B478C8 *node, int value);

static __forceinline void listInit_82B478C8(Link_82B478C8 *l)
{
    l->prev = ((unsigned int)l - 0x24) | 1;
    l->next = (unsigned int)&l->prev | 1;
}

Node_82B478C8 *fn_82B478C8(Ctx_82B478C8 *ctx, int value)
{
    Node_82B478C8 *n;
    unsigned int *link;

    n = fn_82AC6560(ctx, 0x7c, 5);
    listInit_82B478C8(&n->lists[0]);
    listInit_82B478C8(&n->lists[1]);
    listInit_82B478C8(&n->lists[2]);
    n->count = 1;
    n->flag = 1;
    {
        int *pValue = &n->value;
        *pValue = value;
    }
    link = (unsigned int *)((unsigned int)n & ~1u);
    link[0] = ctx->head;
    *(unsigned int *)(ctx->head & ~1u) = (unsigned int)link;
    link[1] = (unsigned int)ctx | 1;
    ctx->head = (unsigned int)(link + 1);
    if (ctx->listener != 0) {
        fn_82B47068(ctx, n, value);
    }
    return n;
}
