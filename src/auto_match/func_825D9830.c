typedef void (*Func_825D9830)(void);
typedef struct { Func_825D9830 f[8]; } Table_825D9830;
extern void fn_825D9818(void);
extern void fn_8261C868(void);
extern void fn_82BA02A8(void);
extern void fn_82D7E470(void);
extern Table_825D9830 lbl_83299048;
extern unsigned char lbl_83299068;

Table_825D9830 *fn_825D9830(void)
{
  if (!lbl_83299068) {
    lbl_83299048.f[0] = fn_825D9818;
    lbl_83299048.f[1] = fn_8261C868;
    lbl_83299048.f[2] = fn_82BA02A8;
    lbl_83299048.f[3] = fn_82BA02A8;
    lbl_83299048.f[5] = fn_82D7E470;
    lbl_83299048.f[6] = fn_82BA02A8;
    lbl_83299048.f[7] = fn_82BA02A8;
    lbl_83299068 = 1;
  }
  return &lbl_83299048;
}
