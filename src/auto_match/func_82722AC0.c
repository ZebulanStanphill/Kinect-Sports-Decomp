void fn_82722AC0(int *param_1)

{
  unsigned int iVar1;
  
  iVar1 = (*(int (**)())(*param_1 + 0x40))();
  if (iVar1 != 0) {
    *(unsigned int *)(iVar1 + 0xb00) = *(unsigned int *)(iVar1 + 0xb00) | 0x400;
  }
  return;
}

