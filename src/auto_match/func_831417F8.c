typedef struct Node { struct Node *left; } Node;
typedef struct { int a; Node *head; } Tree;
typedef struct { Node *ptr; } Iter;
extern void fn_8265CA20(void *p);
extern Tree *lbl_83214494;
extern void *fn_82887890(void *out, Tree *t, Iter first, Iter last);
static Iter begin(Tree *t) { Iter i; i.ptr = t->head->left; return i; }
static Iter end(Tree *t) { Iter i; i.ptr = t->head; return i; }
static Iter mk(Node *n) { Iter i; i.ptr = n; return i; }

void fn_831417F8(void)
{
    Tree *t;
    Iter r;
    t = lbl_83214494;
    if (lbl_83214494 != 0) {
        Node **hp = &t->head;
        fn_82887890(&r, t, mk((*hp)->left), mk(*hp));
        fn_8265CA20(t->head);
        fn_8265CA20(t);
    }
}
