extern int fn_822B70F0();
extern int fn_82320B00();
extern int fn_824CCD80();
extern int fn_8252AFE0();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_822BE860(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x7dc);
    uVar2 = 0;
    *(unsigned int *)(iVar1 + 0x1c) = 0;
    fn_8252AFE0((double)ltcg_pool_0_0f,*(unsigned int *)(iVar1 + 4));
    iVar1 = *(int *)(param_1 + 0x7e4);
    *(unsigned int *)(iVar1 + 0x1c) = uVar2;
    fn_8252AFE0(*(unsigned int *)(iVar1 + 4));
    if (*(int *)(param_1 + 0x7d4) != 0) {
      fn_82320B00(*(int *)(param_1 + 0x7d4),0);
    }
    fn_824CCD80(*(unsigned int *)(param_1 + 0x24));
    fn_822B70F0((double)lbl_821CA460,param_1);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x7dc);
    uVar2 = fn_824CCD80(*(unsigned int *)(param_1 + 0x24));
    *(unsigned int *)(iVar1 + 0x20) = uVar2;
    *(unsigned int *)(iVar1 + 0x1c) = 1;
    iVar1 = *(int *)(param_1 + 0x7e4);
    uVar2 = fn_824CCD80(*(unsigned int *)(param_1 + 0x24));
    *(unsigned int *)(iVar1 + 0x20) = uVar2;
    *(unsigned int *)(iVar1 + 0x1c) = 1;
    fn_824CCD80(*(unsigned int *)(param_1 + 0x24));
    fn_822B70F0((double)ltcg_pool_0_0f,param_1);
    if (*(int *)(param_1 + 0x7d4) != 0) {
      fn_82320B00(*(int *)(param_1 + 0x7d4),1);
    }
  }
  return;
}

