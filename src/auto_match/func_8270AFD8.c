typedef struct Node_8270AFD8 {
    struct Node_8270AFD8 *parent;
    struct Node_8270AFD8 *kid[2];
} Node_8270AFD8;

extern void fn_8270AF50(Node_8270AFD8 **root, Node_8270AFD8 *node, Node_8270AFD8 *repl);

void fn_8270AFD8(Node_8270AFD8 **root, Node_8270AFD8 *node)
{
    Node_8270AFD8 **link = &node->kid[1];
    Node_8270AFD8 *leaf = *link;
    if (leaf == 0) {
        link = &node->kid[0];
        leaf = *link;
    }
    if (leaf != 0) {
        for (;;) {
            Node_8270AFD8 **next = &leaf->kid[1];
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
    fn_8270AF50(root, node, leaf);
}
