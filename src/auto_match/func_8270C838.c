int fn_8270C838(int param_1)

{
  int lVar1;
  
  if (*(int *)(param_1 + 0x10) == 1) {
    lVar1 = ((unsigned int)*(unsigned __int64 *)(param_1 + 0x20) - *(unsigned int *)(param_1 + 0x18)) +
            *(unsigned int *)(param_1 + 0x14);
  }
  else {
    lVar1 = (*(int (**)())(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8));
    if (((int)lVar1 != -1) && (*(int *)(param_1 + 0x10) == 2)) {
      lVar1 = *(unsigned int *)(param_1 + 0x14) + lVar1;
    }
  }
  return lVar1;
}

