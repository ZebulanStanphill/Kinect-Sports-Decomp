unsigned __int64 fn_82CF7540(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - (unsigned __int64)*(unsigned int *)(param_1 + 4);
  return ((param_2 & 0xffffffff) >> 0x1f) + (__int64)((int)uVar1 >> 0x1f) +
         (unsigned __int64)(param_2 <= uVar1) & 0xff;
}

