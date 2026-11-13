typedef struct { unsigned int w[8]; } Tmp_82B46EA8;

extern unsigned int *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_82931D48(Tmp_82B46EA8 *);

unsigned int *fn_82B46EA8(void *self, unsigned int a, unsigned int b, unsigned int c)
{
  Tmp_82B46EA8 t;
  unsigned int v;
  unsigned int *o;
  o = fn_82AC6560(self, 0x28, 0x12);
  fn_82931D48(&t);
  v = t.w[0];
  o[5] = a;
  o[7] = b;
  o[1] = 9;
  o[8] = c;
  o[0] = v;
  o[9] = 0x400;
  return o;
}
