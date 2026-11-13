typedef struct { unsigned int w[4]; } Tmp_82B467D8;

extern unsigned int *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_829304B8(Tmp_82B467D8 *);

unsigned int *fn_82B467D8(void *self, unsigned int a, unsigned int b, unsigned int c)
{
  Tmp_82B467D8 t;
  unsigned int v;
  unsigned int *o;
  o = fn_82AC6560(self, 0x14, 0xc);
  fn_829304B8(&t);
  v = t.w[0];
  o[2] = a;
  o[3] = b;
  o[1] = 1;
  o[4] = c;
  o[0] = v;
  return o;
}
