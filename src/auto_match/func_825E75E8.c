extern int fn_8256BDE0();
extern int fn_8265CA20();


int * fn_825E75E8(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = fn_8256BDE0(param_2,param_3 + 2);
  piVar1 = (int *)(iVar2 * 8 + *(int *)(param_2 + 0x10));
  if ((int *)piVar1[1] == param_3) {
    if ((int *)*piVar1 == param_3) {
      *piVar1 = *(int *)(param_2 + 4);
      *(unsigned int *)(iVar2 * 8 + *(int *)(param_2 + 0x10) + 4) = *(unsigned int *)(param_2 + 4);
    }
    else {
      piVar1[1] = param_3[1];
    }
  }
  else if ((int *)*piVar1 == param_3) {
    *piVar1 = *param_3;
  }
  iVar2 = *param_3;
  if (param_3 != *(int **)(param_2 + 4)) {
    *(int *)param_3[1] = iVar2;
    *(int *)(*param_3 + 4) = param_3[1];
    fn_8265CA20(param_3);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  }
  *param_1 = iVar2;
  return param_1;
}

