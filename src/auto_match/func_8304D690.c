extern int fn_83013E80();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_83264308;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8304D690(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((*(unsigned int *)(iVar1 + 8) & 0x10000) == 0) {
    return;
  }
  uStack_14 = *(unsigned int *)(*(int *)(iVar1 + 0x6c) + 0x20);
  uStack_1c = lbl_82002AE0;
  uStack_20 = param_2;
  uStack_18 = param_3;
  fn_83013E80(lbl_83264308,*(unsigned int *)(iVar1 + 0x50),&uStack_20,param_1 + 0x10);
  return;
}

