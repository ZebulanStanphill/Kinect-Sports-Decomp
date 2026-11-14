typedef struct Node_82B8D488 {
    char pad0[0x24];
    unsigned int parentLink;    /* 0x24: tagged parent pointer */
    char pad28[8];
} Node_82B8D488;

extern unsigned char fn_82AEB338(Node_82B8D488 *node);
extern unsigned char fn_82AF4968(Node_82B8D488 *node, Node_82B8D488 *target);
extern void fn_82B8D3D0(void *ctx, Node_82B8D488 *node, Node_82B8D488 *other, int flag, unsigned char direct);

static __forceinline unsigned char IsBelow(Node_82B8D488 *node, Node_82B8D488 *target)
{
    Node_82B8D488 *n = node;
    do {
        unsigned int link = ((Node_82B8D488 *)((unsigned int)n & ~1u))->parentLink;
        if (link & 1)
            return 0;
        n = (Node_82B8D488 *)((link & ~1u) - 0x28);
        if (n == 0)
            return 0;
    } while (n != target);
    return 1;
}

void fn_82B8D488(void *ctx, Node_82B8D488 *node, Node_82B8D488 *other, unsigned char direct)
{
    unsigned char found;

    if (fn_82AEB338(node)) {
        if (direct)
            found = fn_82AF4968(other, node);
        else
            found = IsBelow(other, node);
        if (!found)
            fn_82B8D3D0(ctx, node, other, 1, direct);
    }
}
