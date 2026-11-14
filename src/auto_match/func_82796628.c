typedef struct { int p0; int n; } Hd_82796628;
typedef struct { Hd_82796628 *hd; int idx; } Ref_82796628;
typedef struct { int p0; unsigned n; char pad[0x14]; int base; } Ent_82796628;
typedef struct {
  int p0, p4;
  int f8;
  Ent_82796628 **arr;   /* 0xc */
  int p10, p14;
  int f18;
} Obj_82796628;
extern Ent_82796628 *fn_82796498(Obj_82796628 *, unsigned);
extern unsigned char fn_8278FD18(Ent_82796628 *);
extern void fn_82794B88(Obj_82796628 *);
extern unsigned fn_82794C10();
extern void fn_82796390(Ent_82796628 ***, unsigned, unsigned *);
extern void fn_82794B38(unsigned);
extern void fn_8267BE38(unsigned);
extern void fn_82790FA0(Ent_82796628 *, int, unsigned);

Ent_82796628 *fn_82796628(Obj_82796628 *o, Ref_82796628 *r, unsigned flags)
{
  unsigned char bad;
  unsigned i;
  int v;
  unsigned n;
  unsigned len;
  int base;
  unsigned tmp;
  unsigned t;
  Ent_82796628 ***ap;
  unsigned fl;
  Ent_82796628 *e;
  Ent_82796628 *res;
  if (r->hd == 0 || r->idx < 0 || r->idx >= r->hd->n) {
    bad = 1;
  } else {
    bad = 0;
  }
  if (bad) {
    return fn_82796498(o, flags);
  }
  i = r->idx;
  v = 0;
  if (i != 0) {
    e = o->arr[i - 1];
    n = e->n;
    base = e->base;
    len = n;
    if (n != 0 && fn_8278FD18(e) != 0) {
      len = n - 1;
    }
    v = len + base;
  }
  fn_82794B88(o);
  tmp = fn_82794C10();
  ap = &o->arr;
  fn_82796390(ap, i, &tmp);
  t = tmp;
  if (t != 0) {
    fn_82794B38(t);
    fn_8267BE38(t);
  }
  res = (*ap)[i];
  if (flags == 0) {
    fl = o->f18;
  } else {
    fl = flags;
  }
  fn_82790FA0(res, o->f8, fl);
  res->base = v;
  return res;
}
