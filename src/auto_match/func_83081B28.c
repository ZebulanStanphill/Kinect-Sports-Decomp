void fn_83081B28(unsigned int *param_1,unsigned int param_2,__int64 param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = (int)param_3;
  if ((int)param_3 < 1) {
    return;
  }
  iVar1 = 0;
  do {
    *(unsigned int *)(*(int *)*param_1 + iVar1) = 0xffffffff;
    iVar1 = iVar1 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

