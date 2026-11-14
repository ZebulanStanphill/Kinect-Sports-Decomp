typedef struct Node_8268E490 {
    char pad[8];
    struct Node_8268E490 *parent;
    struct Node_8268E490 *kid[2];
} Node_8268E490;

extern void fn_8268E408(Node_8268E490 **root, Node_8268E490 *node, Node_8268E490 *repl);

void fn_8268E490(Node_8268E490 **root, Node_8268E490 *node)
{
    Node_8268E490 **slot = &node->kid[1];
    Node_8268E490 *leaf = *slot;
    if (leaf == 0) {
        slot = &node->kid[0];
        leaf = *slot;
    }
    if (leaf != 0) {
        for (;;) {
            Node_8268E490 **next = &leaf->kid[1];
            if (*next == 0) {
                next = &leaf->kid[0];
                if (*next == 0)
                    break;
            }
            leaf = *next;
            slot = next;
        }
        *slot = 0;
    }
    fn_8268E408(root, node, leaf);
}
