void fn_8280CB30(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x28);
  uVar2 = *(unsigned int *)(param_1 + 0x24);
  *param_2 = *(unsigned int *)(param_1 + 0x20);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  return;
}

