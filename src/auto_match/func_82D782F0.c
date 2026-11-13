void fn_82D782F0(unsigned int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = (unsigned __int64)(param_2 >> 4);
  uVar2 = (unsigned int)((~uVar5 & 0xffffffff) >> 2) & 1;
  uVar4 = (unsigned int)((~uVar5 & 0xffffffff) >> 3) & 1;
  uVar3 = (unsigned int)((~uVar5 & 0xffffffff) >> 1) & 1;
  if (param_3 != 0) {
    iVar1 = 1 << (uVar3 * 2 + uVar2) * 2;
    if ((iVar1 << 1 & *param_1) == 0) {
      *param_1 = *param_1 + iVar1;
    }
  }
  if (param_3 != 1) {
    iVar1 = 1 << ((uVar3 + 2) * 2 + uVar4) * 2;
    if ((iVar1 << 1 & *param_1) == 0) {
      *param_1 = *param_1 + iVar1;
    }
  }
  if (param_3 == 2) {
    return;
  }
  iVar1 = 1 << ((uVar2 + 4) * 2 + uVar4) * 2;
  if ((iVar1 << 1 & *param_1) != 0) {
    return;
  }
  *param_1 = *param_1 + iVar1;
  return;
}

