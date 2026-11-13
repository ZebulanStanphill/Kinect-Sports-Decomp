unsigned __int64 fn_82CEB1F0(int param_1,__int64 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    uVar3 = *(unsigned int *)(iVar1 + 0x1c) + uVar3;
  }
  uVar3 = param_2 - uVar3;
  while (uVar3 = *(unsigned int *)(param_1 + 0x1c) + uVar3, (__int64)uVar3 < 0) {
    param_1 = *(int *)(param_1 + 4);
    if (param_1 == 0) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    return 1;
  }
  iVar2 = *(int *)((int)((uVar3 & 0xffffffff) << 2) + iVar1);
  if (iVar2 < 0) {
    return 1;
  }
  *param_3 = iVar1 + iVar2;
  *param_4 = (int)((uVar3 + (uVar3 & 0x7fffffff) * 2 & 0xffffffff) << 3) + *(int *)(param_1 + 0x18);
  return 0;
}

