typedef struct Vt_82253ED8 { void *(*f0)(void *, void *); } Vt_82253ED8;
typedef struct Impl_82253ED8 { Vt_82253ED8 *vt; } Impl_82253ED8;
typedef struct Fn_82253ED8 { char buf[16]; Impl_82253ED8 *impl; int pad; } Fn_82253ED8;
typedef struct Sp_82253ED8 { int ptr; void *rep; } Sp_82253ED8;
typedef struct Obj_82253ED8 {
  void *vt;
  char pad[0x34];
  Fn_82253ED8 f38;
  Fn_82253ED8 f50;
  char x68[8];
  char x70[8];
  Sp_82253ED8 sp;
} Obj_82253ED8;
extern void fn_8223A4D8(Obj_82253ED8 *);
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_82365BD8(void *, void *);
extern char lbl_82196C58[];
extern char lbl_82197EF4[];

static __forceinline void fcopy(Fn_82253ED8 *dst, Fn_82253ED8 *src)
{
  if (src->impl == 0) {
    dst->impl = 0;
  } else if (src->impl == (Impl_82253ED8 *)src) {
    dst->impl = src->impl->vt->f0(src->impl, dst);
  } else {
    dst->impl = src->impl->vt->f0(src->impl, 0);
  }
}

Obj_82253ED8 *fn_82253ED8(Obj_82253ED8 *d, Obj_82253ED8 *s)
{
  Sp_82253ED8 *dp;
  void *rep;
  int ptr;
  fn_8223A4D8(d);
  d->vt = lbl_82196C58;
  fcopy(&d->f38, &s->f38);
  fcopy(&d->f50, &s->f50);
  d->vt = lbl_82197EF4;
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
