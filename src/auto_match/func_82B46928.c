typedef struct { unsigned int w[20]; } Tmp_82B46928;

extern unsigned int *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_82933030(Tmp_82B46928 *);

unsigned int *fn_82B46928(void *self, unsigned int a, unsigned int b)
{
  Tmp_82B46928 t;
  unsigned int v;
  unsigned int *o;
  o = fn_82AC6560(self, 0x50, 10);
  fn_82933030(&t);
  v = t.w[0];
  o[6] = b;
  o[8] = a;
  o[1] = 0xe;
  o[5] = 1;
  o[7] = 0;
  o[0] = v;
  return o;
}
