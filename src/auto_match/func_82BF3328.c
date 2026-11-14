extern int fn_82BE6720(int ctx, int tok, int flags);
extern int fn_82BE6760(int ctx, unsigned short v, int flags);
extern int fn_82BE67E0(int ctx, __int64 v, int flags);
extern int fn_82BE6C60(int ctx, int op, int a, int b);
extern __int64 lbl_8322B1C8;
extern __int64 lbl_8322B1D0;

typedef struct Info_82BF3328 {
  char pad0[0x60];
  unsigned short v60;
  unsigned short v62;
  unsigned short v64;
} Info_82BF3328;
extern Info_82BF3328 *lbl_8322B224;

int fn_82BF3328(int ctx)
{
  unsigned short v;

  if (fn_82BE6720(ctx, 0x2b, 0) != 0 && fn_82BE67E0(ctx, lbl_8322B1C8, 0) != 0 &&
      fn_82BE6720(ctx, 0x2a, 0) != 0 && fn_82BE67E0(ctx, lbl_8322B1D0, 0) != 0 &&
      fn_82BE6720(ctx, 0x58, 0) != 0) {
    v = lbl_8322B224 ? lbl_8322B224->v60 : 0;
    if (fn_82BE6760(ctx, v, 0) != 0 && fn_82BE6720(ctx, 0x59, 0) != 0) {
      v = lbl_8322B224 ? lbl_8322B224->v62 : 0;
      if (fn_82BE6760(ctx, v, 0) != 0 && fn_82BE6720(ctx, 0x5c, 0) != 0) {
        v = lbl_8322B224 ? lbl_8322B224->v64 : 0;
        if (fn_82BE6760(ctx, v, 0) != 0) {
          return fn_82BE6C60(ctx, 0xda, 1, 1);
        }
      }
    }
  }
  return 0;
}
