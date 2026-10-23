typedef struct TNode {
    struct TNode *left;
    struct TNode *parent;
    struct TNode *right;
    char pad[0x14];
    char value[0x31];
    char isnil;
} TNode;

typedef struct Tree {
    int f0;
    TNode *head;
    int size;
} Tree;

typedef struct Vec {
    void **first;
    void **last;
    void **end;
} Vec;

typedef struct Obj {
    Tree tree;
    int fc;
    Vec vec;
} Obj;

extern void fn_822B4040(void *v);
extern void fn_822B46C0(Obj *o, TNode *n);
extern void fn_8265CA20(void *p);

static void vec_tidy(Vec *v)
{
    if (v->first != 0) {
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

Obj *fn_822B2D28(Obj *o)
{
    void **it;
    TNode *root;
    TNode *n;

    for (it = o->vec.first; it != o->vec.last; it++) {
        if (*it != 0) {
            fn_8265CA20(*it);
        }
    }
    vec_tidy(&o->vec);
    root = o->tree.head->parent;
    for (n = root; !n->isnil; root = n) {
        fn_822B46C0(o, n->right);
        n = n->left;
        fn_822B4040(root->value);
        fn_8265CA20(root);
    }
    o->tree.head->parent = o->tree.head;
    o->tree.head->left = o->tree.head;
    o->tree.head->right = o->tree.head;
    o->tree.size = 0;
    fn_8265CA20(o->tree.head);
    fn_8265CA20(o);
    return o;
}
