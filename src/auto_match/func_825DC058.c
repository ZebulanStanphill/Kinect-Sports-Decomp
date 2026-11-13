typedef void (*Func_825DC058)(void);
typedef struct { Func_825DC058 f[8]; } Table_825DC058;
extern void fn_825DC040(void);
extern void fn_825DC0D0(void);
extern void fn_825DC128(void);
extern void fn_825DC2B8(void);
extern void fn_82BA02A8(void);
extern Table_825DC058 lbl_8329E500;
extern unsigned char lbl_8329E520;

Table_825DC058 *fn_825DC058(void)
{
  if (!lbl_8329E520) {
    lbl_8329E500.f[3] = fn_82BA02A8;
    lbl_8329E500.f[0] = fn_825DC040;
    lbl_8329E500.f[1] = fn_825DC0D0;
    lbl_8329E500.f[2] = fn_82BA02A8;
    lbl_8329E500.f[5] = fn_825DC128;
    lbl_8329E500.f[6] = fn_825DC2B8;
    lbl_8329E500.f[7] = fn_82BA02A8;
    lbl_8329E520 = 1;
  }
  return &lbl_8329E500;
}
