void fn_82857E48(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  
  iVar1 = (param_2 + 0x30) * 0x18;
  *(unsigned int *)(iVar1 + param_1) = (param_3 & 7) << 10 | *(unsigned int *)(iVar1 + param_1) & 0xffffe3ff;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (param_2 + 0x20U) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

