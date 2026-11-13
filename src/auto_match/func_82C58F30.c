extern int fn_82C69500();


void fn_82C58F30(int param_1)

{
  unsigned int *puVar1;
  
  fn_82C69500(param_1 + 0xeb0,(int *)(param_1 + 0xeb4));
  puVar1 = *(unsigned int **)(param_1 + 0xeb0);
  if (puVar1 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0xef8) = *puVar1;
    *(unsigned int *)(param_1 + 0xefc) = puVar1[1];
    *(unsigned int *)(param_1 + 0xf00) = puVar1[2];
  }
  puVar1 = *(unsigned int **)(param_1 + 0xeb4);
  if (puVar1 != (unsigned int *)0x0) {
    *(unsigned int *)(param_1 + 0xf04) = *puVar1;
    *(unsigned int *)(param_1 + 0xf08) = puVar1[1];
    *(unsigned int *)(param_1 + 0xf0c) = puVar1[2];
  }
  return;
}

