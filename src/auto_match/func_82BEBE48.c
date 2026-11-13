extern int fn_82BE54C8(void *p, char *buf, int n);
extern int fn_82BE6720(void *ctx, int tok, int z);
extern int fn_82BE6C60(void *ctx, int a, int b, int c);
extern int fn_82BE6E28(void *ctx, void *s, int z);
extern void *fn_82BE8E38(void);

int fn_82BEBE48(void *param_1, void *param_2, void *param_3)
{
  char buf[48];

  if (fn_82BE6720(param_1, 0x3d, 0) && fn_82BE6E28(param_1, param_2, 0) &&
      fn_82BE6720(param_1, 0x3e, 0) && fn_82BE6E28(param_1, param_3, 0)) {
    if (fn_82BE8E38() != 0 && fn_82BE54C8(fn_82BE8E38(), buf, 0x21)) {
      if (!fn_82BE6720(param_1, 0x1d, 0) || !fn_82BE6E28(param_1, buf, 0)) {
        return 0;
      }
    }
    return fn_82BE6C60(param_1, 0xc9, 0, 0);
  }
  return 0;
}
