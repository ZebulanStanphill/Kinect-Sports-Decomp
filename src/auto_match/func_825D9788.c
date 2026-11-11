/* LTCG match: exactly 100.0% only when linked with /LTCG against fn_82592340
   (a void constructor that leaves r3 alone), like its sibling fn_825D9988.
   Check: km/k try func_825D9788 --ltcg km/agents/work/func_82592340.c */
typedef void (*Func_825D9788)(void);
typedef struct { Func_825D9788 f[13]; } Table_825D9788;
extern void fn_82592340(Table_825D9788 *self);
extern void fn_825D9770(void);
extern void fn_8257D470(void);
extern void fn_8257D680(void);
extern void fn_8261C588(void);
extern void fn_8261C808(void);
extern void fn_825D2D60(void);
extern Table_825D9788 lbl_8329E9A0;
extern unsigned char lbl_8329E9D4;

Table_825D9788 *fn_825D9788(void)
{
  if (!lbl_8329E9D4) {
    fn_82592340(&lbl_8329E9A0);
    lbl_8329E9A0.f[0] = fn_825D9770;
    lbl_8329E9A0.f[1] = fn_8257D470;
    lbl_8329E9A0.f[2] = fn_8257D680;
    lbl_8329E9A0.f[3] = fn_8261C588;
    lbl_8329E9A0.f[5] = fn_8261C808;
    lbl_8329E9A0.f[6] = fn_825D2D60;
    lbl_8329E9D4 = 1;
  }
  return &lbl_8329E9A0;
}
