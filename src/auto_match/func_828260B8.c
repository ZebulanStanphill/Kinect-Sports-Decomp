typedef struct Node {
    struct Node *left;
} Node;

typedef struct {
    int pad;
    Node *head;
} Tree;

typedef struct {
    Node *ptr;
} Iter;

extern void fn_8265CA20(void *p);
extern Iter *fn_82825F40(Iter *ret, Tree *t, Iter first, Iter last);

Tree *fn_828260B8(Tree *t, unsigned int flags)
{
    Iter tmp;
    Iter first;
    Iter last;

    first.ptr = t->head->left;
    last.ptr = t->head;
    fn_82825F40(&tmp, t, first, last);
    fn_8265CA20(t->head);
    if (flags & 1) {
        fn_8265CA20(t);
    }
    return t;
}
