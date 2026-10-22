#include "stdext/xmemory.h"

struct Func {
    __int64 d[3];
};

struct Pod {
    __declspec(align(16)) int d[0x24];
};

struct Bound {
    Func f;
    Pod p;
};

struct Impl {
    void *vtbl;
    Bound b;
};

struct Holder {
    __int64 space[2];
    Impl *impl;
};

struct Obj {
    char pad0[0x30];
    Func f;
    char pad1[0x7c - 0x48];
    int list;
};

extern "C" {
Func *fn_822C5B18(Func *, const Func *);
void fn_82359C18(void *);
void fn_82390788(int *, Holder *);
extern void *lbl_821B48E8[];
}

extern "C" void fn_8238EFD8(Obj *self, const Pod *param)
{
    Holder holder;
    Func ta, tb;
    Func *a;
    Func *b;
    Bound C, D, F, G, H, I;
    {
        Pod pod = *param;
        a = fn_822C5B18(&ta, &self->f);
        b = fn_822C5B18(&tb, a);
        fn_822C5B18(&C.f, b);
        C.p = pod;
    }
    fn_82359C18(b);
    fn_822C5B18(&D.f, &C.f);
    D.p = C.p;
    {
        Bound E;
        fn_822C5B18(&E.f, &D.f);
        E.p = D.p;
        fn_822C5B18(&F.f, &E.f);
        F.p = E.p;
        fn_82359C18(&E);
    }
    fn_82359C18(&D);
    fn_822C5B18(&G.f, &F.f);
    G.p = F.p;
    fn_82359C18(&F);
    fn_82359C18(&C);
    fn_82359C18(a);
    fn_822C5B18(&H.f, &G.f);
    H.p = G.p;
    fn_822C5B18(&I.f, &H.f);
    I.p = H.p;
    Impl *n = std::_Allocate(1, (Impl *)0);
    n->vtbl = lbl_821B48E8;
    Bound *nb = &n->b;
    fn_822C5B18(&nb->f, &I.f);
    nb->p = I.p;
    holder.impl = n;
    fn_82359C18(&I);
    fn_82359C18(&H);
    fn_82359C18(&G);
    fn_82390788(&self->list, &holder);
    fn_82359C18(&holder);
}
