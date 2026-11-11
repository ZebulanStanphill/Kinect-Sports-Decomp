/* LTCG match: exactly 100.0% only when linked with /LTCG against fn_82592340
   (km/agents/work/func_82592340.c, a void constructor). The compiler then knows
   the callee leaves r3 alone, keeps the table pointer there across the call and
   numbers the lis temporaries as the original does.
   Check: km/k try func_825D9988 km/agents/work/func_825D9988.ltcg.c --ltcg km/agents/work/func_82592340.c */
typedef void (*Func_825D9988)(void);
typedef struct { Func_825D9988 f[13]; } Table_825D9988;
extern void fn_82592340(Table_825D9988 *self);
extern void fn_825D9970(void);
extern void fn_8261C880(void);
extern void fn_82BA02A8(void);
extern void fn_8261CC08(void);
extern void fn_825923E8(void);
extern void fn_8261D008(void);
extern void fn_8261D1B8(void);
extern Table_825D9988 lbl_8329E968;
extern unsigned char lbl_8329E99C;

Table_825D9988 *fn_825D9988(void)
{
  if (!lbl_8329E99C) {
    fn_82592340(&lbl_8329E968);
    lbl_8329E968.f[0] = fn_825D9970;
    lbl_8329E968.f[1] = fn_8261C880;
    lbl_8329E968.f[2] = fn_82BA02A8;
    lbl_8329E968.f[3] = fn_8261CC08;
    lbl_8329E968.f[4] = fn_825923E8;
    lbl_8329E968.f[5] = fn_8261D008;
    lbl_8329E968.f[6] = fn_8261D1B8;
    lbl_8329E99C = 1;
  }
  return &lbl_8329E968;
}
