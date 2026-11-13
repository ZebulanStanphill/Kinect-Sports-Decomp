extern int fn_8265CA20();


void fn_82E1D7A0(unsigned int *param_1)

{
  unsigned int iVar1;
  
  if (*param_1 != 0) {
    fn_8265CA20(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    fn_8265CA20(param_1[1]);
    param_1[1] = 0;
  }
  while (param_1[3] != 0) {
    iVar1 = param_1[3];
    if (iVar1 != 0) {
      fn_82E1D7A0(iVar1);
      fn_8265CA20(iVar1);
      param_1[3] = 0;
    }
  }
  return;
}

