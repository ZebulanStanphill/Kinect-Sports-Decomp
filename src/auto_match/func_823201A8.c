typedef struct Impl_823201A8 Impl_823201A8;

typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void (*destroy)(Impl_823201A8 *self, int notLocal);
} ImplVt_823201A8;

struct Impl_823201A8 {
    ImplVt_823201A8 *vt;
};

typedef struct {
    int buf[4];
    Impl_823201A8 *impl;
} Func_823201A8;

typedef struct {
    void *vt;
    int f4;
    void *f8;
    char sub[0x58];
    void *f64;
    Func_823201A8 func;
} Obj_823201A8;

extern void fn_822315A0(void *p);
extern void fn_822C71C8(void *p);
extern void fn_8265CA20(void *p);
extern unsigned int lbl_821AC4A4;

Obj_823201A8 *fn_823201A8(Obj_823201A8 *self, unsigned int flags)
{
    Func_823201A8 *f = &self->func;
    Impl_823201A8 *impl = f->impl;

    if (impl != 0) {
        impl->vt->destroy(impl, impl != (Impl_823201A8 *)f);
        f->impl = 0;
    }
    if (self->f64 != 0) {
        fn_822315A0(self->f64);
    }
    fn_822C71C8(self->sub - 0 + 0 == 0 ? 0 : (void *)&self->sub);
    if (self->f8 != 0) {
        fn_822315A0(self->f8);
    }
    self->vt = &lbl_821AC4A4;
    if (flags & 1) {
        fn_8265CA20(self);
    }
    return self;
}
