typedef void (*Func_824FCEA0)(void);
typedef struct { Func_824FCEA0 f[13]; } Table_824FCEA0;
extern void fn_82592340(Table_824FCEA0 *self);
extern void fn_824FCE88(void);
extern void fn_824FCF28(void);
extern void fn_82BA02A8(void);
extern void fn_824FD0F0(void);
extern void fn_824FCF78(void);
extern Table_824FCEA0 lbl_8329E778;
extern unsigned char lbl_8329E7AC;

Table_824FCEA0 *fn_824FCEA0(void)
{
  if (!lbl_8329E7AC) {
    fn_82592340(&lbl_8329E778);
    lbl_8329E778.f[0] = fn_824FCE88;
    lbl_8329E778.f[1] = fn_824FCF28;
    lbl_8329E778.f[2] = fn_82BA02A8;
    lbl_8329E778.f[3] = fn_824FD0F0;
    lbl_8329E778.f[5] = fn_824FCF78;
    lbl_8329E7AC = 1;
  }
  return &lbl_8329E778;
}
