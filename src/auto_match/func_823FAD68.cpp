struct Rep_823FAD68;
struct WeakRef_823FAD68 { int a, b; };

struct SharedRef_823FAD68;
extern "C" {
void fn_822315A0(Rep_823FAD68 *rep);
SharedRef_823FAD68 *fn_82365BD8(void *out, const WeakRef_823FAD68 *w);
extern void *lbl_821AD588[];
extern void *lbl_821B7054[];
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

template <class T> inline void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

struct SharedRef_823FAD68 {
    void *ptr;
    Rep_823FAD68 *rep;
    SharedRef_823FAD68() : ptr(0), rep(0) {}
    SharedRef_823FAD68(SharedRef_823FAD68 &&o) : ptr(0), rep(0) { _Assign_rv(static_cast<SharedRef_823FAD68 &&>(o)); }
    void _Assign_rv(SharedRef_823FAD68 &&o)
    {
        if (this != &o)
            _Swap(o);
    }
    void _Swap(SharedRef_823FAD68 &o)
    {
        swap(rep, o.rep);
        swap(ptr, o.ptr);
    }
    ~SharedRef_823FAD68()
    {
        if (rep != 0)
            fn_822315A0(rep);
    }
};

struct ObjBase_823FAD68 {
    void **vtbl;
    int a;
    ObjBase_823FAD68() : a(0) { vtbl = lbl_821B7054; }
};

struct Obj_823FAD68 : ObjBase_823FAD68 {
    SharedRef_823FAD68 p;
    Obj_823FAD68(SharedRef_823FAD68 &&o) : p(static_cast<SharedRef_823FAD68 &&>(o)) {}
};

struct RefBlock_823FAD68 {
    void **vtbl;
    int uses;
    int weaks;
    Obj_823FAD68 obj;
};

extern "C" RefBlock_823FAD68 *fn_823FAD68(RefBlock_823FAD68 *b, const WeakRef_823FAD68 *w)
{
    b->uses = 1;
    b->vtbl = lbl_821AD588;
    b->weaks = 1;
    Obj_823FAD68 *o = &b->obj;
    if (o) {
        struct Raw { void *ptr; Rep_823FAD68 *rep; } raw;
        SharedRef_823FAD68 *t = fn_82365BD8(&raw, w);
        ::new ((void *)o) Obj_823FAD68(static_cast<SharedRef_823FAD68 &&>(*t));
        if (t->rep != 0)
            fn_822315A0(t->rep);
    }
    return b;
}
