extern int fn_82F68B7C();


void fn_82F4D448(int param_1,unsigned __int64 param_2)

{
  if ((param_2 & 0xffffffff) == 0) {
    return;
  }
  if (5 < (unsigned __int64)*(unsigned int *)(param_1 + 0x2c)) {
    return;
  }
  fn_82F68B7C(param_2,(unsigned __int64)*(unsigned int *)(param_1 + 0x2c) * 0x1c0 + -0x7cd9e790,0x1c0);
  return;
}

