typedef void (*Func_825009D0)(void);
typedef struct { Func_825009D0 f[13]; } Table_825009D0;
extern void fn_82592340(Table_825009D0 *self);
extern void fn_825009B8(void);
extern void fn_82500A58(void);
extern void fn_82500C20(void);
extern void fn_82500F88(void);
extern void fn_82500CA0(void);
extern Table_825009D0 lbl_8329E6D0;
extern unsigned char lbl_8329E704;

Table_825009D0 *fn_825009D0(void)
{
  if (!lbl_8329E704) {
    fn_82592340(&lbl_8329E6D0);
    lbl_8329E6D0.f[0] = fn_825009B8;
    lbl_8329E6D0.f[1] = fn_82500A58;
    lbl_8329E6D0.f[2] = fn_82500C20;
    lbl_8329E6D0.f[3] = fn_82500F88;
    lbl_8329E6D0.f[5] = fn_82500CA0;
    lbl_8329E704 = 1;
  }
  return &lbl_8329E6D0;
}
