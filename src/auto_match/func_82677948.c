void fn_82677948(int param_1,unsigned int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned int uVar1;
  
  *(unsigned int *)(param_1 + 0x1c0) = param_2;
  if (param_4 == 0) {
    uVar1 = 0xffffffff;
  }
  else if (param_4 == 1) {
    uVar1 = 1;
  }
  else {
    if (2 < param_4) {
      return;
    }
    uVar1 = 6;
  }
  *(unsigned int *)(param_1 + 0x1c8) = uVar1;
  return;
}

