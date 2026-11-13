extern int fn_82F3BBD8();


int fn_82F40498(int param_1,unsigned int param_2)

{
  int uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x80070057;
  }
  else {
    uVar1 = fn_82F3BBD8(param_1);
    if (uVar1 >= 0) {
      uVar1 = 0;
      if (*(unsigned int *)(param_1 + 8) == 0) {
        uVar1 = 0xc00d36b6;
      }
      else {
        *(unsigned __int64 *)(param_1 + 0x1c) = 0x2e;
      }
    }
  }
  return uVar1;
}

