typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    char value[0x3c];
    char color;
    char isnil;
} Node;
extern void fn_8286DCA0(void *al, void *val);
extern void fn_8265CA20(void *p);

void fn_8286E0A0(char *tree, Node *root)
{
    Node *p;
    for (p = root; !p->isnil; root = p) {
        fn_8286E0A0(tree, p->right);
        p = p->left;
        fn_8286DCA0(tree + 0xd, root->value);
        fn_8265CA20(root);
    }
}
