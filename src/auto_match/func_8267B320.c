__int64 fn_8267B320(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (param_2 >= *(unsigned int *)(iVar1 + 0x19c)) {
    return 0;
  }
  return ((unsigned __int64)*(unsigned int *)(param_2 * 0xc + iVar1 + 0x1c) - (unsigned __int64)*(unsigned int *)(iVar1 + 8)) +
         (unsigned __int64)*(unsigned int *)(iVar1 + 0x10);
}

