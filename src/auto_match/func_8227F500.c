void fn_8227F500(int param_1)

{
  int *piVar1;
  
  if (*(int (***)())(param_1 + 4) != (int (**)())0x0) {
    (*(int (**)())(param_1 + 4))(*(unsigned int *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0xc),1);
  }
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 != (int *)0x0) {
    (*(int (**)())(*piVar1 + 4))(piVar1,*(unsigned int *)(param_1 + 0x14),1);
  }
  *(unsigned int *)(param_1 + 0x6c) = *(unsigned int *)(param_1 + 0x6c) | 4;
  return;
}

