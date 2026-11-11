typedef void (*Func_825D9D38)(void);
typedef struct { Func_825D9D38 f[13]; } Table_825D9D38;
extern void fn_82592340(Table_825D9D38 *self);
extern void fn_825D9D20(void);
extern void fn_825D9DC0(void);
extern void fn_825D9E50(void);
extern void fn_825DA5D0(void);
extern void fn_825D9E68(void);
extern Table_825D9D38 lbl_8329E8C0;
extern unsigned char lbl_8329E8F4;

Table_825D9D38 *fn_825D9D38(void)
{
  if (!lbl_8329E8F4) {
    fn_82592340(&lbl_8329E8C0);
    lbl_8329E8C0.f[0] = fn_825D9D20;
    lbl_8329E8C0.f[1] = fn_825D9DC0;
    lbl_8329E8C0.f[2] = fn_825D9E50;
    lbl_8329E8C0.f[3] = fn_825DA5D0;
    lbl_8329E8C0.f[5] = fn_825D9E68;
    lbl_8329E8F4 = 1;
  }
  return &lbl_8329E8C0;
}
