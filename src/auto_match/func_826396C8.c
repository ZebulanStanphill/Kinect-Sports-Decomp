void fn_826396C8(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  
  iVar1 = (param_2 + 0x30) * 0x18 + param_1;
  *(unsigned int *)(iVar1 + 0xc) = (param_3 & 3) << 0x17 | *(unsigned int *)(iVar1 + 0xc) & 0xfe7fffff;
  *(unsigned __int64 *)(param_1 + 0x18) =
       0x8000000000000000U >> (unsigned int)(param_2 + 0x20) | *(unsigned __int64 *)(param_1 + 0x18);
  return;
}

