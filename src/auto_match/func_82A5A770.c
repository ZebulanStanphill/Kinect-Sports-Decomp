extern int fn_82A40B38();


void fn_82A5A770(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_1 + 0x22c); (piVar1 != (int *)0x0 && (*piVar1 != param_2));
      piVar1 = (int *)piVar1[1]) {
  }
  if (piVar1 != (int *)0x0) {
    fn_82A40B38(param_1 + 0x160,piVar1);
  }
  for (piVar1 = *(int **)(param_1 + 0x150); (piVar1 != (int *)0x0 && (*piVar1 != param_2));
      piVar1 = (int *)piVar1[1]) {
  }
  if (piVar1 != (int *)0x0) {
    fn_82A40B38(param_1 + 0x84,piVar1);
  }
  return;
}

