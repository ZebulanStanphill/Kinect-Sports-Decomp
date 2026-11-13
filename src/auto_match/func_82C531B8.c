extern unsigned int lbl_820FC060;
extern unsigned int lbl_820FC070;


void fn_82C531B8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x198) = param_2;
  iVar1 = *(int *)(&lbl_820FC060 + param_2 * 4);
  *(int *)(param_1 + 0x19c) = iVar1;
  iVar2 = *(int *)(&lbl_820FC070 + param_2 * 4);
  *(int *)(param_1 + 0x1a0) = iVar2;
  iVar1 = 1 << (iVar1 - 1U & 0x3f);
  iVar2 = 1 << (iVar2 - 1U & 0x3f);
  *(int *)(param_1 + 0x1a4) = iVar1;
  *(int *)(param_1 + 0x1a8) = iVar2;
  *(int *)(param_1 + 0x1ac) = iVar1 * 2 + -1;
  *(int *)(param_1 + 0x1b0) = iVar2 * 2 + -1;
  return;
}

