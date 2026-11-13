int * fn_824ADE60(int *param_1,__int64 param_2)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = (int)param_2;
  if (iVar5 < 1) {
    if (-1 < iVar5) {
      return param_1;
    }
    lVar3 = -param_2;
    if (lVar3 < 1) {
      if (-1 < (int)lVar3) {
        return param_1;
      }
      fn_824ADE60(param_1,param_2);
      return param_1;
    }
    piVar2 = (int *)*param_1;
    if ((piVar2[1] - param_1[1]) / 0x60 <= (int)lVar3) {
      lVar3 = lVar3 - (piVar2[1] - *piVar2) / 0x60;
    }
    iVar5 = (int)lVar3 * 0x60 + param_1[1];
    param_1[1] = iVar5;
    if (iVar5 != piVar2[3]) {
      return param_1;
    }
    iVar4 = 0;
  }
  else {
    iVar4 = param_1[1];
    if (iVar4 == 0) {
      iVar4 = *(int *)(*param_1 + 0xc);
    }
    iVar1 = *(int *)*param_1;
    if ((iVar4 - iVar1) / 0x60 < iVar5) {
      param_2 = param_2 - (((int *)*param_1)[1] - iVar1) / 0x60;
    }
    iVar4 = iVar4 + (int)param_2 * -0x60;
  }
  param_1[1] = iVar4;
  return param_1;
}

