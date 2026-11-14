typedef struct Node_82ADD0D8 {
    char pad[0x30];
    unsigned int flags;
    struct Node_82ADD0D8 *parent;
} Node_82ADD0D8;

typedef struct Page_82ADD0D8 {
    struct { char pad[0x94]; void *ctx; } *owner;
} Page_82ADD0D8;

extern Node_82ADD0D8 *fn_82AA66A8(void *ctx, int code);

Node_82ADD0D8 *fn_82ADD0D8(Node_82ADD0D8 *start)
{
    Node_82ADD0D8 *n = start;
    while (n != 0 && (n->flags & 0x80000) == 0) {
        n = n->parent;
    }
    if (n == 0) return fn_82AA66A8(((Page_82ADD0D8 *)((unsigned int)start & ~0xfffu))->owner->ctx, 0x12c0);
    return n;
}
