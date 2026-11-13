extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826DA0A0();
extern int fn_82758FE8();
extern unsigned int lbl_8200BD80;
extern unsigned int lbl_8200C128;


void fn_826D2A40(unsigned int *param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  uVar1 = 0;
  *param_1 = &lbl_8200C128;
  if (param_1[9] != 0) {
    lVar2 = 0;
    do {
      fn_82758FE8(lVar2 + (unsigned __int64)(unsigned int)param_1[8]);
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 8;
    } while (uVar1 < (unsigned int)param_1[9]);
  }
  fn_8267BE38(param_1[0xb]);
  if (param_1[0xc] != 0) {
    fn_8267C498();
  }
  fn_8267BE38(param_1[8]);
  fn_826DA0A0(param_1 + 5);
  *param_1 = &lbl_8200BD80;
  return;
}

