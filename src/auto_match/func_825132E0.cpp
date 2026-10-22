#include "stdext/xmemory.h"

extern "C" {
extern void *lbl_821C24F4[];
void fn_822315A0(void *rep);
unsigned char fn_8223AAC0(void *rep);
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_82230300(void *p, int a, int b);
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

struct WP {
    void *ptr;
    Rep *rep;
    ~WP() { if (rep != 0) fn_822315A0(rep); }
};

struct SP {
    void *ptr;
    Rep *rep;
    SP() : ptr(0), rep(0) {}
    void reset(void *optr, Rep *orep)
    {
        if (orep && fn_8223AAC0(orep)) {
            rep = orep;
            ptr = optr;
        }
    }
    SP(SP &&right) : ptr(0), rep(0)
    {
        assign_rv(mv(right));
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

struct Node {
    Node *next;
    Node *prev;
    SP val;
};

struct List {
    Node *head;
    unsigned int size;
};

struct Map {
    int a, b, c;
};

struct Mgr {
    int f0;
    Map map;
    char pad[0x24 - 0x10];
    List list;
};

extern "C" {
extern Mgr *lbl_83297810;
Mgr *fn_82511928(void);
unsigned int fn_82513F78(Map *m, const unsigned int &key);
}

struct VObj {
    void (**vtbl)(VObj *, int);
};

struct Obj {
    void **vtbl;
    int key;
    WP weak;
    int f10;
    int f14;
    VObj *f18;
    int f1c;
};

extern "C" void fn_825132E0(Obj *self)
{
    self->vtbl = lbl_821C24F4;
    WP *w = &self->weak;
    {
        SP sp;
        sp.reset(w->ptr, w->rep);
        Mgr *m = lbl_83297810 ? lbl_83297810 : fn_82511928();
        List *l = &m->list;
        Node *where = l->head;
        Node *prev = where->prev;
        Node *n = std::_Allocate(1, (Node *)0);
        n->next = where;
        n->prev = prev;
        ::new ((void *)&n->val) SP(mv(sp));
        if (0x1ffffffe - l->size < 1)
            fn_82F622A8("list<T> too long");
        l->size += 1;
        where->prev = n;
        n->prev->next = n;
        fn_82513F78(&m->map, self->key);
    }
    fn_82230300(&self->f1c, 1, 0);
    if (self->f18 != 0)
        self->f18->vtbl[0](self->f18, 1);
    w->~WP();
}
