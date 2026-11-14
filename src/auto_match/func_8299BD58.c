extern int fn_82975B00(void *, int, int, const char *);
extern int fn_82996970(unsigned int);

typedef struct Node_8299BD58 {
    unsigned int flags;
    char pad4[0x14 - 4];
    unsigned int count;
    int *kids;
    char pad1c[0x3c - 0x1c];
    int loc;
} Node_8299BD58;

typedef struct Ctx_8299BD58 {
    char pad[0x18];
    Node_8299BD58 **nodes;
} Ctx_8299BD58;

int fn_8299BD58(Ctx_8299BD58 *ctx, Node_8299BD58 *node, unsigned int depth)
{
    unsigned int i;
    Node_8299BD58 *n = node;
    if (fn_82996970(n->flags & 0xfff00000) != 0 && n->count != 0) {
        if (depth >= 1) {
            fn_82975B00(ctx, n->loc, 0x1194, "dependent texture read chain cannot exceed 1 in ps_1_4");
            return 0;
        }
        depth = depth + 1;
    }
    for (i = 0; i < n->count; i++) {
        if (fn_8299BD58(ctx, ctx->nodes[n->kids[i]], depth) == 0) return 0;
    }
    return 1;
}
