typedef struct Target_82AF5D98 {
    int unk0;
    int unk4;
    unsigned int pad0 : 18;
    unsigned int kind : 7;
    unsigned int pad1 : 7;
} Target_82AF5D98;

typedef struct Link_82AF5D98 {
    unsigned int pad0 : 4;
    unsigned int count : 3;
    unsigned int pad1 : 12;
    unsigned int select : 8;
    unsigned int pad2 : 5;
    int unk4;
    struct Link_82AF5D98 *next;
    int unkC;
    Target_82AF5D98 *target;
} Link_82AF5D98;

typedef struct Node_82AF5D98 {
    int unk0;
    Link_82AF5D98 *links;
    unsigned int pad0 : 15;
    unsigned int mode : 3;
    unsigned int pad1 : 14;
} Node_82AF5D98;

extern unsigned char fn_82B8BCB0(void *ctx, Target_82AF5D98 *a, Target_82AF5D98 *b, int flag);

static int NotNull_82AF5D98(Link_82AF5D98 *p)
{
    if (p) {
        return 1;
    }
    return 0;
}

static Target_82AF5D98 *Find_82AF5D98(Link_82AF5D98 *l)
{
    Target_82AF5D98 *t;

    for (; NotNull_82AF5D98(l); l = l->next) {
        t = l->target;
        if (t != 0 && t->kind == 0x6E && l->count != 0) {
            return t;
        }
    }
    return 0;
}

static unsigned int Mask_82AF5D98(Link_82AF5D98 *l)
{
    unsigned int mask = 0;
    unsigned int i;

    for (i = 0; i < l->count; i++) {
        mask |= 1 << ((l->select >> (i * 2)) & 3);
    }
    return mask;
}

int fn_82AF5D98(void *ctx, Node_82AF5D98 *node, unsigned int bit)
{
    Link_82AF5D98 *l;
    Target_82AF5D98 *found;
    Target_82AF5D98 *t;
    unsigned int count;
    unsigned int mask;
    unsigned int i;
    unsigned int shift;

    if (node->mode != 1) {
        found = Find_82AF5D98(node->links);
        if (found != 0) {
            for (l = node->links; NotNull_82AF5D98(l); l = l->next) {
                t = l->target;
                if (t != 0) {
                    count = l->count;
                    if (count != 0 && t != found && count - 1 != 0) {
                        mask = Mask_82AF5D98(l);
                        if ((1 << bit) & mask) {
                            if (fn_82B8BCB0(ctx, found, t, 1) == 0) {
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 1;
}
