typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    int color;
    int key[4];
    char val[0x30];
    unsigned char col;
    unsigned char isnil;
} Node;

extern void fn_8265CA20(Node *p);
extern void fn_822B4040(void *v);

void fn_822B46C0(void *self, Node *root)
{
    Node *p;
    for (p = root; !p->isnil; root = p) {
        fn_822B46C0(self, p->right);
        p = p->left;
        fn_822B4040(&root->val);
        fn_8265CA20(root);
    }
}
