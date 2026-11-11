/* LTCG match: exactly 100.0% only when linked with /LTCG against fn_82592340
   (a void constructor that leaves r3 alone), like its sibling fn_825D9988.
   Check: km/k try func_824FDD30 --ltcg km/agents/work/func_82592340.c */
typedef void (*Func_824FDD30)(void);
typedef struct { Func_824FDD30 f[13]; } Table_824FDD30;
extern void fn_82592340(Table_824FDD30 *self);
extern void fn_824FDD18(void);
extern void fn_824FDDC0(void);
extern void fn_82BA02A8(void);
extern void fn_824FE490(void);
extern void fn_824FDF40(void);
extern void fn_825D9AD8(void);
extern Table_824FDD30 lbl_8329E708;
extern unsigned char lbl_8329E73C;

Table_824FDD30 *fn_824FDD30(void)
{
  if (!lbl_8329E73C) {
    fn_82592340(&lbl_8329E708);
    lbl_8329E708.f[0] = fn_824FDD18;
    lbl_8329E708.f[1] = fn_824FDDC0;
    lbl_8329E708.f[2] = fn_82BA02A8;
    lbl_8329E708.f[3] = fn_824FE490;
    lbl_8329E708.f[5] = fn_824FDF40;
    lbl_8329E708.f[6] = fn_825D9AD8;
    lbl_8329E73C = 1;
  }
  return &lbl_8329E708;
}
