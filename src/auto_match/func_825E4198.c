typedef void (*Func_825E4198)(void);
typedef struct { Func_825E4198 f[11]; } Table_825E4198;
extern void fn_82591810(Table_825E4198 *self);
extern void fn_825E4180(void);
extern void fn_825E44F0(void);
extern void fn_82BA02A8(void);
extern void fn_825E4738(void);
extern void fn_825E4788(void);
extern Table_825E4198 lbl_8329E820;
extern unsigned char lbl_8329E84C;

Table_825E4198 *fn_825E4198(void)
{
  if (!lbl_8329E84C) {
    fn_82591810(&lbl_8329E820);
    lbl_8329E820.f[0] = fn_825E4180;
    lbl_8329E820.f[1] = fn_825E44F0;
    lbl_8329E820.f[2] = fn_82BA02A8;
    lbl_8329E820.f[3] = fn_825E4738;
    lbl_8329E820.f[5] = fn_825E4788;
    lbl_8329E84C = 1;
  }
  return &lbl_8329E820;
}
