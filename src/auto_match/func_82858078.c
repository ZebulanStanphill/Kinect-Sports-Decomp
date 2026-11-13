void fn_82858078(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 * 0x18 + param_1;
  *(unsigned int *)(iVar1 + 0x484) = (unsigned int)(param_3 == 0) << 0xb | *(unsigned int *)(iVar1 + 0x484) & 0xfffff7ff;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

