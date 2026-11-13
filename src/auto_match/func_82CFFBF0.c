void fn_82CFFBF0(int *param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  
  uVar1 = *(unsigned short *)(param_3 + 0x12);
  param_1[1] = param_3;
  *param_1 = (unsigned int)uVar1 + param_2;
  return;
}

