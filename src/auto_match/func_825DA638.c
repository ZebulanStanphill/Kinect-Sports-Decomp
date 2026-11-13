typedef void (*Func_825DA638)(void);
typedef struct { Func_825DA638 f[8]; } Table_825DA638;
extern void fn_825DA620(void);
extern void fn_825DA6B0(void);
extern void fn_825DA6C8(void);
extern void fn_82BA02A8(void);
extern void fn_82D7E470(void);
extern Table_825DA638 lbl_8329E474;
extern unsigned char lbl_8329E494;

Table_825DA638 *fn_825DA638(void)
{
  if (!lbl_8329E494) {
    lbl_8329E474.f[3] = fn_82BA02A8;
    lbl_8329E474.f[5] = fn_82D7E470;
    lbl_8329E474.f[7] = fn_82BA02A8;
    lbl_8329E474.f[0] = fn_825DA620;
    lbl_8329E474.f[1] = fn_825DA6B0;
    lbl_8329E474.f[2] = fn_82BA02A8;
    lbl_8329E474.f[6] = fn_825DA6C8;
    lbl_8329E494 = 1;
  }
  return &lbl_8329E474;
}
