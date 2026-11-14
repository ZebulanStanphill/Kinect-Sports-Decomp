typedef struct Node {
    struct Node *parent;
    struct Node *left;
    struct Node *right;
} Node;

extern Node *lbl_8320A778;

void fn_82823110(Node *n, Node **out)
{
    Node *nil = lbl_8320A778;
    for (;;) {
        *out = n->right;
        if (*out == nil)
            *out = 0;
        if (*out == 0)
            break;
        n = *out;
    }
    *out = n;
}
