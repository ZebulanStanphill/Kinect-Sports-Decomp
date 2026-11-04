struct Sp { int *px; int *rep; Sp() : px(0), rep(0) {} };
extern "C" int *fn_8265C9E0(int);
extern "C" int fn_82365BD8(void *, Sp *);
extern "C" int fn_823FD9F8(int *, int, int, int, int, int);
extern "C" unsigned char fn_8223AAC0(int *);
extern "C" void fn_822315A0(int *);
extern "C" int lbl_821AD588;
extern "C" Sp fn_823F70C0(Sp *a, Sp *b, Sp *c, Sp *d, Sp *e)
{
  int t0[2], t1[2], t2[2], t3[2], t4[2];
  int *r, *mem, *obj;
  mem = fn_8265C9E0(0x50);
  if (mem != 0) {
    mem[1] = 1;
    mem[0] = (int)&lbl_821AD588;
    mem[2] = 1;
    if (mem + 3 != 0) {
      int e1 = fn_82365BD8(t0, e);
      int d1 = fn_82365BD8(t1, d);
      int c1 = fn_82365BD8(t2, c);
      int b1 = fn_82365BD8(t3, b);
      fn_823FD9F8(mem + 3, fn_82365BD8(t4, a), b1, c1, d1, e1);
    }
    r = mem;
  } else r = 0;
  Sp out;
  obj = r + 3;
  obj[2] = 0; obj[3] = 0x50; obj[4] = 0x60; obj[5] = 0x70; obj[6] = 0x74;
  if (r != 0) {
    if (fn_8223AAC0(r) != 0) {
      if (out.rep != 0) fn_822315A0(out.rep);
      out.rep = (int *)r;
      out.px = obj;
    }
    fn_822315A0(r);
  }
  if (a->rep) fn_822315A0(a->rep);
  if (b->rep) fn_822315A0(b->rep);
  if (c->rep) fn_822315A0(c->rep);
  if (d->rep) fn_822315A0(d->rep);
  if (e->rep) fn_822315A0(e->rep);
  return out;
}
