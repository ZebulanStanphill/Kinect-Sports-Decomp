extern int fn_82820EF8();


void fn_8282B828(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  
  if (*(int *)(param_2 + 0x10) != 0) {
    uVar1 = 0;
    if (*(int *)(param_2 + 0x1c) != 0) {
      do {
        fn_82820EF8((__int64)*(int *)(param_2 + 0x24) * (__int64)(int)uVar1 +
                     (unsigned __int64)*(unsigned int *)(param_2 + 0x18),*(unsigned int *)(param_2 + 0x20));
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(unsigned int *)(param_2 + 0x1c));
    }
  }
  return;
}

