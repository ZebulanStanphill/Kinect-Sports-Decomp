typedef struct Link_82AC68F0 {
    unsigned int next;
    unsigned int prev;
} Link_82AC68F0;

typedef struct Node_82AC68F0 {
    int unk0[4];
    Link_82AC68F0 lists[3];
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
} Node_82AC68F0;

typedef struct Ctx_82AC68F0 {
    int unk0[8];
    unsigned int line;
    int unk24;
    unsigned int pad28 : 2;
    unsigned int flag : 1;
    unsigned int unk28 : 29;
    int unk2c[12];
    unsigned int nextId;
} Ctx_82AC68F0;

extern Node_82AC68F0 *fn_82AC6560(Ctx_82AC68F0 *ctx, int size, int kind);

static __forceinline void listInit_82AC68F0(Link_82AC68F0 *l)
{
    l->prev = ((unsigned int)l - 0x24) | 1;
    l->next = (unsigned int)&l->prev | 1;
}

void fn_82AC68F0(Ctx_82AC68F0 *ctx)
{
    Node_82AC68F0 *n;
    unsigned int id;

    n = fn_82AC6560(ctx, 0x74, 5);
    listInit_82AC68F0(&n->lists[0]);
    listInit_82AC68F0(&n->lists[1]);
    listInit_82AC68F0(&n->lists[2]);
    n->count = 1;
    id = ctx->nextId;
    ctx->nextId = id + 1;
    n->id = id;
    n->line = ctx->line;
    if (ctx->flag) {
        n->flag = 1;
    }
}
