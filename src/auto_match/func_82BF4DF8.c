extern void fn_82BE64E0(int ctx, int state);
extern int fn_82BE6720(int ctx, int tok, int flags);
extern int fn_82BE67E0(int ctx, __int64 v, int flags);
extern int fn_82BE6A00(int ctx);
extern int fn_82BE6B58(int ctx, int a, int b, int c);
extern int fn_82BE6ED8(int ctx, int v);
extern __int64 lbl_8322B1C8;
extern __int64 lbl_8322B1D0;

int fn_82BF4DF8(int ctx, int a, int b)
{
  if (fn_82BE6B58(ctx, a, 0x200, 0x200) == 0 ||
      fn_82BE67E0(ctx, lbl_8322B1D0, 1) == 0 ||
      fn_82BE6720(ctx, 0x2a, 1) == 0 ||
      fn_82BE67E0(ctx, lbl_8322B1C8, 1) == 0 ||
      fn_82BE6720(ctx, 0x2b, 1) == 0 ||
      fn_82BE6ED8(ctx, b) == 0 ||
      fn_82BE6A00(ctx) == 0) {
    return 0;
  }
  fn_82BE64E0(ctx, 1);
  return 1;
}
