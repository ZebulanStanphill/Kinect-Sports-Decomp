void fn_82B6B0C8(unsigned int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    (*(int (**)())(param_1 + 4))(*(unsigned int *)(param_1 + 8),*(unsigned int *)(param_1 + 0xc));
    iVar1 = *(int *)(param_1 + 0x1c);
    (*(int (**)())(param_1 + 4))(*(unsigned int *)(param_1 + 8),param_1);
    param_1 = iVar1;
  }
  return;
}

