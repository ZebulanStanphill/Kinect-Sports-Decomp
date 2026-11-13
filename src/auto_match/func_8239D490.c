extern int fn_8239C4D8();
extern int fn_8239D518();


void fn_8239D490(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  *(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) = (float)(__int64)param_3;
  if (*(int *)(param_1 + 0x178) != 0) {
    fn_8239C4D8();
  }
  fn_8239D518(param_1,param_2);
  return;
}

