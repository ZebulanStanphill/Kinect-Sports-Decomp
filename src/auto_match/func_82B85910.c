#define true 1


unsigned __int64 fn_82B85910(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned int uVar1;
  
  while( true ) {
    uVar1 = *(unsigned int *)(((unsigned int)param_1 & 0xfffffffe) + 0x24);
    if ((uVar1 & 1) != 0) {
      return 0;
    }
    param_1 = ((unsigned __int64)uVar1 & 0xfffffffe) - 0x28;
    if (param_1 == 0) break;
    if ((param_1 & 0xffffffff) == (unsigned __int64)param_2) {
      return 1;
    }
  }
  return 0;
}

