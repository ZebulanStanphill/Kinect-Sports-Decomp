void fn_8280CB08(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uVar2 = *(unsigned int *)(param_1 + 0x14);
  *param_2 = *(unsigned int *)(param_1 + 0x10);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

