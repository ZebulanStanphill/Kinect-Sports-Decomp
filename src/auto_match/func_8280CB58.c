void fn_8280CB58(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x38);
  uVar2 = *(unsigned int *)(param_1 + 0x34);
  *param_2 = *(unsigned int *)(param_1 + 0x30);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

