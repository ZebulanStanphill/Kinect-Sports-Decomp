typedef struct Impl_8313D148 Impl_8313D148;
typedef struct { void *s0, *s1, *s2; void (*del)(Impl_8313D148 *, int); } ImplVt_8313D148;
struct Impl_8313D148 { ImplVt_8313D148 *vt; };
typedef struct { int space[4]; Impl_8313D148 *impl; } Func_8313D148;
extern Func_8313D148 lbl_8328A678;

void fn_8313D148(void)
{
    Func_8313D148 *f = &lbl_8328A678;
    if (f->impl) {
        f->impl->vt->del(f->impl, f->impl != (Impl_8313D148 *)f->space);
        f->impl = 0;
    }
}
