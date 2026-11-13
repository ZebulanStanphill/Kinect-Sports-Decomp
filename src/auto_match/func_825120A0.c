extern long _InterlockedDecrement(long *);

typedef struct Ref_825120A0 Ref_825120A0;
typedef struct RefVt_825120A0 {
    void (*f0)(Ref_825120A0 *);
    void (*destroy)(Ref_825120A0 *);
} RefVt_825120A0;
struct Ref_825120A0 {
    RefVt_825120A0 *vt;
    int f4;
    long refs;
};
typedef struct Node_825120A0 Node_825120A0;
typedef struct { int key; int a10; Ref_825120A0 *ptr; } Val_825120A0;
struct Node_825120A0 {
    Node_825120A0 *left;
    Node_825120A0 *parent;
    Node_825120A0 *right;
    Val_825120A0 val;
    unsigned char color;
    unsigned char isnil;
};
typedef struct Tree_825120A0 {
    int alval;
    Node_825120A0 *head;
    unsigned int size;
} Tree_825120A0;

extern void fn_8265CA20(void *p);
extern void fn_82512158(Tree_825120A0 *tree, Node_825120A0 *root);

static __forceinline void Release(Ref_825120A0 *r)
{
    if (_InterlockedDecrement(&r->refs) == 0)
        r->vt->destroy(r);
}

void fn_825120A0(Tree_825120A0 *self)
{
    Node_825120A0 *root = self->head->parent;
    Node_825120A0 *p;
    for (p = root; !p->isnil; root = p) {
        Val_825120A0 *v;
        fn_82512158(self, p->right);
        p = p->left;
        v = &root->val;
        if (v->ptr != 0)
            Release(v->ptr);
        fn_8265CA20(root);
    }
    self->head->parent = self->head;
    self->head->left = self->head;
    self->head->right = self->head;
    self->size = 0;
}
