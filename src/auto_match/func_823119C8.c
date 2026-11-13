int * fn_823119C8(int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      return param_1;
    }
    uVar3 = -param_2;
    if ((__int64)uVar3 < 1) {
      if (-1 < (int)uVar3) {
        return param_1;
      }
      fn_823119C8(param_1,param_2);
      return param_1;
    }
    iVar4 = param_1[1];
    if (iVar4 == 0) {
      iVar4 = *(int *)(*param_1 + 0xc);
    }
    iVar2 = *(int *)*param_1;
    if (iVar4 - iVar2 >> 2 < (int)uVar3) {
      uVar3 = uVar3 - (__int64)(((int *)*param_1)[1] - iVar2 >> 2);
    }
    iVar4 = iVar4 - (int)((uVar3 & 0xffffffff) << 2);
  }
  else {
    piVar1 = (int *)*param_1;
    if (piVar1[1] - param_1[1] >> 2 <= iVar4) {
      param_2 = param_2 - (__int64)(piVar1[1] - *piVar1 >> 2);
    }
    iVar4 = (int)((param_2 & 0xffffffff) << 2) + param_1[1];
    param_1[1] = iVar4;
    if (iVar4 != piVar1[3]) {
      return param_1;
    }
    iVar4 = 0;
  }
  param_1[1] = iVar4;
  return param_1;
}

