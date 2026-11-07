typedef struct Sub18_823D5E98 {
    char d[0x18];
} Sub18_823D5E98;

typedef struct Pair30_823D5E98 {
    Sub18_823D5E98 a;
    Sub18_823D5E98 b;
} Pair30_823D5E98;

typedef struct Obj10_823D5E98 {
    char d[0x10];
} Obj10_823D5E98;

typedef struct Node_823D5E98 {
    struct Node_823D5E98 *left;
    struct Node_823D5E98 *parent;
    struct Node_823D5E98 *right;
    char key[0xc];
    Pair30_823D5E98 val;
    unsigned char color;
    unsigned char isnil;
    char pad[2];
} Node_823D5E98;

typedef struct Tree_823D5E98 {
    int alloc;
    Node_823D5E98 *head;
    unsigned int size;
    int pad;
} Tree_823D5E98;

typedef struct Owner_823D5E98 {
    Obj10_823D5E98 m[8];
    Tree_823D5E98 tree;
    Pair30_823D5E98 p[14];
} Owner_823D5E98;

extern void fn_82359C18(void *p);
extern void fn_823D5E08(void *p);
extern void fn_823D6298(Tree_823D5E98 *t, Node_823D5E98 *n);
extern void fn_8265CA20(void *p);

static __forceinline void destroyPair_823D5E98(Pair30_823D5E98 *p)
{
    fn_82359C18(&p->b);
    fn_82359C18(&p->a);
}

void fn_823D5E98(Owner_823D5E98 *o)
{
    Tree_823D5E98 *t;
    Node_823D5E98 *root;
    Node_823D5E98 *n;

    destroyPair_823D5E98(&o->p[13]);
    destroyPair_823D5E98(&o->p[12]);
    destroyPair_823D5E98(&o->p[11]);
    destroyPair_823D5E98(&o->p[10]);
    destroyPair_823D5E98(&o->p[9]);
    destroyPair_823D5E98(&o->p[8]);
    destroyPair_823D5E98(&o->p[7]);
    destroyPair_823D5E98(&o->p[6]);
    destroyPair_823D5E98(&o->p[5]);
    destroyPair_823D5E98(&o->p[4]);
    destroyPair_823D5E98(&o->p[3]);
    destroyPair_823D5E98(&o->p[2]);
    destroyPair_823D5E98(&o->p[1]);
    destroyPair_823D5E98(&o->p[0]);

    t = &o->tree;
    root = t->head->parent;
    for (n = root; !n->isnil; root = n) {
        fn_823D6298(t, n->right);
        n = n->left;
        destroyPair_823D5E98(&root->val);
        fn_8265CA20(root);
    }
    t->head->parent = t->head;
    t->head->left = t->head;
    t->head->right = t->head;
    t->size = 0;
    fn_8265CA20(t->head);

    fn_823D5E08(&o->m[7]);
    fn_823D5E08(&o->m[6]);
    fn_823D5E08(&o->m[5]);
    fn_823D5E08(&o->m[4]);
    fn_823D5E08(&o->m[3]);
    fn_823D5E08(&o->m[2]);
    fn_823D5E08(&o->m[1]);
    fn_823D5E08(&o->m[0]);
}
