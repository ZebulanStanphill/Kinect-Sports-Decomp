typedef struct Node_828222C8 {
    struct Node_828222C8 *parent;
    struct Node_828222C8 *child;
} Node_828222C8;

void fn_828222C8(Node_828222C8 *node, Node_828222C8 *item)
{
    Node_828222C8 *root = node;
    Node_828222C8 *next;

    while (root->parent != 0)
        root = root->parent;
    next = root->child;
    root->child = item;
    item->parent = root;
    item->child = next;
    if (next != 0)
        next->parent = item;
}
