unsigned __int64 fn_829651C8(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_3 + 0xbc) + 0x58);
  iVar3 = iVar4 + param_1 * 0xc;
  iVar4 = iVar4 + param_2 * 0xc;
  uVar1 = *(unsigned int *)(iVar3 + 4);
  uVar2 = *(unsigned int *)(iVar4 + 4);
  if (uVar2 <= uVar1) {
    if (uVar2 < uVar1) {
      return 1;
    }
    iVar3 = *(int *)(iVar3 + 8);
    iVar4 = *(int *)(iVar4 + 8);
    if (iVar4 <= iVar3) {
      if (iVar4 < iVar3) {
        return 1;
      }
      iVar4 = *(int *)(*(int *)(param_3 + 0xbc) + 0x58);
      uVar1 = *(unsigned int *)(iVar4 + param_2 * 0xc);
      uVar2 = *(unsigned int *)(iVar4 + param_1 * 0xc);
      if (uVar2 <= uVar1) {
        if (uVar1 <= uVar2) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0xffffffffffffffff;
}

