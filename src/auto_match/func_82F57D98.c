typedef struct Node {
    struct Node *left;
} Node;

typedef struct {
    int pad;
    Node *head;
} Tree;

typedef struct {
    int vtbl;
    Tree tree;
} Owner;

typedef struct {
    Node *ptr;
} Iter;

extern void fn_824B4280(void *p);
extern void fn_8265CA20(void *p);
extern Iter *fn_82F57B10(Iter *ret, Tree *t, Iter first, Iter last);

Owner *fn_82F57D98(Owner *o, unsigned int flags)
{
    Iter tmp;
    Iter first;
    Iter last;

    first.ptr = o->tree.head->left;
    last.ptr = o->tree.head;
    fn_82F57B10(&tmp, &o->tree, first, last);
    fn_824B4280(o->tree.head);
    if (flags & 1) {
        fn_8265CA20(o);
    }
    return o;
}
