typedef struct Impl Impl;
typedef struct ImplVtbl {
    void *f0;
    void *f4;
    void *f8;
    void (*deleteThis)(Impl *, int);
} ImplVtbl;
struct Impl {
    ImplVtbl *vt;
};
typedef struct Func {
    char space[0x10];
    Impl *impl;
} Func;
extern void fn_828C01A0(Func *a, Func *b);

Func *fn_828E2C48(Func *self, Func *other)
{
    Impl *impl;
    if (self != other) {
        impl = self->impl;
        if (impl != 0) {
            impl->vt->deleteThis(impl, impl != (Impl *)self);
            self->impl = 0;
        }
        fn_828C01A0(self, other);
    }
    return self;
}
