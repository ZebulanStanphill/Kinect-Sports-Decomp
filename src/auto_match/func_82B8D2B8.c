typedef struct Node_82B8D2B8 {
    char pad0[0x8];
    unsigned int flags;
    char pad0c[0x1c - 0xc];
    int scope;
    char pad20[0x24 - 0x20];
    unsigned int parentLink;
} Node_82B8D2B8;

extern unsigned char fn_82AF4968(Node_82B8D2B8 *node, Node_82B8D2B8 *ancestor);
extern int fn_82B8B580(void *self, Node_82B8D2B8 *a, Node_82B8D2B8 *b, unsigned char swapped, unsigned char slow);

static __forceinline unsigned char IsAncestor(Node_82B8D2B8 *node, Node_82B8D2B8 *ancestor)
{
    Node_82B8D2B8 *n = node;
    do {
        unsigned int link = ((Node_82B8D2B8 *)((unsigned int)n & ~1u))->parentLink;
        if (link & 1)
            return 0;
        n = (Node_82B8D2B8 *)((link & ~1u) - 0x28);
        if (n == 0)
            return 0;
    } while (n != ancestor);
    return 1;
}

static __forceinline unsigned char IsSkipped(unsigned int kind)
{
    if (kind == 0x7d || kind == 0x7c)
        return 1;
    return 0;
}

int fn_82B8D2B8(void *self, Node_82B8D2B8 *a, Node_82B8D2B8 *b, unsigned char swapped, unsigned char slow)
{
    unsigned int kind = (a->flags >> 7) & 0x7f;
    unsigned char ok;
    Node_82B8D2B8 *t;
    while (kind != 0x70) {
        if (IsSkipped(kind))
            return 0;
        if (kind == 0x71)
            return 0;
        if ((b->flags & 0x3f80) == 0x3800)
            return 0;
        if (a->scope != b->scope)
            return 0;
        if (slow)
            ok = fn_82AF4968(b, a);
        else
            ok = IsAncestor(b, a);
        if (!ok)
            return fn_82B8B580(self, a, b, swapped, slow);
        t = a;
        a = b;
        b = t;
        swapped = !swapped;
        kind = (a->flags >> 7) & 0x7f;
    }
    return 0;
}
