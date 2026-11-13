typedef unsigned char bool;
extern int fn_8245A5C8();
extern int fn_8245AA30();
extern int fn_8245D538();
extern int fn_8245DD40();
extern int fn_8245E230();
extern unsigned int lbl_83276594;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_824BEEE8(__int64 param_1)

{
  unsigned int uVar1;
  int iVar2;
  char in_RESERVE;
  unsigned char in_cr0;
  
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  fn_8245E230(lbl_83276594);
  if (lbl_83276594 == 0) {
    fn_8245D538();
  }
  iVar2 = lbl_83276594;
  *(unsigned int *)(lbl_83276594 + 0x58) = 0;
  if ((*(int *)(iVar2 + 0x54) != 0) && (*(int *)(iVar2 + 0x50) == 0)) {
    fn_8245DD40();
  }
  fn_8245A5C8();
  fn_8245AA30();
  *(unsigned int *)((int)param_1 + 0xd8) = 0;
  *(unsigned int *)((int)param_1 + 0xe4) = 0xc;
  do {
    if (in_RESERVE != '\0') {
      uVar1 = storeWordConditionalIndexed(1,0,param_1 + 0xe0);
      *(unsigned int *)(param_1 + 0xe0) = uVar1;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  return;
}

