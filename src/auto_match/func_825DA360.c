typedef void (*Func_825DA360)(void);
typedef struct { Func_825DA360 f[13]; } Table_825DA360;
extern void fn_82592340(Table_825DA360 *self);
extern void fn_825DA348(void);
extern void fn_825DA3E8(void);
extern void fn_82BA02A8(void);
extern void fn_825DA5D0(void);
extern void fn_825DA510(void);
extern Table_825DA360 lbl_8329E850;
extern unsigned char lbl_8329E884;

Table_825DA360 *fn_825DA360(void)
{
  if (!lbl_8329E884) {
    fn_82592340(&lbl_8329E850);
    lbl_8329E850.f[0] = fn_825DA348;
    lbl_8329E850.f[1] = fn_825DA3E8;
    lbl_8329E850.f[2] = fn_82BA02A8;
    lbl_8329E850.f[3] = fn_825DA5D0;
    lbl_8329E850.f[5] = fn_825DA510;
    lbl_8329E884 = 1;
  }
  return &lbl_8329E850;
}
