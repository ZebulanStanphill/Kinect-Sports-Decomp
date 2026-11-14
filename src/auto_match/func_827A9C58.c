typedef struct Node_827A9C58 {
    unsigned int flags;
    unsigned int key;
    char pad8[0x14];
    unsigned char shortKey;
} Node_827A9C58;

extern Node_827A9C58 *fn_827A8420(void *pool, unsigned int size, int big);
extern void fn_827A9B08(void *self, int parent, Node_827A9C58 **node);

static __forceinline unsigned char IsShort_827A9C58(Node_827A9C58 *n)
{
    return (unsigned char)(n->flags >> 31);
}
Node_827A9C58 *fn_827A9C58(char *self, int parent, unsigned int key, unsigned int extra, int big)
{
    unsigned int header;
    Node_827A9C58 *node;
    Node_827A9C58 *tmp;
    if (big)
        header = 0x26;
    else
        header = 0x1a;
    node = fn_827A8420(self + 0xc0, ((key * 8 + header + 7) & ~3) + extra * 4, big);
    tmp = node;
    if (node == 0)
        return 0;
    if (IsShort_827A9C58(node))
        node->shortKey = (unsigned char)key;
    else
        node->key = key;
    fn_827A9B08(self, parent, &tmp);
    return node;
}
