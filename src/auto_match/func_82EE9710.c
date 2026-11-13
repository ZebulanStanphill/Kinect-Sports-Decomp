extern int fn_82A1E658();
extern int fn_82A29A38();
extern int fn_82E4FE40();
extern int fn_82EE9FF0();


void fn_82EE9710(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    if (*(int *)(param_1 + 0x70) != 0) {
      fn_82A1E658();
      *(unsigned int *)(param_1 + 0x70) = 0;
    }
    while (*(int *)(param_1 + 0x1098) != 0) {
      piVar1 = *(int **)(param_1 + 0x109c);
      *(int *)(param_1 + 0x1098) = *(int *)(param_1 + 0x1098) + -1;
      iVar2 = *piVar1;
      piVar3 = (int *)piVar1[1];
      *piVar3 = iVar2;
      *(int **)(iVar2 + 4) = piVar3;
      if ((int *)piVar1[3] != (int *)0x0) {
        (**(int (***)())(*(int *)piVar1[3] + 8))();
        piVar1[3] = 0;
      }
      fn_82E4FE40(piVar1);
    }
    fn_82EE9FF0(param_1);
  }
  else {
    fn_82A29A38();
  }
  return;
}

