typedef struct Fn_822B1CF0 Fn_822B1CF0;
typedef struct Impl_822B1CF0 Impl_822B1CF0;
typedef struct ImplVt_822B1CF0 {
  Impl_822B1CF0 *(*clone)(Impl_822B1CF0 *, Fn_822B1CF0 *);
  void *f4;
  void *f8;
  void (*destroy)(Impl_822B1CF0 *, int);
} ImplVt_822B1CF0;
struct Impl_822B1CF0 { ImplVt_822B1CF0 *vt; };
struct Fn_822B1CF0 { int pad[4]; Impl_822B1CF0 *impl; };
typedef struct Obj_822B1CF0 { char pad[0x18]; Fn_822B1CF0 fn; } Obj_822B1CF0;

void fn_822B1CF0(Obj_822B1CF0 *self, Fn_822B1CF0 *src)
{
  Fn_822B1CF0 *dst = &self->fn;
  Impl_822B1CF0 *old;
  Fn_822B1CF0 *arg;
  if (dst != src) {
    old = dst->impl;
    if (old != 0) {
      old->vt->destroy(old, (Fn_822B1CF0 *)old != dst);
      dst->impl = 0;
    }
    if (src->impl == 0) {
      dst->impl = 0;
    } else {
      if ((Fn_822B1CF0 *)src->impl == src) {
        dst->impl = src->impl->vt->clone(src->impl, dst);
      } else {
        dst->impl = src->impl->vt->clone(src->impl, 0);
      }
    }
  }
}
