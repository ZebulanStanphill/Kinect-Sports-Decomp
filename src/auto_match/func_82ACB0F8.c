typedef struct Node_82ACB0F8 {
    char pad0[0x10];
    unsigned char flags;
    char pad11[3];
    unsigned int depth;
    char pad18[0x10];
    unsigned int link;
} Node_82ACB0F8;

extern unsigned char fn_82B85910(Node_82ACB0F8 *node, Node_82ACB0F8 *target);

unsigned char fn_82ACB0F8(Node_82ACB0F8 *a, Node_82ACB0F8 *b)
{
    if ((a->flags & 1) != 0 && (b->flags & 1) != 0) {
        unsigned int depth = a->depth & 0x1fff;
        Node_82ACB0F8 *n = a;
        if (depth > (b->depth & 0x1fff))
            return 1;
        do {
            n = (Node_82ACB0F8 *)((Node_82ACB0F8 *)((unsigned int)n & ~1u))->link;
            if (((unsigned int)n & 1) != 0 || n == 0 || (n->depth & 0x1fff) < depth)
                return 0;
        } while (n != b);
        return 1;
    }
    return fn_82B85910(b, a);
}
