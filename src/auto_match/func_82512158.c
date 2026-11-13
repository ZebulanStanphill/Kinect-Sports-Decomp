extern long _InterlockedDecrement(long *);

typedef struct Ref_82512158 Ref_82512158;
typedef struct RefVt_82512158 {
    void (*f0)(Ref_82512158 *);
    void (*destroy)(Ref_82512158 *);
} RefVt_82512158;
struct Ref_82512158 {
    RefVt_82512158 *vt;
    int f4;
    long refs;
};
typedef struct Node_82512158 Node_82512158;
typedef struct { int key; int a10; Ref_82512158 *ptr; } Val_82512158;
struct Node_82512158 {
    Node_82512158 *left;
    Node_82512158 *parent;
    Node_82512158 *right;
    Val_82512158 val;
    unsigned char color;
    unsigned char isnil;
};

extern void fn_8265CA20(void *p);

static __forceinline void Release(Ref_82512158 *r)
{
    if (_InterlockedDecrement(&r->refs) == 0)
        r->vt->destroy(r);
}

void fn_82512158(void *tree, Node_82512158 *root)
{
    Node_82512158 *p;
    for (p = root; !p->isnil; root = p) {
        Val_82512158 *v;
        fn_82512158(tree, p->right);
        p = p->left;
        v = &root->val;
        if (v->ptr != 0)
            Release(v->ptr);
        fn_8265CA20(root);
    }
}
