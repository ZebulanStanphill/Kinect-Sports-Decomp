typedef struct Impl_83141510 Impl_83141510;
typedef struct { void *s0, *s1, *s2; void (*del)(Impl_83141510 *, int); } ImplVt_83141510;
struct Impl_83141510 { ImplVt_83141510 *vt; };
typedef struct { int space[4]; Impl_83141510 *impl; } Func_83141510;
extern Func_83141510 lbl_83214448;

void fn_83141510(void)
{
    Func_83141510 *f = &lbl_83214448;
    if (f->impl) {
        f->impl->vt->del(f->impl, f->impl != (Impl_83141510 *)f->space);
        f->impl = 0;
    }
}
