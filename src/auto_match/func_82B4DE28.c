void fn_82B4DE28(int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  if ((((unsigned int *)*param_1)[1] & 1) == 0) {
    iVar3 = (*(unsigned int *)*param_1 & 0xfffffffe) - 4;
  }
  else {
    iVar3 = 0;
  }
  param_1[1] = iVar3;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 8);
  }
  param_1[2] = iVar3;
  if ((param_2 & 0xffffffff) == 0) {
    return;
  }
  do {
    if (param_1[2] == 0) {
      if ((*(unsigned int *)(param_1[1] & 0xfffffffe) & 1) == 0) {
        iVar3 = (*(unsigned int *)(param_1[1] & 0xfffffffe) & 0xfffffffe) - 4;
      }
      else {
        iVar3 = 0;
      }
      param_1[1] = iVar3;
      param_1[2] = *(int *)(iVar3 + 8);
    }
    uVar1 = param_1[2];
    uVar2 = param_2;
    if ((unsigned __int64)uVar1 <= (param_2 & 0xffffffff)) {
      uVar2 = (unsigned __int64)uVar1;
    }
    param_2 = param_2 - uVar2;
    param_1[2] = uVar1 - (int)uVar2;
  } while (param_2 != 0);
  return;
}

