unsigned __int64 fn_83081B60(unsigned int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar1 = *(int *)*param_1;
  iVar2 = *(int *)((int)((param_2 & 0xffffffff) << 2) + iVar1);
  iVar3 = iVar2;
  if (-1 < iVar2) {
    do {
      iVar5 = iVar3;
      iVar3 = *(int *)(iVar5 * 4 + iVar1);
    } while (-1 < iVar3);
    while (-1 < iVar2) {
      iVar3 = (int)((param_2 & 0xffffffff) << 2);
      uVar4 = *(unsigned int *)(iVar3 + iVar1);
      param_2 = (unsigned __int64)uVar4;
      *(int *)(iVar3 + iVar1) = iVar5;
      iVar1 = *(int *)*param_1;
      iVar2 = *(int *)(uVar4 * 4 + iVar1);
    }
  }
  return param_2;
}

