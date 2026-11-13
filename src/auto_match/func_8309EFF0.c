void fn_8309EFF0(unsigned char param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *(unsigned char *)(iVar1 + 3) = 3;
  *(unsigned char *)(iVar1 + 4) = param_1;
  *param_2 = iVar1 + 0x10;
  return;
}

