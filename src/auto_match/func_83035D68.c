extern int fn_82F68B78();


void fn_83035D68(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x10);
      (piVar1 != *(int **)(param_1 + 0x14) && (*piVar1 != param_2)); piVar1 = piVar1 + 6) {
  }
  if (piVar1 != *(int **)(param_1 + 0x14)) {
    fn_82F68B78(piVar1 + 1,param_1);
    return;
  }
  return;
}

