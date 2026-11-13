extern int fn_82CFBBF0();


unsigned int fn_82CF1228(int param_1,unsigned __int64 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x34);
  iVar3 = 0;
  if (0 < iVar4) {
    piVar2 = *(int **)(param_1 + 0x30);
    do {
      if (*piVar2 == param_3) break;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < iVar4);
  }
  iVar3 = iVar3 + 1;
  if (iVar3 < iVar4) {
    iVar4 = iVar3 * 4;
    do {
      iVar1 = fn_82CFBBF0(param_2,*(unsigned int *)
                                    (*(int *)(iVar4 + *(int *)(param_1 + 0x30)) + 0x4c));
      if (iVar1 == 0) {
        return *(unsigned int *)(iVar3 * 4 + *(int *)(param_1 + 0x30));
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x34));
  }
  return 0;
}

