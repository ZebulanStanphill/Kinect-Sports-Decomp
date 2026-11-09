typedef struct Link_82B477E0 {
    unsigned int next;
    unsigned int prev;
} Link_82B477E0;

typedef struct Node_82B477E0 {
    int unk0[4];
    Link_82B477E0 lists[3];
    int unk28[2];
    unsigned int pad30 : 13;
    unsigned int id : 19;
    int unk34[4];
    unsigned int pad44 : 4;
    unsigned int count : 28;
    int unk48;
    unsigned int pad4c : 12;
    unsigned int flag : 1;
    unsigned int line : 19;
} Node_82B477E0;

typedef struct Ctx_82B477E0 {
    int unk0[8];
    unsigned int line;
    int unk24;
    unsigned int pad28 : 2;
    unsigned int flag : 1;
    unsigned int unk28 : 29;
    int unk2c[12];
    unsigned int nextId;
} Ctx_82B477E0;

extern Node_82B477E0 *fn_82AC6560(Ctx_82B477E0 *ctx, int size, int kind);

static __forceinline void listInit_82B477E0(Link_82B477E0 *l)
{
    l->prev = ((unsigned int)l - 0x24) | 1;
    l->next = (unsigned int)&l->prev | 1;
}

void fn_82B477E0(Ctx_82B477E0 *ctx)
{
    Node_82B477E0 *n;
    unsigned int *link;

    n = fn_82AC6560(ctx, 0x74, 5);
    listInit_82B477E0(&n->lists[0]);
    listInit_82B477E0(&n->lists[1]);
    listInit_82B477E0(&n->lists[2]);
    n->count = 1;
    n->line = ctx->line;
    if (ctx->flag) {
        n->flag = 1;
    }
    link = (unsigned int *)((unsigned int)n & ~1u);
    link[0] = *(unsigned int *)ctx;
    *(unsigned int *)(*(unsigned int *)ctx & ~1u) = (unsigned int)link;
    link[1] = (unsigned int)ctx | 1;
    *(unsigned int *)ctx = (unsigned int)(link + 1);
}
