typedef int (*Clone_824CA800)(int *, int *);
typedef void (*Destroy_824CA800)(int *, int);

int *fn_824CA800(int *param_1, int *param_2)
{
  int iVar1;
  int *piVar2;

  if (param_1 != param_2) {
    piVar2 = (int *)param_1[4];
    if (piVar2 != (int *)0x0) {
      (*(Destroy_824CA800 *)(*piVar2 + 0xc))(piVar2, piVar2 != param_1);
      param_1[4] = 0;
    }
    if ((int *)param_2[4] == (int *)0x0) {
      param_1[4] = 0;
    }
    else {
      if ((int *)param_2[4] == param_2) {
        iVar1 = (*(Clone_824CA800 *)*(int *)param_2[4])((int *)param_2[4], param_1);
      } else {
        iVar1 = (*(Clone_824CA800 *)*(int *)param_2[4])((int *)param_2[4], 0);
      }
      param_1[4] = iVar1;
    }
  }
  return param_1;
}
