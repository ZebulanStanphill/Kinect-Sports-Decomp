struct SP_82383000 { int p; unsigned rc; };
struct E_82383000 { char p0[0xd4]; int f; };
struct V_82383000 { char p0[0x184]; struct SP_82383000 *begin; struct SP_82383000 *end; };
struct O_82383000 { char p0[0x80]; struct V_82383000 *v; };
extern struct SP_82383000 *fn_82365BD8(void *, struct SP_82383000 *);
extern void fn_822315A0(unsigned);
struct SP_82383000 *fn_82383000(struct SP_82383000 *out, struct O_82383000 *o)
{
  struct SP_82383000 *it, *end, *t;
  struct { struct SP_82383000 sp; } l;
  int a;
  unsigned b;
  out->p = 0;
  out->rc = 0;
  end = o->v->end;
  it = o->v->begin;
  while (it != end) {
    if (((struct E_82383000 *)it->p)->f == 0) {
      t = fn_82365BD8(&l.sp, it);
      { int *pa = (int *)&t->rc; int *pb = (int *)&out->rc; int tt = *pa; *pa = *pb; *pb = tt; }
      { int *pa = &t->p; int *pb = &out->p; int tt = *pa; *pa = *pb; *pb = tt; }
      if (l.sp.rc != 0) fn_822315A0(l.sp.rc);
      return out;
    }
    it++;
  }
  return out;
}
