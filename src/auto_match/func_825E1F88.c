typedef void (*Func_825E1F88)(void);
typedef struct { Func_825E1F88 f[8]; } Table_825E1F88;
extern void fn_825E1F70(void);
extern void fn_825E2000(void);
extern void fn_825E2048(void);
extern void fn_825E20F8(void);
extern void fn_82BA02A8(void);
extern Table_825E1F88 lbl_8329E4B4;
extern unsigned char lbl_8329E4D4;

Table_825E1F88 *fn_825E1F88(void)
{
  if (!lbl_8329E4D4) {
    lbl_8329E4B4.f[3] = fn_82BA02A8;
    lbl_8329E4B4.f[0] = fn_825E1F70;
    lbl_8329E4B4.f[1] = fn_825E2000;
    lbl_8329E4B4.f[2] = fn_82BA02A8;
    lbl_8329E4B4.f[5] = fn_825E2048;
    lbl_8329E4B4.f[6] = fn_825E20F8;
    lbl_8329E4B4.f[7] = fn_82BA02A8;
    lbl_8329E4D4 = 1;
  }
  return &lbl_8329E4B4;
}
