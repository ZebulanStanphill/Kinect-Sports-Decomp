extern int fn_82AD6090();


void fn_82B25248(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  if ((*(unsigned int *)(param_2 + 8) >> 0x1a & 1) != 0) {
    return;
  }
  *(unsigned int *)(param_2 + 8) = *(unsigned int *)(param_2 + 8) | 0x4000000;
  if ((param_3[1] & 1) == 0) {
    uVar2 = *param_3 & 0xfffffffe;
    iVar3 = uVar2 - 4;
    if ((iVar3 != 0) && (*(int *)(uVar2 + 4) + 1U <= *(unsigned int *)(uVar2 + 8))) goto LAB_82b252b0;
  }
  iVar3 = fn_82AD6090(param_3,1);
LAB_82b252b0:
  iVar1 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = iVar1 + 1;
  *(int *)((iVar1 + 4) * 4 + iVar3) = param_2;
  return;
}

