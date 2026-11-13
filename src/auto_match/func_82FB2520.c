unsigned __int64 fn_82FB2520(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  if (param_3 == 0) {
    return 0x1f;
  }
  for (piVar1 = *(int **)(param_1 + 0xb8);
      (piVar1 != *(int **)(param_1 + 0xbc) && (*piVar1 != param_2)); piVar1 = piVar1 + 2) {
  }
  piVar1 = (int *)(-(unsigned int)(*(int **)(param_1 + 0xbc) != piVar1) & (unsigned int)(piVar1 + 1));
  if (piVar1 == (int *)0x0) {
    return 0x39;
  }
  *piVar1 = param_3;
  return 1;
}

