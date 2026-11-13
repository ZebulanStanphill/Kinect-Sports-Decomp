void fn_82B8F398(unsigned int param_1,int param_2)

{
  unsigned int uVar1;
  
  do {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30) & 0x7ffff;
    if ((1 << ((unsigned int)uVar1 & 0x1f) &
        *(unsigned int *)(((int)(uVar1 >> 5) + 1) * 4 + *(int *)(param_2 + 0x28))) != 0) {
      return;
    }
    param_1 = *(int *)(param_1 + 0x34);
  } while (param_1 != 0);
  return;
}

