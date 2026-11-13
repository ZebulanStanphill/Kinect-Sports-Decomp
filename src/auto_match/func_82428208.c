__int64 fn_82428208(int param_1,int param_2)

{
  unsigned int uVar1;
  
  uVar1 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1f0;
  return ((unsigned __int64)*(unsigned int *)(param_2 + 0x40) -
         (__int64)(int)(*(unsigned int *)(param_2 + 0x40) / uVar1) * (__int64)(int)uVar1) * 0x1f0 +
         (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
}

