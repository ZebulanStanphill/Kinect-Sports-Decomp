void fn_82639CF8(int param_1,int param_2,unsigned int param_3)
{
  int iVar1;
  iVar1 = (param_2 + 0x30) * 0x18 + param_1;
  *(unsigned int *)(iVar1 + 0x14) = (param_3 & 1) << 2 | *(unsigned int *)(iVar1 + 0x14) & 0xfffffffb;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (unsigned int)(param_2 + 0x20) | *(unsigned __int64 *)(param_1 + 0x18);
}
