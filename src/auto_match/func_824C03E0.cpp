#include "stdext/xmemory.h"

extern "C" {
void fn_822315A0(void *rep);
unsigned char fn_8223AAC0(void *rep);
}

inline void *operator new(unsigned int, void *p) { return p; }

template <class T> struct RemRef { typedef T type; };
template <class T> struct RemRef<T &> { typedef T type; };

template <class T> inline typename RemRef<T>::type &&mv(T &&a)
{
    return (typename RemRef<T>::type &&)a;
}

template <class T> inline void swp(T &l, T &r)
{
    T tmp = mv(l);
    l = mv(r);
    r = mv(tmp);
}

struct Rep;

struct Target {
    int f0;
    unsigned int id;
};

struct WP {
    Target *ptr;
    Rep *rep;
    WP(const WP &o);
    ~WP() { if (rep != 0) fn_822315A0(rep); }
};

struct SP {
    Target *ptr;
    Rep *rep;
    SP() : ptr(0), rep(0) {}
    SP(SP &&right) : ptr(0), rep(0)
    {
        assign_rv(mv(right));
    }
    void reset(Target *optr, Rep *orep)
    {
        if (orep && fn_8223AAC0(orep)) {
            rep = orep;
            ptr = optr;
        }
    }
    void assign_rv(SP &&right)
    {
        if (this != &right)
            swap_(right);
    }
    void swap_(SP &right)
    {
        swp(rep, right.rep);
        swp(ptr, right.ptr);
    }
    ~SP() { if (rep != 0) fn_822315A0(rep); }
};

struct Val {
    unsigned int key;
    SP sp;
    Val(Val &&o) : key(o.key), sp(mv(o.sp)) {}
    Val(unsigned int k) : key(k) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Val value;
    unsigned char color;
    unsigned char isnil;
};

struct Tree {
    int comp;
    Node *head;
    unsigned int size;
};

struct Pairib {
    Node *it;
    unsigned char ok;
    Pairib() {}
    Pairib(const Pairib &o) : it(o.it), ok(o.ok) {}
};

struct Owner {
    int f0;
    Tree tree;
};

extern "C" Pairib fn_824C0AC0(Tree *t, Node *n);

static inline Node *Buynode(Tree *t, Val &&v)
{
    Node *n = std::_Allocate(1, (Node *)0);
    n->left = t->head;
    n->parent = t->head;
    n->right = t->head;
    n->color = 0;
    n->isnil = 0;
    ::new ((void *)&n->value) Val(mv(v));
    return n;
}

extern "C" void fn_824C03E0(Owner *self, WP w)
{
    unsigned int key = w.ptr->id;
    Val tmp(key);
    tmp.sp.reset(w.ptr, w.rep);
    Node *n = Buynode(&self->tree, mv(tmp));
    fn_824C0AC0(&self->tree, n);
}
