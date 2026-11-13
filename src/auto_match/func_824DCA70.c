extern int fn_82F68CC0();


void fn_824DCA70(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  if ((iVar1 - iVar2) / 0xd0 == param_1[4]) {
    if (param_1[4] != 0) {
      if (param_1[2] == iVar2) {
        param_1[2] = iVar1;
      }
      iVar1 = param_1[2];
      param_1[2] = iVar1 + -0xd0;
      fn_82F68CC0(iVar1 + -0xd0,param_2,0xd0);
      param_1[3] = param_1[2];
    }
  }
  else {
    if (param_1[2] == iVar2) {
      param_1[2] = iVar1;
    }
    iVar1 = param_1[2];
    iVar2 = iVar1 + -0xd0;
    param_1[2] = iVar2;
    if (iVar1 != 0xd0) {
      fn_82F68CC0(iVar2,param_2,0xd0);
    }
    param_1[4] = param_1[4] + 1;
  }
  return;
}

