typedef struct { unsigned int w[16]; } Tmp_82B468D0;

extern unsigned int *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_829333E0(Tmp_82B468D0 *);

unsigned int *fn_82B468D0(void *self, unsigned int a, unsigned int b)
{
  Tmp_82B468D0 t;
  unsigned int v;
  unsigned int *o;
  o = fn_82AC6560(self, 0x40, 0x13);
  fn_829333E0(&t);
  v = t.w[0];
  o[6] = a;
  o[7] = b;
  o[1] = 0xf;
  o[4] = 6;
  o[0] = v;
  return o;
}
