unsigned int fn_8269ABA0(int *param_1)

{
  int iVar1;
  
  iVar1 = (*(int (**)())(*param_1 + 0x40))();
  return *(unsigned int *)(iVar1 + 0xb00) >> 2 & 1;
}

