/* LTCG match: exactly 100.0% only when linked with /LTCG against fn_82591810
   (a void constructor that leaves r3 alone), like fn_825D9988 with fn_82592340.
   Check: km/k try func_824FB738 --ltcg <source of fn_82591810> */
typedef void (*Func_824FB738)(void);
typedef struct { Func_824FB738 f[11]; } Table_824FB738;
extern void fn_82591810(Table_824FB738 *self);
extern void fn_824FB720(void);
extern void fn_824FB7D8(void);
extern void fn_824FB7F0(void);
extern void fn_824FB838(void);
extern void fn_824FB8C0(void);
extern void fn_82BA02A8(void);
extern Table_824FB738 lbl_8329E524;
extern unsigned char lbl_8329E550;

Table_824FB738 *fn_824FB738(void)
{
  if (!lbl_8329E550) {
    fn_82591810(&lbl_8329E524);
    lbl_8329E524.f[0] = fn_824FB720;
    lbl_8329E524.f[1] = fn_824FB7D8;
    lbl_8329E524.f[2] = fn_824FB7F0;
    lbl_8329E524.f[3] = fn_824FB838;
    lbl_8329E524.f[5] = fn_824FB8C0;
    lbl_8329E524.f[6] = fn_82BA02A8;
    lbl_8329E524.f[7] = fn_82BA02A8;
    lbl_8329E550 = 1;
  }
  return &lbl_8329E524;
}
