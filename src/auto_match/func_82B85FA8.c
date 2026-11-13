extern int fn_82B16F60();


void fn_82B85FA8(unsigned int param_1)

{
  unsigned int uVar1;
  
  uVar1 = fn_82B16F60(param_1 & 3,(param_1 & 0xffffffff) >> 2 & 3);
  uVar1 = fn_82B16F60(uVar1,(param_1 & 0xffffffff) >> 4 & 3);
  fn_82B16F60(uVar1,(param_1 & 0xffffffff) >> 6 & 3);
  return;
}

