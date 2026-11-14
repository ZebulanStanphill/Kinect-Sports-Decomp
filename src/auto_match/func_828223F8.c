typedef struct Node_828223F8 {
    struct Node_828223F8 *parent;
    struct Node_828223F8 *child;
} Node_828223F8;

void fn_828223F8(Node_828223F8 *dst, Node_828223F8 *src)
{
    Node_828223F8 *child = dst->child;
    Node_828223F8 *parent = dst->parent;
    Node_828223F8 *root;
    Node_828223F8 *last;
    Node_828223F8 *moved;

    if (child != 0) {
        do {
            last = child;
            child = child->child;
        } while (child != 0);
    } else {
        last = parent != 0 ? dst : 0;
    }
    root = src;
    while (root->parent != 0)
        root = root->parent;
    moved = root->child;
    if (last == 0)
        last = dst;
    last->child = moved;
    if (moved != 0)
        moved->parent = last;
    root->child = 0;
}
