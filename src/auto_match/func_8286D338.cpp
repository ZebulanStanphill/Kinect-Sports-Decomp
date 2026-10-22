#include "stdext/exception.h"

extern "C" void *fn_8265C9E0(unsigned int);

inline void *operator new(unsigned int, void *where) throw() { return where; }

struct Node {
    Node *next;
    Node *prev;
    int value;
};

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

template<class T> inline void _Construct(T *p, const T &val)
{
    void *vp = p;
    ::new (vp) T(val);
}

struct List;

extern "C" Node *fn_8286D338(List *self, Node *next, Node *prev, const int &val)
{
    Node *p = _Allocate(1, (Node *)0);
    p->next = next;
    p->prev = prev;
    _Construct(&p->value, val);
    return p;
}
