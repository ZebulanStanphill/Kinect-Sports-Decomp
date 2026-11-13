void fn_82DA5998(int param_1,char param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x1c);
    *param_3 = iVar1 << 3;
    param_3[1] = iVar1;
    return;
  }
  *param_3 = 0;
  param_3[1] = 0;
  return;
}

