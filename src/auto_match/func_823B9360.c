typedef struct Node Node;
typedef struct { int key; int a10; void *ptr; } Val;
struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Val val;
    unsigned char color;
    unsigned char isnil;
};

extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *p);

void fn_823B9360(void *tree, Node *root)
{
    Node *p;
    for (p = root; !p->isnil; root = p) {
        Val *v;
        fn_823B9360(tree, p->right);
        p = p->left;
        v = &root->val;
        if (v->ptr != 0)
            fn_822315A0(v->ptr);
        fn_8265CA20(root);
    }
}
