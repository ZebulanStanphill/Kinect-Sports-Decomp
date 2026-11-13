void fn_82B47660(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  if ((param_2 & 0xffffffff) == 0) {
    return;
  }
  do {
    uVar1 = *(unsigned int *)(param_1 + 4);
    uVar3 = (unsigned __int64)*(unsigned int *)(uVar1 + 8) - (unsigned __int64)*(unsigned int *)(param_1 + 8);
    uVar2 = param_2;
    if ((uVar3 & 0xffffffff) <= (param_2 & 0xffffffff)) {
      uVar2 = uVar3;
    }
    iVar4 = *(unsigned int *)(param_1 + 8) + (int)uVar2;
    *(int *)(param_1 + 8) = iVar4;
    if (iVar4 == *(int *)(uVar1 + 8)) {
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 4) = -(unsigned int)((uVar1 & 1) == 0) & uVar1;
    }
    param_2 = param_2 - uVar2;
  } while (param_2 != 0);
  return;
}

