typedef struct Node_8268E5C8 {
    char pad[0x14];
    struct Node_8268E5C8 *parent;
    struct Node_8268E5C8 *kid[2];
} Node_8268E5C8;

extern void fn_8268E4E8(Node_8268E5C8 **root, Node_8268E5C8 *node, Node_8268E5C8 *repl);

void fn_8268E5C8(Node_8268E5C8 **root, Node_8268E5C8 *node)
{
    Node_8268E5C8 **link = &node->kid[1];
    Node_8268E5C8 *leaf = *link;
    if (leaf == 0) {
        link = &node->kid[0];
        leaf = *link;
    }
    if (leaf != 0) {
        for (;;) {
            Node_8268E5C8 **next = &leaf->kid[1];
            if (*next == 0) {
                next = &leaf->kid[0];
                if (*next == 0)
                    break;
            }
            link = next;
            leaf = *link;
        }
        *link = 0;
    }
    fn_8268E4E8(root, node, leaf);
}
