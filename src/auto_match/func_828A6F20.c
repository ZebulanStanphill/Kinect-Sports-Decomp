typedef struct Node { struct Node *left; } Node;
typedef struct It { Node *n; } It;
typedef struct Tree { int alloc; Node *head; } Tree;
typedef struct Obj {
    char buf[16];
    unsigned int size;
    unsigned int res;
    int pad18;
    Tree tree;
} Obj;
extern void fn_8265CA20(void *p);
extern void fn_828A61C8(It *ret, Tree *tree, It first, It last);

static It begin(Tree *t) { It i; i.n = t->head->left; return i; }
static It end(Tree *t) { It i; i.n = t->head; return i; }

void fn_828A6F20(Obj *o)
{
    It ret;
    fn_828A61C8(&ret, &o->tree, begin(&o->tree), end(&o->tree));
    fn_8265CA20(o->tree.head);
    if (o->res >= 16) {
        fn_8265CA20(*(void **)o->buf);
    }
    o->size = 0;
    o->res = 15;
    o->buf[0] = 0;
}
