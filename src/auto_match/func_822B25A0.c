extern int fn_8257A9F0();


void fn_822B25A0(int param_1,unsigned int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 300);
      (piVar1 != *(int **)(param_1 + 0x130) && (*piVar1 != param_2)); piVar1 = piVar1 + 1) {
  }
  if (piVar1 == *(int **)(param_1 + 0x130)) {
    fn_8257A9F0(param_1 + 300,&param_2);
  }
  return;
}

