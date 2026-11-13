extern int fn_82934160();


void fn_829639F0(unsigned int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = fn_82934160();
    *(unsigned int *)(param_1 + 0x70) = *(unsigned int *)(iVar1 + 0xc);
    *(int *)(iVar1 + 0xc) = param_1;
  }
  return;
}

