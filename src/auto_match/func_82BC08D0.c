extern int fn_82B7BEB0();


void fn_82BC08D0(int param_1)

{
  unsigned int iVar1;
  
  while (*(unsigned int *)(param_1 + 4) != 0) {
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != 0) {
      *(unsigned int *)(param_1 + 4) = *(unsigned int *)(iVar1 + 8);
      fn_82B7BEB0(*(unsigned int *)(iVar1 + -4),iVar1 + -4);
    }
  }
  return;
}

