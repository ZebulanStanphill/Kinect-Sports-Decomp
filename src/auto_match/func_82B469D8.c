typedef struct { unsigned int w[20]; } Tmp_82B469D8;

extern unsigned int fn_82B468D0(void *self, unsigned int a, unsigned int b);
extern unsigned int *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_82933030(Tmp_82B469D8 *);
extern unsigned int fn_82B46928(void *self, unsigned int a, unsigned int b);

unsigned int *fn_82B469D8(void *self, unsigned int a, unsigned int b, unsigned int c)
{
  Tmp_82B469D8 t;
  unsigned int v;
  unsigned int *o;
  unsigned int r;
  r = fn_82B468D0(self, a, c);
  o = fn_82AC6560(self, 0x50, 10);
  fn_82933030(&t);
  v = t.w[0];
  o[6] = c;
  o[1] = 0xe;
  o[5] = 1;
  o[7] = 0x1b;
  o[0] = v;
  o[8] = fn_82B46928(self, r, c);
  o[9] = fn_82B46928(self, b, c);
  return o;
}
