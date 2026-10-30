struct O_82F3A250 { char p0[0x14]; char sub[0xbc]; unsigned d0; char p1[4]; void *d8; };
struct E_82F3A250 { int p0; void *f4; };
extern void fn_82E4FE40(void *);
extern void fn_82F39D20(void *, unsigned, struct E_82F3A250 **);
int fn_82F3A250(int unused, struct O_82F3A250 *o)
{
  unsigned short i;
  void *t;
  struct E_82F3A250 *e;
  struct E_82F3A250 *e2;
  if (o == 0) return 0x80004003;
  if (o->d8 != 0) fn_82E4FE40(o->d8);
  o->d8 = 0;
  if (o->d0 > 0) {
    i = 0;
    do {
      fn_82F39D20(o->sub, i, &e);
      t = e->f4;
      if (t != 0) fn_82E4FE40(t);
      fn_82F39D20(o->sub, i, &e2);
      i++;
      e2->f4 = 0;
    } while (i < o->d0);
  }
  return 0;
}
