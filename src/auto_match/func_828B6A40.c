extern int fn_82F63CA0();


void fn_828B6A40(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x28);
      (piVar1 != *(int **)(param_1 + 0x2c) && (*piVar1 != param_2)); piVar1 = piVar1 + 1) {
  }
  fn_82F63CA0(piVar1,piVar1 + 1,(*(int *)(param_1 + 0x2c) - (int)(piVar1 + 1) >> 2) << 2);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -4;
  return;
}

