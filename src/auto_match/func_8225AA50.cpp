typedef struct Impl_8225AA50 Impl_8225AA50;
typedef struct {
    Impl_8225AA50 *(*copy)(Impl_8225AA50 *self, void *where);
} ImplVt_8225AA50;
struct Impl_8225AA50 {
    ImplVt_8225AA50 *vt;
};

typedef struct {
    int space[4];
    Impl_8225AA50 *impl;
    int pad;
} Func_8225AA50;

typedef struct {
    void *vt;
    int base[13];
    Func_8225AA50 f1;
    Func_8225AA50 f2;
    int a[2];
    int b[2];
    int c[2];
} Sub_8225AA50;

typedef struct {
    void *vt;
    int pad04[9];
    void *vt28;
    int pad2c;
    Sub_8225AA50 sub;
} Obj_8225AA50;

extern "C" void fn_82239CB0(void *dst, void *src);
extern "C" void fn_8223A4D8(void *dst, void *src);
extern "C" void fn_82365BD8(void *dst, void *src);
extern "C" char lbl_821968A4[];
extern "C" char lbl_82196C58[];
extern "C" char lbl_821983B8[];
namespace v1 { extern "C" char lbl_821983C0[]; }
namespace v2 { extern "C" char lbl_821983C0[]; }

static __forceinline void Func_copy_8225AA50(Func_8225AA50 *d, Func_8225AA50 *s)
{
    if (s->impl == 0) {
        d->impl = 0;
    } else if (s->impl == (Impl_8225AA50 *)s->space) {
        d->impl = s->impl->vt->copy(s->impl, d);
    } else {
        d->impl = s->impl->vt->copy(s->impl, 0);
    }
}

static __forceinline void Sub_copy_8225AA50(Sub_8225AA50 *d, Sub_8225AA50 *s)
{
    fn_8223A4D8(d, s);
    d->vt = lbl_82196C58;
    Func_copy_8225AA50(&d->f1, &s->f1);
    Func_copy_8225AA50(&d->f2, &s->f2);
    d->vt = v1::lbl_821983C0;
    fn_82365BD8(d->a, s->a);
    fn_82365BD8(d->b, s->b);
    fn_82365BD8(d->c, s->c);
}

extern "C" Obj_8225AA50 *fn_8225AA50(Obj_8225AA50 *self, Obj_8225AA50 *other)
{
    fn_82239CB0(self, other);
    self->vt = lbl_821983B8;
    self->vt28 = lbl_821968A4;
    Sub_copy_8225AA50(&self->sub, &other->sub);
    self->sub.vt = v2::lbl_821983C0;
    return self;
}
