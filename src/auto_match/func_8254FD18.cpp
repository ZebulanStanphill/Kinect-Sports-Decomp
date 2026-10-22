#include "stdext/xmemory.h"

struct String;
extern "C" {
String *fn_8223B688(String *self, const String *src);
void fn_82230300(String *self, int built, unsigned int newsize);
int fn_8260D428(const String *self, unsigned int pos, unsigned int n0, const char *ptr, unsigned int count);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct String {
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    char alval;
    String(const String &o) { fn_8223B688(this, &o); }
    ~String() { fn_82230300(this, 1, 0); }
    const char *myptr() const { return 16 <= res ? bx.ptr : bx.buf; }
    unsigned int length() const { return size; }
    int compare(const String &r) const { return fn_8260D428(this, 0, size, r.myptr(), r.length()); }
};

static inline bool less(const String &a, const String &b) { return a.compare(b) < 0; }

struct Value {
    String first;
    int second;
    Value(const String &k, const int &v) : first(k), second(v) {}
    Value(Value &&o) : first(o.first), second(o.second) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Value value;
    char color;
    char isnil;
};

struct It {
    Node *p;
    It() {}
    It(Node *n) : p(n) {}
};

struct Map;
extern "C" void fn_825507B0(It *ret, Map *self, It where, Node *n);

struct Map {
    int alloc;
    Node *head;
    unsigned int size;
    __forceinline Node *lbound(const String &key)
    {
        Node *p = head->parent;
        Node *where = head;
        while (!p->isnil) {
            if (less(p->value.first, key))
                p = p->right;
            else {
                where = p;
                p = p->left;
            }
        }
        return where;
    }
    __forceinline Node *Buynode(Value &&v)
    {
        Node *n = std::_Allocate(1, (Node *)0);
        n->left = head;
        n->parent = head;
        n->right = head;
        n->color = 0;
        n->isnil = 0;
        ::new ((void *)&n->value) Value(static_cast<Value &&>(v));
        return n;
    }
    __forceinline It insert(It w, Value &&v)
    {
        It r;
        fn_825507B0(&r, this, w, Buynode(static_cast<Value &&>(v)));
        return r;
    }
};

extern "C" int *fn_8254FD18(Map *self, const String *key)
{
    It where(self->lbound(*key));
    if (where.p == self->head || less(*key, where.p->value.first))
        where = self->insert(where, Value(*key, 0));
    return &where.p->value.second;
}
