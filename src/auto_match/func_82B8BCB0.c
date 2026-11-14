typedef struct Node_82B8BCB0 {
    char pad0[0x1c];
    int owner;                  /* 0x1c */
    char pad20[4];
    unsigned int parentLink;    /* 0x24: tagged parent pointer */
    char pad28[8];
} Node_82B8BCB0;

extern unsigned char fn_82AEB338(Node_82B8BCB0 *node);
extern unsigned char fn_82AF4968(Node_82B8BCB0 *node, Node_82B8BCB0 *target);
extern unsigned char fn_82B8B580(void *ctx, Node_82B8BCB0 *node, Node_82B8BCB0 *other, int flag, unsigned char direct);

static __forceinline unsigned char IsBelow(Node_82B8BCB0 *node, Node_82B8BCB0 *target)
{
    Node_82B8BCB0 *n = node;
    do {
        unsigned int link = ((Node_82B8BCB0 *)((unsigned int)n & ~1u))->parentLink;
        if (link & 1)
            return 0;
        n = (Node_82B8BCB0 *)((link & ~1u) - 0x28);
        if (n == 0)
            return 0;
    } while (n != target);
    return 1;
}

/* Sibling of Matching fn_82B8D488. */
unsigned char fn_82B8BCB0(void *ctx, Node_82B8BCB0 *node, Node_82B8BCB0 *other, unsigned char direct)
{
    unsigned char found;

    if (node->owner != other->owner)
        return 0;
    if (!fn_82AEB338(other))
        return 0;
    if (!fn_82AEB338(node))
        return 1;
    if (direct)
        found = fn_82AF4968(other, node);
    else
        found = IsBelow(other, node);
    if (found)
        return 1;
    return fn_82B8B580(ctx, node, other, 1, direct);
}
