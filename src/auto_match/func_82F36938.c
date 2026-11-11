typedef struct { unsigned short a; unsigned short b; } Pair_82F36938;
extern int fn_82F35188(void *, Pair_82F36938, int);
extern int fn_82F35618(void *, unsigned, Pair_82F36938 **);

int fn_82F36938(char *self, unsigned short a, int b)
{
  unsigned short i;
  if (*(unsigned *)(self + 0xc) == 0) {
    return 0xC00D36B6;
  }
  if (b >= 4 && b != 0xff) {
    return 0x80070057;
  }
  for (i = 0; i < *(unsigned *)(self + 0x130); i = i + 1) {
    Pair_82F36938 *e;
    fn_82F35618(self + 0xc8, i, &e);
    if (a == e->a) {
      Pair_82F36938 *f;
      fn_82F35618(self + 0xc8, i, &f);
      if (b == f->b) return 1;
    }
  }
  {
    Pair_82F36938 p;
    p.a = a;
    p.b = (unsigned short)b;
    return fn_82F35188(self + 0xc8, p, 0) == 0 ? 0x8007000e : 0;
  }
}
