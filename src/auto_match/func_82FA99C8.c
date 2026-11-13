extern int fn_82FACCE8();


void fn_82FA99C8(int param_1,int param_2)

{
  int iVar1;
  
  *(int *)(param_1 + 0x44) = param_2;
  iVar1 = fn_82FACCE8(*(unsigned int *)(param_1 + 0x40),param_2,1);
  if (param_2 < 0) {
    iVar1 = iVar1 - param_2;
    *(unsigned int *)(param_1 + 0x44) = 0;
  }
  *(int *)(param_1 + 0xc) = iVar1;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x20) = -iVar1;
  *(int *)(param_1 + 8) = -iVar1;
  return;
}

