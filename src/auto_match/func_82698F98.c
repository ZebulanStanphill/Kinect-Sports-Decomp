extern int fn_8267C498();


void fn_82698F98(int *param_1,unsigned int param_2,int param_3)

{
  int *piVar1;
  
  if ((unsigned int)param_1[1] <= param_2) {
    return;
  }
  param_1[3] = 0;
  piVar1 = (int *)(param_2 * 4 + *param_1);
  if (*piVar1 != 0) {
    fn_8267C498();
  }
  *piVar1 = param_3;
  if (param_3 != 0) {
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + 1;
  }
  return;
}

