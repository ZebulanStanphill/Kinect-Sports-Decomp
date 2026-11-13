void fn_82838D28(int param_1,int param_2,__int64 param_3)

{
  int iVar1;
  
  iVar1 = param_2 * 0x18 + param_1;
  *(unsigned int *)(iVar1 + 0x494) = *(unsigned int *)(iVar1 + 0x494) & 0xfffffffc | (unsigned int)(param_3 != 0);
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U & 0x7f) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

