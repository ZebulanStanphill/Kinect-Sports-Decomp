unsigned int fn_82FA8600(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x194);
  *(unsigned int *)(param_1 + 0x194) = 0xffffffff;
  return uVar1;
}

