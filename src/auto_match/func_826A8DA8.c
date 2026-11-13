__int64 fn_826A8DA8(int *param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = (__int64)(*param_1 - param_1[1] >> 4) +
          ((unsigned __int64)(unsigned int)param_1[5] - 1 & 0x7ffffff) * 0x20;
  if ((uVar1 & 0xffffffff) < (unsigned __int64)param_2) {
    return 0;
  }
  uVar1 = uVar1 - param_2;
  return (unsigned __int64)*(unsigned int *)(((unsigned int)uVar1 >> 3 & 0x1ffffffc) + param_1[4]) + (uVar1 & 0x1f) * 0x10;
}

