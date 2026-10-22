#include "stdext/exception.h"

extern "C" void *fn_8265C9E0(unsigned int);

inline void *operator new(unsigned int, void *where) throw() { return where; }

template<class T> inline T *_Allocate(unsigned int count, T *)
{
    void *p = 0;
    if (count <= 0)
        count = 0;
    else if ((unsigned int)(-1) / sizeof(T) < count
             || (p = fn_8265C9E0(count * sizeof(T))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (T *)p;
}

template<class T> inline void _Swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

struct String;
extern "C" void fn_8223B688(String *self, const String *src);

struct String {
    int data[7];
    String(const String &right) { fn_8223B688(this, &right); }
};

struct PtrBase {
    void *ptr;
    void *rep;
    PtrBase(PtrBase &right) : ptr(0), rep(0) { _Assign_rv(right); }
    void _Assign_rv(PtrBase &right)
    {
        if (this != &right)
            _Swap2(right);
    }
    void _Swap2(PtrBase &right)
    {
        _Swap(rep, right.rep);
        _Swap(ptr, right.ptr);
    }
};

struct Mapped {
    PtrBase sp;
    bool flag;
    Mapped(Mapped &right) : sp(right.sp), flag(right.flag) {}
};

struct Value {
    String first;
    Mapped second;
    Value(Value &right) : first(right.first), second(right.second) {}
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    Value value;
    char color;
    char isnil;
};

struct Tree {
    int alloc;
    Node *head;
};

struct Iterator {
    Node *ptr;
};

extern "C" Iterator *fn_8251BD48(Iterator *ret, Tree *self, unsigned int where, Node *node);

extern "C" Iterator *fn_8251BC68(Iterator *ret, Tree *self, unsigned int where, Value &val)
{
    Node *p = _Allocate(1, (Node *)0);
    p->left = self->head;
    p->parent = self->head;
    p->right = self->head;
    p->color = 0;
    p->isnil = 0;
    {
        void *vp = &p->value;
        if (vp != 0) {
            Value *v = (Value *)vp;
            Mapped *r = &val.second;
            fn_8223B688(&v->first, &val.first);
            Mapped *m = &v->second;
            m->sp.ptr = 0;
            m->sp.rep = 0;
            m->sp._Assign_rv(r->sp);
            m->flag = r->flag;
        }
    }
    fn_8251BD48(ret, self, where, p);
    return ret;
}
