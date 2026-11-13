extern int fn_82F68B78();


void fn_82DFF060(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    piVar2 = *(int **)(param_1 + 8);
    do {
      if (*piVar2 == (int)param_2) goto LAB_82dff098;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc));
  }
  iVar1 = -1;
LAB_82dff098:
  iVar3 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 != iVar1) {
    *(unsigned int *)(iVar1 * 4 + *(int *)(param_1 + 8)) =
         *(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 8));
  }
  fn_82F68B78(param_2);
  return;
}

