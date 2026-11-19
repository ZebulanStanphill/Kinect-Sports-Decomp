typedef struct Node_82642A60 {
    char pad0[0x8];
    unsigned char kind; /* 0x08: low 3 bits */
    char pad9[0xb];
    unsigned int flags;    /* 0x14: bit 18, bit 17, count in bits 5-9 */
    int countA;            /* 0x18 */
    int countB;            /* 0x1c */
    int f20;               /* 0x20 */
    unsigned int slots[1]; /* 0x24 */
} Node_82642A60;

/* Merges the entries of source (sorted by their low byte) into node's slots after slot countA + countB. */
void fn_82642A60(Node_82642A60 *node, Node_82642A60 *source)
{
    unsigned int nodeCount;
    unsigned int sourceCount;
    unsigned int i;
    unsigned int j;
    unsigned int *scan;
    unsigned int *out;
    unsigned int *in;
    unsigned int entry;
    unsigned int key;
    int kind;

    kind = node->kind & 7;
    if (kind != 7 && (node->flags & 0x40000) == 0 && (source == 0 || (source->flags & 0x20000) == 0)) {
        nodeCount = (node->flags >> 5) & 0x1f;
        i = 0;
        j = 0;
        sourceCount = (source->flags >> 5) & 0x1f;
        in = (unsigned int *)&source->f20;
        scan = &node->slots[node->countB + node->countA];
        out = scan;
        for (; j < sourceCount; j++) {
            entry = *in;
            key = entry & 0xff;
            while (i < nodeCount && (*scan & 0xff) < key) {
                i++;
                scan++;
            }
            scan++;
            *out = entry & 0xffff;
            out++;
            in++;
            i++;
        }
        for (; j < nodeCount; j++) {
            *out++ = 0;
        }
        node->f20 = 0;
        node->flags = (source->flags & 0x7ffff) | (node->flags & 0xfff80000);
    }
}
