extern int fn_82934160();


void fn_82964180(unsigned int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = fn_82934160();
    *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(iVar1 + 4);
    *(int *)(iVar1 + 4) = param_1;
  }
  return;
}

