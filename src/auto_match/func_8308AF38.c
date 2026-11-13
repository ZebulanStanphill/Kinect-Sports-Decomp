int  fn_8308AF38(int param_1)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa4) - (unsigned __int64)*(unsigned int *)(param_1 + 0xd0);
  return (uVar1 + (uVar1 & 0x7fffffff) * 2 & 0x1fffffff) * 8 + 0x24;
}

