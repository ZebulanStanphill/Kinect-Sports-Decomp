#include "stdext/xmemory.h"

/* std::string (Visual C++ 2010 <xstring>) */
struct String {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    char alval;
};

extern "C" {
void fn_82230300(String *self, int built, unsigned int newsize);
String *fn_8223B688(String *self, const String *src);
int fn_8260D428(const String *self, unsigned int off, unsigned int n0, const char *ptr, unsigned int count);
}

static inline const char *Myptr(const String *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

static inline unsigned int Size(const String *s)
{
    return s->size;
}

static inline int Compare(const String *l, const String *r)
{
    return fn_8260D428(l, 0, l->size, Myptr(r), Size(r));
}

struct Mapped { int v; };
struct Pair {
    String first;
    int second;
    Pair(const String *k, const Mapped &v) { fn_8223B688(&first, k); second = v.v; }
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Pair val;
    char color;
    char isnil;
};

struct Map {
    int comp;
    Node *head;
    unsigned int size;
};

struct Iterator {
    Node *ptr;
};

extern "C" {
Iterator *fn_825507B0(Iterator *ret, Map *self, Node *where, Node *node);
}

extern "C" int *fn_8258E568(Map *self, const String *key)
{
    Node *where = self->head;
    Node *pnode = self->head->parent;
    while (!pnode->isnil) {
        if (Compare(&pnode->val.first, key) < 0)
            pnode = pnode->right;
        else {
            where = pnode;
            pnode = pnode->left;
        }
    }
    Node *it = where;
    if (it == self->head || Compare(key, &it->val.first) < 0) {
        Pair p(key, Mapped());
        Node *n;
        Pair *pv;
        n = std::_Allocate(1, (Node *)0);
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        pv = &n->val;
        if (pv != 0) {
            fn_8223B688(&pv->first, &p.first);
            pv->second = p.second;
        }
        {
        Iterator r;
        fn_825507B0(&r, self, it, n);
        it = r.ptr;
        }
        fn_82230300(&p.first, 1, 0);
    }
    return &it->val.second;
}
