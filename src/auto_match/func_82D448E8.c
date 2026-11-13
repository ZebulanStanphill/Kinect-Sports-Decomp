extern int fn_82F68B78();


void fn_82D448E8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    piVar2 = *(int **)(param_1 + 0x30);
    do {
      if (*piVar2 == (int)param_2) goto code_r0x82d44920;
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x34));
  }
  iVar1 = -1;
code_r0x82d44920:
  iVar3 = *(int *)(param_1 + 0x34) + -1;
  *(int *)(param_1 + 0x34) = iVar3;
  if (iVar3 != iVar1) {
    *(unsigned int *)(iVar1 * 4 + *(int *)(param_1 + 0x30)) =
         *(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0x30));
  }
  fn_82F68B78(param_2);
  return;
}

