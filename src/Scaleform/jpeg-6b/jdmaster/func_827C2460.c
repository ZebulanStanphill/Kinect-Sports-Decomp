void finish_output_pass(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x180);
  if (*(char *)(param_1 + 0x4a) != '\0') {
    (*(int (**)())(*(int *)(param_1 + 0x1a8) + 8))();
  }
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}

