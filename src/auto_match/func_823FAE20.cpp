struct Rep_823FAE20;
struct WeakRef_823FAE20 { int a, b; };

struct SharedRef_823FAE20;
extern "C" {
void fn_822315A0(Rep_823FAE20 *rep);
SharedRef_823FAE20 *fn_82365BD8(void *out, const WeakRef_823FAE20 *w);
extern void *lbl_821AD588[];
extern void *lbl_821B706C[];
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

template <class T> inline void swap(T &a, T &b)
{
    T t = a;
    a = b;
    b = t;
}

struct SharedRef_823FAE20 {
    void *ptr;
    Rep_823FAE20 *rep;
    SharedRef_823FAE20() : ptr(0), rep(0) {}
    SharedRef_823FAE20(SharedRef_823FAE20 &&o) : ptr(0), rep(0) { _Assign_rv(static_cast<SharedRef_823FAE20 &&>(o)); }
    void _Assign_rv(SharedRef_823FAE20 &&o)
    {
        if (this != &o)
            _Swap(o);
    }
    void _Swap(SharedRef_823FAE20 &o)
    {
        swap(rep, o.rep);
        swap(ptr, o.ptr);
    }
    ~SharedRef_823FAE20()
    {
        if (rep != 0)
            fn_822315A0(rep);
    }
};

struct ObjBase_823FAE20 {
    void **vtbl;
    int a;
    ObjBase_823FAE20() : a(0) { vtbl = lbl_821B706C; }
};

struct Obj_823FAE20 : ObjBase_823FAE20 {
    SharedRef_823FAE20 p;
    Obj_823FAE20(SharedRef_823FAE20 &&o) : p(static_cast<SharedRef_823FAE20 &&>(o)) {}
};

struct RefBlock_823FAE20 {
    void **vtbl;
    int uses;
    int weaks;
    Obj_823FAE20 obj;
};

extern "C" RefBlock_823FAE20 *fn_823FAE20(RefBlock_823FAE20 *b, const WeakRef_823FAE20 *w)
{
    b->uses = 1;
    b->vtbl = lbl_821AD588;
    b->weaks = 1;
    Obj_823FAE20 *o = &b->obj;
    if (o) {
        struct Raw { void *ptr; Rep_823FAE20 *rep; } raw;
        SharedRef_823FAE20 *t = fn_82365BD8(&raw, w);
        ::new ((void *)o) Obj_823FAE20(static_cast<SharedRef_823FAE20 &&>(*t));
        if (t->rep != 0)
            fn_822315A0(t->rep);
    }
    return b;
}
