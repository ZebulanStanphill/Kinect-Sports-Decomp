unsigned __int64 fn_82FF5750(unsigned __int64 param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_2 + 0x28);
  if (piVar2 == *(int **)(param_2 + 0x2c)) {
    return 0x1d;
  }
  while (*piVar2 != param_3) {
    piVar2 = piVar2 + 1;
    if (piVar2 == *(int **)(param_2 + 0x2c)) {
      return 0x1d;
    }
  }
  if (1 < (unsigned int)(*(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x28) >> 2)) {
    *piVar2 = *(int *)(*(int *)(param_2 + 0x2c) + -4);
  }
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + -4;
  cVar1 = *(char *)(param_2 + 0x39) + -1;
  *(char *)(param_2 + 0x39) = cVar1;
  if (cVar1 != '\0') {
    return 1;
  }
  *(unsigned int *)(param_2 + 0x34) = 6;
  return 1;
}

