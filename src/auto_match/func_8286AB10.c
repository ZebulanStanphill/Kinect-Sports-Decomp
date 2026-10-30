typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    char pad[0x10 - 0xc];
    char val[0x35 - 1 - 0x10];
    unsigned char col;
    unsigned char isnil;
} Node;

extern void fn_8265CA20(Node *p);
extern void fn_82864898(void *v);

void fn_8286AB10(void *self, Node *root)
{
    Node *p;
    for (p = root; !p->isnil; root = p) {
        fn_8286AB10(self, p->right);
        p = p->left;
        fn_82864898(&root->val);
        fn_8265CA20(root);
    }
}
