typedef struct { unsigned int w[8]; } Tmp_82B4A2A0;

extern char *fn_82B47730(void *ctx, int size, int kind);
extern int fn_82F6DCE0(char *buf, unsigned int size, const char *fmt, ...);
extern unsigned int *fn_82AC6560(void *ctx, int size, int kind);
extern void fn_82933A98(Tmp_82B4A2A0 *);
extern unsigned int fn_82B466F8(void *ctx, char *s);

unsigned int *fn_82B4A2A0(void *ctx, char c, unsigned int n)
{
  Tmp_82B4A2A0 t;
  unsigned int *o;
  unsigned int v;
  char *buf = fn_82B47730(ctx, 5, 0);
  fn_82F6DCE0(buf, 5, "%c%u", c, n);
  o = fn_82AC6560(ctx, 0x20, 0xe);
  fn_82933A98(&t);
  v = t.w[0];
  o[1] = 0x12;
  o[0] = v;
  o[5] = fn_82B466F8(ctx, buf);
  return o;
}
