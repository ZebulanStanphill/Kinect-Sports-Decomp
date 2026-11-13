void fn_82D783B8(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  uVar4 = (unsigned __int64)((int)param_2 >> 4);
  uVar1 = (unsigned int)((~uVar4 & 0xffffffff) >> 2) & 1;
  uVar2 = (unsigned int)((~uVar4 & 0xffffffff) >> 1) & 1;
  if ((param_2 & 0xf) == 0) {
    iVar3 = 1 << (uVar2 * 2 + uVar1) * 2;
    if ((iVar3 << 1 & *param_1) != 0) {
      return;
    }
    *param_1 = *param_1 + iVar3;
    return;
  }
  iVar3 = uVar2 + 2;
  if ((param_2 & 0xf) != 1) {
    iVar3 = uVar1 + 4;
  }
  iVar3 = 1 << (iVar3 * 2 + ((unsigned int)((~uVar4 & 0xffffffff) >> 3) & 1)) * 2;
  if ((iVar3 << 1 & *param_1) != 0) {
    return;
  }
  *param_1 = *param_1 + iVar3;
  return;
}

