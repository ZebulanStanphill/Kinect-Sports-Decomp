typedef struct Node_8313F0B0 {
    struct Node_8313F0B0 *p;
    struct Node_8313F0B0 *a;
    struct Node_8313F0B0 *b;
} Node_8313F0B0;

typedef struct Tree_8313F0B0 {
    Node_8313F0B0 *root;
    Node_8313F0B0 *first;
    Node_8313F0B0 *last;
    unsigned int n;
} Tree_8313F0B0;

typedef struct Object_8313F0B0 {
    void *vt;
    Tree_8313F0B0 tree;
} Object_8313F0B0;

extern char lbl_821C250C[];
extern Object_8313F0B0 lbl_83297954;

void fn_8313F0B0(void)
{
    Tree_8313F0B0 *h = &lbl_83297954.tree;
    Node_8313F0B0 *p = h->root;
    while (p != 0) {
        Node_8313F0B0 *a = p->a;
        if (a != 0) {
            p->a = a->b;
            a->b = p;
        } else {
            a = p->b;
            p->p = 0;
            p->a = 0;
            p->b = 0;
        }
        p = a;
    }
    h->root = 0;
    h->first = (Node_8313F0B0 *)h;
    h->last = (Node_8313F0B0 *)h;
    h->n = 0;
    lbl_83297954.vt = lbl_821C250C;
}
