typedef void (*Func_825DA080)(void);
typedef struct { Func_825DA080 f[13]; } Table_825DA080;
extern void fn_82592340(Table_825DA080 *self);
extern void fn_825DA068(void);
extern void fn_825DA108(void);
extern void fn_825DA210(void);
extern void fn_825DA2B8(void);
extern void fn_825DA250(void);
extern Table_825DA080 lbl_8329E888;
extern unsigned char lbl_8329E8BC;

Table_825DA080 *fn_825DA080(void)
{
  if (!lbl_8329E8BC) {
    fn_82592340(&lbl_8329E888);
    lbl_8329E888.f[0] = fn_825DA068;
    lbl_8329E888.f[1] = fn_825DA108;
    lbl_8329E888.f[2] = fn_825DA210;
    lbl_8329E888.f[3] = fn_825DA2B8;
    lbl_8329E888.f[5] = fn_825DA250;
    lbl_8329E8BC = 1;
  }
  return &lbl_8329E888;
}
