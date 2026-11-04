typedef struct Vt_822540D0 { void *(*f0)(void *, void *); } Vt_822540D0;
typedef struct Impl_822540D0 { Vt_822540D0 *vt; } Impl_822540D0;
typedef struct Fn_822540D0 { char buf[16]; Impl_822540D0 *impl; int pad; } Fn_822540D0;
typedef struct Sp_822540D0 { int ptr; void *rep; } Sp_822540D0;
typedef struct Obj_822540D0 {
  void *vt;
  char pad[0x34];
  Fn_822540D0 f38;
  Fn_822540D0 f50;
  char x68[8];
  char x70[8];
  Sp_822540D0 sp;
} Obj_822540D0;
extern void fn_8223A4D8(Obj_822540D0 *);
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_82365BD8(void *, void *);
extern char lbl_82196C58[];
extern char lbl_82197F64[];

static __forceinline void fcopy(Fn_822540D0 *dst, Fn_822540D0 *src)
{
  if (src->impl == 0) {
    dst->impl = 0;
  } else if (src->impl == (Impl_822540D0 *)src) {
    dst->impl = src->impl->vt->f0(src->impl, dst);
  } else {
    dst->impl = src->impl->vt->f0(src->impl, 0);
  }
}

Obj_822540D0 *fn_822540D0(Obj_822540D0 *d, Obj_822540D0 *s)
{
  Sp_822540D0 *dp;
  void *rep;
  int ptr;
  fn_8223A4D8(d);
  d->vt = lbl_82196C58;
  fcopy(&d->f38, &s->f38);
  fcopy(&d->f50, &s->f50);
  d->vt = lbl_82197F64;
  fn_82365BD8(d->x68, s->x68);
  fn_82365BD8(d->x70, s->x70);
  dp = &d->sp;
  dp->ptr = 0;
  dp->rep = 0;
  rep = s->sp.rep;
  ptr = s->sp.ptr;
  if (rep != 0 && fn_8223AAC0(rep) != 0) {
    if (dp->rep != 0) fn_822315A0(dp->rep);
    dp->rep = rep;
    dp->ptr = ptr;
  }
  return d;
}
