typedef struct { unsigned short a, b, c, d, e, f; } Key;
typedef struct Node {
    struct Node *left;
    struct Node *parent;
    struct Node *right;
    Key key;
    char color;
    char isnil;
} Node;
typedef struct { int pad; Node *head; } Tree;

extern char lbl_821C80A0;
extern char lbl_821C8110;
extern void *fn_825AA5F8(void);
extern Tree *fn_825ACD10(void *mgr, void *arg);
extern void fn_828B5580(Key *dst, void *src);
extern void fn_828B55B0(Key *k);
extern unsigned char fn_828B5650(Key *a, Key *b);
extern void fn_825ACF50(Node **out, Tree *t, Node *where);
extern void fn_825AD4B8(void *p);
extern void fn_8265CA20(void *p);
extern void fn_824D47E0(void *p);
extern void fn_825947B8(void *p);

typedef struct {
    void *vtbl;
    int pad4[3];
    char *p10;
    int key14[(0x68 - 0x14) / 4];
    void *vtbl2;
    int pad6c[(0xe4 - 0x6c) / 4];
    int fe4[(0xfc - 0xe4) / 4];
    void *pfc;
} Obj;

void fn_825AA7C8(Obj *o)
{
    Tree *t;
    Node *where;
    Node *node;
    Node *it;
    Node *res;
    Node *end;
    Node **pr;
    Key key;

    o->vtbl = &lbl_821C80A0;
    o->vtbl2 = &lbl_821C8110;
    it = *(Node **)(o->p10 + 0x28);
    t = fn_825ACD10(fn_825AA5F8(), &it);
    fn_828B5580(&key, o->key14);
    where = t->head;
    node = where->parent;
    while (!node->isnil) {
        if (fn_828B5650(&node->key, &key)) {
            node = node->right;
        } else {
            where = node;
            node = node->left;
        }
    }
    {
        Node *head = t->head;
        it = where;
        if (it == head || fn_828B5650(&key, &it->key)) {
            end = t->head;
            pr = &end;
        } else {
            pr = &it;
        }
    }
    res = *pr;
    fn_828B55B0(&key);
    fn_825ACF50(&end, t, res);
    fn_825AD4B8(&o->pfc);
    fn_8265CA20(o->pfc);
    o->pfc = 0;
    fn_824D47E0(o->fe4);
    fn_825947B8(o);
}
