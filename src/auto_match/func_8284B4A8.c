typedef struct Node_8284B4A8 {
    struct Node_8284B4A8 *left;
    struct Node_8284B4A8 *parent;
    struct Node_8284B4A8 *right;
    char value[0x20];
    char color;
    char isnil;
} Node_8284B4A8;

typedef struct Tree_8284B4A8 {
    char pad0[0xc];
    char alnode;
    char alval;
} Tree_8284B4A8;

extern void fn_8284A910(char *al, void *value);
extern void fn_8265CA20(void *p);

void fn_8284B4A8(Tree_8284B4A8 *t, Node_8284B4A8 *root)
{
    Node_8284B4A8 *p;
    for (p = root; !p->isnil; root = p) {
        fn_8284B4A8(t, p->right);
        p = p->left;
        fn_8284A910(&t->alval, root->value);
        fn_8265CA20(root);
    }
}
