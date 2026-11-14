extern int fn_82BE6720(int ctx, int tok, int flags);
extern int fn_82BE6760(int ctx, unsigned short v, int flags);
extern int fn_82BE67A0(int ctx, unsigned int v, int flags);
extern int fn_82BE67E0(int ctx, __int64 v, int flags);
extern int fn_82BE6A00(int ctx);
extern int fn_82BE6C60(int ctx, int op, int a, int b);
extern int fn_82BE6E28(int ctx, int v, int flags);
extern __int64 lbl_8322B1C8;
extern __int64 lbl_8322B1D0;

int fn_82BF5790(int ctx, int a, int b, unsigned int c, unsigned int d, unsigned short e)
{
  if (fn_82BE6720(ctx, 0x47, 0) &&
      fn_82BE6E28(ctx, a, 0) &&
      fn_82BE6720(ctx, 0x3d, 0) &&
      fn_82BE6E28(ctx, b, 0) &&
      fn_82BE6720(ctx, 0x2a, 0) &&
      fn_82BE67E0(ctx, lbl_8322B1D0, 0) &&
      fn_82BE6720(ctx, 0x2b, 0) &&
      fn_82BE67E0(ctx, lbl_8322B1C8, 0) &&
      fn_82BE6A00(ctx) &&
      (c == 0 || d == 0 || e == 0 ||
       (fn_82BE6720(ctx, 0x10, 0) &&
        fn_82BE67A0(ctx, c, 0) &&
        fn_82BE6720(ctx, 0x11, 0) &&
        fn_82BE67A0(ctx, d, 0) &&
        fn_82BE6720(ctx, 0x12, 0) &&
        fn_82BE6760(ctx, e, 0)))) {
    return fn_82BE6C60(ctx, 0xcd, 1, 1);
  }
  return 0;
}
