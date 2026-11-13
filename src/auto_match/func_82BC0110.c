extern int fn_82BC0088();


void fn_82BC0110(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  
  if (param_1[1] < param_2) {
    param_1[1] = param_2;
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 + 1;
  if (*param_1 < uVar1 + 1) {
    fn_82BC0088(param_1,uVar1);
  }
  iVar3 = (param_1[1] - param_2) + -1;
  puVar2 = (unsigned int *)(iVar3 * 4 + param_2 * 4 + param_1[2]);
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = puVar2[-1];
    puVar2 = puVar2 + -1;
  }
  *puVar2 = 0;
  return;
}

