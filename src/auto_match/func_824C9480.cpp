#include "stdext/xmemory.h"

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct RefCount;
struct Obj;

class FuncImpl {
public:
    virtual FuncImpl *_Copy(void *where) = 0;
};

struct Func {
    int space[4];
    FuncImpl *impl;
};

struct Bound {
    void (*fn)();
    Obj *self;
    int extra;
    Bound(void (*f)(), Obj *s) : fn(f), self(s) {}
};

struct BoundImpl {
    void **vtbl;
    Bound b;
    BoundImpl(void **v, const Bound &bb) : vtbl(v), b(bb) {}
};

struct TempFunc {
    union {
        int space[4];
    };
    BoundImpl *impl;
    TempFunc(void **vtbl, const Bound &b)
    {
        impl = new (space) BoundImpl(vtbl, b);
    }
    TempFunc(const TempFunc &);
};

struct MapNode {
    MapNode *left;
    MapNode *parent;
    MapNode *right;
    int value[43];
    char color;
    char isnil;
    char pad[6];
};

struct Sub1C {
    int d[7];
};

struct Owner {
    char pad[0x190];
    char m190[4];
    struct Inner { Owner *o; } *m194;
};

struct Target {
    char pad[0x1b8];
    char m1b8[4];
};

struct Listener {
    void **vtbl;
    int pad04[5];
    int m18;
    int pad1c;
    Func func;
};

struct WeakPtr {
    void *ptr;
    RefCount *rep;
};

struct Obj {
    Target *ptr;
    RefCount *rep;
    Sub1C sub08;
    Sub1C sub24;
    float f40;
    int pad44;
    MapNode *head;
    unsigned int size;
    int pad50;
    int sub54[4];
    int *vfirst;
    int *vlast;
    int *vend;
    int pad70;
    int pad74;
    Listener listener;
};

extern "C" {
extern float lbl_821CC160;
extern void *lbl_821C2424[];
extern void *lbl_821C0B18[];
extern void *lbl_821C0B30[];
bool fn_8223AAC0(RefCount *);
void fn_822315A0(RefCount *);
void fn_82230300(Sub1C *, int, int);
void fn_824CA0B8(int *);
void fn_824C9A10(Obj *, int);
void fn_824C9D38();
void fn_824C9F10();
void fn_82511668(Listener *, TempFunc);
void fn_825113E0(char *, int, Listener *);
void fn_824CA800(char *, const TempFunc &);
void fn_82359C18(TempFunc *);
}


extern "C" Obj *fn_824C9480(Obj *self, int arg, WeakPtr *wp, Func *func)
{
    self->ptr = 0;
    self->rep = 0;
    {
        Target *optr = (Target *)wp->ptr;
        RefCount *orep = wp->rep;
        if (orep != 0 && fn_8223AAC0(orep)) {
            if (self->rep != 0)
                fn_822315A0(self->rep);
            self->rep = orep;
            self->ptr = optr;
        }
    }
    fn_82230300(&self->sub08, 0, 0);
    fn_82230300(&self->sub24, 0, 0);
    self->f40 = lbl_821CC160;
    unsigned int *ps = &self->size;
    *ps = 0;
    self->head = std::_Allocate(1, (MapNode *)0);
    self->head->left = self->head;
    self->head->parent = self->head;
    self->head->right = self->head;
    self->head->color = 1;
    self->head->isnil = 1;
    fn_824CA0B8(self->sub54);
    self->vfirst = 0;
    self->vlast = 0;
    self->vend = 0;
    {
        Listener *l = &self->listener;
        Func *f = &self->listener.func;
        l->vtbl = lbl_821C2424;
        l->m18 = 0;
        if (func->impl == 0)
            f->impl = 0;
        else if (func->impl == (FuncImpl *)func)
            f->impl = func->impl->_Copy(f);
        else
            f->impl = func->impl->_Copy(0);
    }
    fn_824C9A10(self, arg);
    fn_82511668(&self->listener, TempFunc(lbl_821C0B18, Bound(fn_824C9D38, self)));
    fn_825113E0(self->ptr->m1b8, 0x16, &self->listener);
    {
        TempFunc t(lbl_821C0B30, Bound(fn_824C9F10, self));
        fn_824CA800(((Owner *)self->ptr)->m194->o->m190, t);
        fn_82359C18(&t);
    }
    return self;
}
