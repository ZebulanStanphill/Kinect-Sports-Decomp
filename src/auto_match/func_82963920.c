extern int fn_82934160();


void fn_82963920(unsigned int param_1)

{
  int iVar1;
  
  iVar1 = fn_82934160();
  *(unsigned int *)(iVar1 + 0x10) = param_1;
  *(unsigned int *)(iVar1 + 0xc) = 0;
  return;
}

