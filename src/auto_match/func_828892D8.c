typedef struct Vec {
    void *first;
    void *last;
    void *end;
} Vec;

typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    char key[0x28];
    Vec v;
    char pad[0x20];
    unsigned char col;
    unsigned char isnil;
} Node;

extern void fn_8265CA20(void *p);

void fn_828892D8(void *self, Node *root)
{
    Node *p;
    for (p = root; !p->isnil; root = p) {
        fn_828892D8(self, p->right);
        p = p->left;
        if (root->v.first != 0) {
            fn_8265CA20(root->v.first);
        }
        root->v.first = 0;
        root->v.last = 0;
        root->v.end = 0;
        fn_8265CA20(root);
    }
}
