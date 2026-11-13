__int64 fn_82BE5A70(int param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x24) + param_2;
  return ((uVar1 & 0xffffffff) >> 0x1f) + (__int64)((int)*(unsigned int *)(param_1 + 0x28) >> 0x1f) +
         (unsigned __int64)(uVar1 <= *(unsigned int *)(param_1 + 0x28));
}

