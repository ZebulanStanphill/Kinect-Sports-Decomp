void fn_827FED08(int *param_1,unsigned int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 < *(unsigned int *)(*param_1 + 0x1c)) {
    iVar1 = *(int *)(*param_1 + 0x20) + param_2 * 0x10;
  }
  else {
    iVar1 = 0;
  }
  *param_3 = iVar1;
  return;
}

