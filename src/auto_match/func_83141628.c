typedef struct Impl_83141628 Impl_83141628;
typedef struct { void *s0, *s1, *s2; void (*del)(Impl_83141628 *, int); } ImplVt_83141628;
struct Impl_83141628 { ImplVt_83141628 *vt; };
typedef struct { int space[4]; Impl_83141628 *impl; } Func_83141628;
extern Func_83141628 lbl_832144C0;

void fn_83141628(void)
{
    Func_83141628 *f = &lbl_832144C0;
    if (f->impl) {
        f->impl->vt->del(f->impl, f->impl != (Impl_83141628 *)f->space);
        f->impl = 0;
    }
}
