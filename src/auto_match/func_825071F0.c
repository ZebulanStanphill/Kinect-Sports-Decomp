typedef void (*Func_825071F0)(void);
typedef struct { Func_825071F0 f[13]; } Table_825071F0;
extern void fn_82592340(Table_825071F0 *self);
extern void fn_825071D8(void);
extern void fn_82507278(void);
extern void fn_82507370(void);
extern void fn_82500F88(void);
extern void fn_825073F8(void);
extern Table_825071F0 lbl_8329E660;
extern unsigned char lbl_8329E694;

Table_825071F0 *fn_825071F0(void)
{
  if (!lbl_8329E694) {
    fn_82592340(&lbl_8329E660);
    lbl_8329E660.f[0] = fn_825071D8;
    lbl_8329E660.f[1] = fn_82507278;
    lbl_8329E660.f[2] = fn_82507370;
    lbl_8329E660.f[3] = fn_82500F88;
    lbl_8329E660.f[5] = fn_825073F8;
    lbl_8329E694 = 1;
  }
  return &lbl_8329E660;
}
