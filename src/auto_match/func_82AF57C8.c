struct Node_82AF57C8;

typedef struct Link_82AF57C8 {
    void *pad0;
    struct Link_82AF57C8 *next;
    void *pad8;
    struct Node_82AF57C8 *node;
} Link_82AF57C8;

typedef struct Node_82AF57C8 {
    Link_82AF57C8 *links;
    void *pad4;
    unsigned int flags;
} Node_82AF57C8;

typedef struct Result_82AF57C8 {
    unsigned int flags;
    Node_82AF57C8 *node;
} Result_82AF57C8;

extern unsigned char fn_82B8BCB0(void *ctx, Node_82AF57C8 *from, void *to, int flag);
extern unsigned int fn_82AF4E80(void *ctx, Node_82AF57C8 *a, void *arg, int zero, Node_82AF57C8 *b);

static __forceinline int NotNull(Link_82AF57C8 *l)
{
    if (l != 0)
        return 1;
    return 0;
}

static __forceinline unsigned char IsLinked(Node_82AF57C8 *a, Node_82AF57C8 *b)
{
    Link_82AF57C8 *l;

    for (l = a->links; NotNull(l); l = l->next) {
        if (l->node == b)
            return 1;
    }
    return 0;
}

int fn_82AF57C8(void *ctx, Node_82AF57C8 *a, void *arg, Node_82AF57C8 *b, void *target, Result_82AF57C8 *out)
{
    unsigned int flags;

    if (b == a) {
        flags = out->flags | 0x800;
        out->node = a;
        out->flags = flags;
        return 1;
    }
    if ((b->flags & 0x3f80) == 0x3700)
        return 0;
    if (fn_82B8BCB0(ctx, a, target, 1)) {
        /* reachable: look for an existing link */
    } else {
        return 0;
    }
    if (IsLinked(a, b)) {
        flags = out->flags | 0x800;
        out->node = a;
        out->flags = flags;
        return 1;
    }
    if (!fn_82B8BCB0(ctx, b, a, 1))
        return 0;
    if (fn_82AF4E80(ctx, a, arg, 0, b) > 4)
        return 0;
    flags = out->flags & ~0x800;
    out->node = a;
    out->flags = flags;
    return 1;
}
