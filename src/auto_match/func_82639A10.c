void fn_82639A10(int param_1,int param_2,unsigned int param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)((param_2 + 0xc6c) * 4 + param_1);
  if (iVar1 != 0) {
    uVar2 = *(unsigned int *)(iVar1 + 0x2c) >> 6 & 0xf;
    iVar1 = (param_2 + 0x30) * 0x18 + param_1;
    if (uVar2 >= param_3) {
      uVar2 = param_3;
    }
    *(unsigned int *)(iVar1 + 0x10) = (uVar2 & 0xf) << 6 | *(unsigned int *)(iVar1 + 0x10) & 0xfffffc3f;
    *(unsigned __int64 *)(param_1 + 0x18) =
         0x8000000000000000U >> (param_2 + 0x20U) | *(unsigned __int64 *)(param_1 + 0x18);
  }
  *(char *)(param_1 + param_2 + 0x2f78) = (char)param_3;
  return;
}

