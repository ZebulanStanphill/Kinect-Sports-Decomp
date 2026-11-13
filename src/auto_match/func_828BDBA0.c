extern int fn_8265CA20();


int * fn_828BDBA0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_3;
  if (param_3 != (int *)*param_2) {
    *(int *)param_3[1] = *param_3;
    *(int *)(*param_3 + 4) = param_3[1];
    piVar2 = (int *)param_3[6];
    if (piVar2 != (int *)0x0) {
      (**(int (***)())(*piVar2 + 0xc))(piVar2,param_3 + 2 != piVar2);
      param_3[6] = 0;
    }
    fn_8265CA20(param_3);
    param_2[1] = param_2[1] + -1;
  }
  *param_1 = iVar1;
  return param_1;
}

