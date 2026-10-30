typedef struct Impl Impl;
typedef struct { void *s0, *s1, *s2; void (*del)(Impl *, int); } ImplVt;
struct Impl { ImplVt *vt; };
typedef struct { int space[4]; Impl *impl; } Func;
typedef struct { char pad[0x10]; Func f; } P;
void fn_82321598(P *p) { Func *f = &p->f; if (f->impl) { f->impl->vt->del(f->impl, f->impl != (Impl *)f->space); f->impl = 0; } }
