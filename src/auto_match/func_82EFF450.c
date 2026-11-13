unsigned __int64 fn_82EFF450(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  if (((*(int *)(param_1 + 4) == 8) && (param_2 >> 3 != 0)) && (*(int *)(param_1 + 0xb08) == 0)) {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x890) + (__int64)(param_2 >> 3);
    return (unsigned __int64)(*(unsigned int *)(param_1 + 0x894) >> 0x1f) -
           (((uVar1 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar1 < *(unsigned int *)(param_1 + 0x894))) & 1;
  }
  return 1;
}

