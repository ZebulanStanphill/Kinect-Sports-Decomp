typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    int color;
    int val[3];
    unsigned char col;
    unsigned char isnil;
} Node;

extern void fn_8265CA20(Node *p);
extern void fn_828B55B0(void *v);

void fn_828E7610(void *self, Node *root)
{
    Node *p;
    for (p = root; !p->isnil; root = p) {
        fn_828E7610(self, p->right);
        p = p->left;
        fn_828B55B0(&root->val);
        fn_8265CA20(root);
    }
}
