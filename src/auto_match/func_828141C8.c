extern int fn_82813538();
extern int fn_82813A10();
extern int fn_82813FD0();
extern unsigned int lbl_8201E080;
extern int lbl_8320A3FC[];


unsigned int * fn_828141C8(unsigned int *param_1)

{
  unsigned int uVar1;
  struct { int *a; int *b; } it;
  
  *param_1 = &lbl_8201E080;
  fn_82813FD0(param_1 + 2,0);
  fn_82813FD0(param_1 + 0x12,0);
  fn_82813FD0(param_1 + 0x22,0);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  uVar1 = KeTlsAlloc();
  param_1[0x36] = uVar1;
  fn_82813A10(lbl_8320A3FC);
  it.a = lbl_8320A3FC;
  it.b = &lbl_8320A3FC[9];
  param_1[0x32] = lbl_8320A3FC[9];
  lbl_8320A3FC[9] = (int)param_1;
  fn_82813538(&it);
  return param_1;
}

