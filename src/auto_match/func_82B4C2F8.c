void fn_82B4C2F8(int *param_1)

{
  int iVar1;
  
  if ((((unsigned int *)*param_1)[1] & 1) == 0) {
    iVar1 = (*(unsigned int *)*param_1 & 0xfffffffe) - 4;
  }
  else {
    iVar1 = 0;
  }
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 8);
  }
  param_1[2] = iVar1;
  return;
}

