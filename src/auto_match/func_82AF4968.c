typedef struct Node_82AF4968 {
    char pad0[8];
    unsigned int flags;
    char padc[8];
    unsigned int order;
} Node_82AF4968;

extern unsigned char fn_82B85910(Node_82AF4968 *a, Node_82AF4968 *b);

unsigned char fn_82AF4968(Node_82AF4968 *a, Node_82AF4968 *b)
{
    if ((a->flags & 0x40000000) != 0 && (b->flags & 0x40000000) != 0) {
        return (b->order & ~7u) < (a->order & ~7u);
    }
    return fn_82B85910(a, b);
}
