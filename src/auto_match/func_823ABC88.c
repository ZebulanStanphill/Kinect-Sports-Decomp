unsigned __int64 fn_823ABC88(int param_1,int param_2)

{
  unsigned int *puVar1;
  
  for (puVar1 = *(unsigned int **)(param_1 + 0x6c);
      (puVar1 != *(unsigned int **)(param_1 + 0x70) && (*(int *)*puVar1 != param_2));
      puVar1 = puVar1 + 2) {
  }
  if (puVar1 == *(unsigned int **)(param_1 + 0x70)) {
    for (puVar1 = *(unsigned int **)(param_1 + 0x7c);
        (puVar1 != *(unsigned int **)(param_1 + 0x80) && (*(int *)*puVar1 != param_2));
        puVar1 = puVar1 + 2) {
    }
    if (puVar1 == *(unsigned int **)(param_1 + 0x80)) {
      return 0;
    }
  }
  return 1;
}

