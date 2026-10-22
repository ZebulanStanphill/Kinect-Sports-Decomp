#include "stdext/xmemory.h"

struct GNode {
    GNode *left;
    GNode *parent;
    GNode *right;
    int key;
    int a;
    int b;
    int c;
    unsigned char d;
    unsigned char e;
    int f;
    char color;
    char isnil;
};

struct GMap {
    int comp;
    GNode *head;
    unsigned int size;
};

struct GIt {
    GNode *p;
};

struct LPair {
    int key;
    int val;
};

struct LNode {
    LNode *left;
    LNode *parent;
    LNode *right;
    LPair val;
    char color;
    char isnil;
};

struct LTree {
    int comp;
    LNode *head;
    unsigned int size;
    int pad;
};

struct LIt {
    LNode *p;
};

struct LPairib {
    LIt it;
    unsigned char ok;
};

struct Elem {
    int v[7];
};

struct Iface {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
};

extern "C" {
void fn_82511350(LTree *t, void *comp, void *al);
void fn_828BF798(Elem *e);
Iface *fn_8288A398(void);
void fn_8251F2B0(GIt *it);
void fn_825503E0(GIt *it);
void fn_82886738(int n, void *f1, void *f2);
void fn_82887C70(int a, int b, int c, unsigned char d, unsigned char e);
void fn_82887FF8(int a, int f);
int fn_828C8898(void *p, int a);
void fn_8243CE60(LPairib *ret, LTree *t, LNode *n, int leftish);
void fn_828C6480(void *obj, LTree *t, int x);
void fn_8251ED38(GMap *m, GNode *root);
void fn_82825F40(LIt *ret, LTree *t, LNode *first, LNode *last);
void fn_8265CA20(void *p);
void fn_828BE968(void);
void fn_828BEFD0(void);
extern int lbl_83214050;
extern int lbl_83214054;
extern Elem lbl_83214058[];
extern char lbl_8321434C[];
extern GMap lbl_83214368;
extern unsigned char lbl_83214378;
}

extern "C" void fn_828BFDF8(void *param_1)
{
    char al;
    LTree tree;
    int i;
    lbl_83214378 = 1;
    fn_82511350(&tree, &al, &al);
    lbl_83214050 = 1;
    Elem *e = lbl_83214058;
    i = 27;
    do {
        fn_828BF798(e);
        e++;
    } while (--i != 0);
    lbl_83214050 = 2;
    fn_8288A398()->f5();
    lbl_83214050 = 0;
    GMap *m = &lbl_83214368;
    {
    GIt it;
    it.p = m->head;
    fn_8251F2B0(&it);
    lbl_83214054 = it.p->key + 1;
    fn_82886738(lbl_83214054, (void *)fn_828BE968, (void *)fn_828BEFD0);
    GNode *n = m->head->left;
    it.p = n;
    while (n != m->head) {
        fn_82887C70(n->a, n->b, n->c, n->d, n->e);
        fn_82887FF8(n->a, n->f);
        int v = fn_828C8898(param_1, n->a);
        int k = n->a;
        LNode *nn = std::_Allocate(1, (LNode *)0);
        nn->left = tree.head;
        nn->parent = tree.head;
        nn->right = tree.head;
        nn->color = 0;
        nn->isnil = 0;
        LPair *pv = &nn->val;
        if (pv != 0) {
            pv->key = k;
            pv->val = v;
        }
        LPairib ret;
        fn_8243CE60(&ret, &tree, nn, 0);
        fn_825503E0(&it);
        n = it.p;
    }
    }
    fn_828C6480(lbl_8321434C, &tree, 1);
    fn_8251ED38(m, m->head->parent);
    m->head->parent = m->head;
    m->head->left = m->head;
    m->head->right = m->head;
    m->size = 0;
    {
    LIt r;
    fn_82825F40(&r, &tree, tree.head->left, tree.head);
    }
    fn_8265CA20(tree.head);
}
