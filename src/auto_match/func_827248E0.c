extern int fn_8268C2D0();


int fn_827248E0(int param_1,unsigned int *param_2)

{
  int *piVar1;
  unsigned int iVar2;
  
  fn_8268C2D0(param_1,*param_2);
  piVar1 = (int *)param_2[1];
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  }
  *(int *)(param_1 + 4) = *piVar1;
  return param_1;
}

