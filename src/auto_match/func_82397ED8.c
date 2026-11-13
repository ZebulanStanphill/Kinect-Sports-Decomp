typedef unsigned char bool;
#define true 1
#define false 0


unsigned __int64 fn_82397ED8(int param_1)

{
  bool bVar1;
  
  if (*(int *)(param_1 + 0x2a0) != 0) {
    if ((*(int *)(param_1 + 0x54) != 0x10) || (bVar1 = true, *(int *)(param_1 + 0x58) != 0x10)) {
      bVar1 = false;
    }
    if (((unsigned int)LZCOUNT(*(int *)(param_1 + 0x54) + -7) >> 5 != 0) || (bVar1)) {
      return 1;
    }
  }
  return 0;
}

