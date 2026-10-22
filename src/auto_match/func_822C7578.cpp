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
String *fn_82240378(String *self, String *src);
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

struct Pair {
    String first;
    String second;
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
Iterator *fn_822C7978(Iterator *ret, Map *self, Node *where, Node *node);
}

extern "C" String *fn_822C7578(Map *self, const String *key)
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
        String mapped;
        Pair p;
        Node *n;
        Pair *pv;
        Iterator r;
        fn_82230300(&mapped, 0, 0);
        fn_8223B688(&p.first, key);
        fn_82240378(&p.second, &mapped);
        n = std::_Allocate(1, (Node *)0);
        n->left = self->head;
        n->parent = self->head;
        n->right = self->head;
        n->color = 0;
        n->isnil = 0;
        pv = &n->val;
        if (pv != 0) {
            fn_8223B688(&pv->first, &p.first);
            fn_82240378(&pv->second, &p.second);
        }
        fn_822C7978(&r, self, it, n);
        it = r.ptr;
        fn_82230300(&p.second, 1, 0);
        fn_82230300(&p.first, 1, 0);
        fn_82230300(&mapped, 1, 0);
    }
    return &it->val.second;
}
