void fn_82F5E2E8(unsigned int *param_1,char param_2,unsigned int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  if (param_2 == '\0') {
    uVar1 = param_1[3];
    param_1[3] = (int)((unsigned __int64)uVar1 - 1);
    if ((__int64)((unsigned __int64)uVar1 - 1) < 0) {
      uVar2 = 0;
      param_1[1] = 0;
      *param_1 = 0xe;
    }
    else {
      uVar2 = param_1[1];
    }
  }
  else {
    uVar2 = 1;
    *param_1 = param_3;
    param_1[1] = 1;
    param_1[3] = 2;
  }
  param_1[2] = uVar2;
  return;
}

