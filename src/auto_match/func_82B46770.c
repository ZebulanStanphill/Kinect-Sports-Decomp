typedef struct { unsigned int w[13]; } Tmp_82B46770;

extern unsigned int *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_82930F70(Tmp_82B46770 *);
extern unsigned int fn_82B466F8(void *ctx, char *s);

unsigned int *fn_82B46770(void *self, unsigned int a, char *s, unsigned int c)
{
  Tmp_82B46770 t;
  unsigned int v;
  unsigned int *o;
  o = fn_82AC6560(self, 0x34, 9);
  fn_82930F70(&t);
  v = t.w[0];
  o[4] = a;
  o[1] = 6;
  o[0] = v;
  o[5] = fn_82B466F8(self, s);
  o[6] = c;
  return o;
}
