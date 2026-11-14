typedef struct Node_83003A80 {
    char pad0[0x10];
    struct Node_83003A80 *parent;   /* 0x10 */
    char pad14[0x3d - 0x14];
    unsigned char flags;            /* 0x3d */
} Node_83003A80;

extern void *fn_83002E80(Node_83003A80 *node);
void *fn_83003A80(Node_83003A80 *node)
{
    Node_83003A80 *cur;

    if (node != 0) {
        do {
            cur = node;
            node = node->parent;
            if ((cur->flags & 1) != 0)
                break;
        } while (node != 0);
        return fn_83002E80(cur);
    }
    return 0;
}
