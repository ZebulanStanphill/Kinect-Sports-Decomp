void fn_82D55BE8(unsigned int *param_1,unsigned __int64 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[3];
  iVar2 = param_1[4] * 0xc + iVar3;
  for (; iVar3 != iVar2; iVar3 = iVar3 + 0xc) {
    piVar1 = *(int **)(iVar3 + 8);
    if (piVar1 != (int *)0x0) {
      (**(int (***)())(*piVar1 + 0x1c))(piVar1,param_2);
    }
  }
  (**(int (***)())*param_1)(param_1,1);
  return;
}

