__int64 fn_823AA380(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  
  if (((unsigned int)param_2 < *(unsigned int *)(param_1 + 0x28)) && ((unsigned int)param_3 < *(unsigned int *)(param_1 + 0x28))) {
    return 0;
  }
  uVar1 = (unsigned __int64)((int)(param_2 - param_3) >> 0x1f);
  uVar1 = (param_2 - param_3 ^ uVar1) - uVar1;
  return (unsigned __int64)(*(unsigned int *)(param_1 + 0x2c) >> 0x1f) + (__int64)((int)uVar1 >> 0x1f) +
         (unsigned __int64)(*(unsigned int *)(param_1 + 0x2c) <= uVar1);
}

