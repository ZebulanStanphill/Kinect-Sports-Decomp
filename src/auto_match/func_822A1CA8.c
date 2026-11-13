typedef struct Impl_822A1CA8 Impl_822A1CA8;
typedef struct Fn_822A1CA8 Fn_822A1CA8;
extern void fn_82359C18(void *);

struct Impl_822A1CA8 {
  struct IVT_822A1CA8 {
    Impl_822A1CA8 *(*clone)(Impl_822A1CA8 *, Fn_822A1CA8 *);
    void *f4, *f8;
    void (*del)(Impl_822A1CA8 *, int);
  } *vt;
};
struct Fn_822A1CA8 {
  int buf[4];
  Impl_822A1CA8 *impl;
  int pad;
};
typedef struct Globals_822A1CA8 {
  char pad[0x50];
  Fn_822A1CA8 a;
  Fn_822A1CA8 b;
} Globals_822A1CA8;
extern Globals_822A1CA8 lbl_831D1298;

static __forceinline void Assign_822A1CA8(Fn_822A1CA8 *dst, Fn_822A1CA8 *src)
{
  if (dst != src) {
    if (dst->impl != 0) {
      dst->impl->vt->del(dst->impl, (void *)dst->impl != (void *)dst);
      dst->impl = 0;
    }
    if (src->impl == 0) {
      dst->impl = 0;
    } else {
      if ((void *)src->impl == (void *)src) {
        dst->impl = src->impl->vt->clone(src->impl, dst);
      } else {
        dst->impl = src->impl->vt->clone(src->impl, 0);
      }
    }
  }
}

void fn_822A1CA8(Fn_822A1CA8 *a, Fn_822A1CA8 *b)
{
  Assign_822A1CA8(&lbl_831D1298.a, a);
  Assign_822A1CA8(&lbl_831D1298.b, b);
  fn_82359C18(a);
  fn_82359C18(b);
}
