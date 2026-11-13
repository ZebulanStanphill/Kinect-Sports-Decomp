typedef void (*Func_825D9B68)(void);
typedef struct { Func_825D9B68 f[13]; } Table_825D9B68;
extern void fn_82592340(Table_825D9B68 *self);
extern void fn_825D9B50(void);
extern void fn_825D9BF0(void);
extern void fn_82BA02A8(void);
extern void fn_825DA5D0(void);
extern void fn_825D9C60(void);
extern Table_825D9B68 lbl_8329E8F8;
extern unsigned char lbl_8329E92C;

Table_825D9B68 *fn_825D9B68(void)
{
  if (!lbl_8329E92C) {
    fn_82592340(&lbl_8329E8F8);
    lbl_8329E8F8.f[0] = fn_825D9B50;
    lbl_8329E8F8.f[1] = fn_825D9BF0;
    lbl_8329E8F8.f[2] = fn_82BA02A8;
    lbl_8329E8F8.f[3] = fn_825DA5D0;
    lbl_8329E8F8.f[5] = fn_825D9C60;
    lbl_8329E92C = 1;
  }
  return &lbl_8329E8F8;
}
