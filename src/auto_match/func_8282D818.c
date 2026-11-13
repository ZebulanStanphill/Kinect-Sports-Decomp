void fn_8282D818(int param_1,int *param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  
  iVar1 = (param_4 & 0xff) * 0x14 + param_1;
  *param_2 = *(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8);
  *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + param_3;
  *(int *)(iVar1 + 0x58) = param_3 + *(int *)(iVar1 + 0x58);
  return;
}

