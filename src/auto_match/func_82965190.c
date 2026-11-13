unsigned __int64 fn_82965190(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(*(int *)(param_3 + 0xbc) + 0x58);
  uVar2 = *(unsigned int *)(param_1 * 0xc + iVar1);
  uVar3 = *(unsigned int *)(param_2 * 0xc + iVar1);
  if (uVar3 < uVar2) {
    return 0xffffffffffffffff;
  }
  return -(unsigned __int64)(uVar2 < uVar3) & 1;
}

