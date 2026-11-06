typedef struct Impl_82F565A0 Impl_82F565A0;
typedef struct {
    Impl_82F565A0 *(*copy)(Impl_82F565A0 *self, void *where);
} ImplVt_82F565A0;
struct Impl_82F565A0 { ImplVt_82F565A0 *vt; };
typedef struct {
    int space[4];
    Impl_82F565A0 *impl;
} Func_82F565A0;

void fn_82F565A0(Func_82F565A0 *self, Func_82F565A0 *other)
{
    if (other->impl == 0) {
        self->impl = 0;
    } else if ((void *)other->impl == (void *)other) {
        self->impl = other->impl->vt->copy(other->impl, self);
    } else {
        self->impl = other->impl->vt->copy(other->impl, 0);
    }
}
