unsigned __int64 fn_82C27AC8(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  param_2[2] = 0;
  param_2[3] = 0;
  iVar2 = *(int *)(iVar1 + 0x10);
  uVar3 = *(unsigned __int64 *)(*param_2 + 8);
  piVar4 = *(int **)(iVar2 + 8);
  if (piVar4 == (int *)0x0) {
    *(int **)(iVar2 + 8) = param_2;
    param_2[3] = iVar2;
    *(unsigned int *)(iVar1 + 0x14) = *(unsigned int *)(iVar2 + 8);
    *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
    return 0;
  }
  do {
    if (*(unsigned __int64 *)(*piVar4 + 8) <= uVar3) {
      param_2[2] = (int)piVar4;
      param_2[3] = piVar4[3];
      *(int **)(piVar4[3] + 8) = param_2;
      piVar4[3] = (int)param_2;
      *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
      return 0;
    }
    if (piVar4[2] == 0) {
      param_2[3] = (int)piVar4;
      param_2[2] = 0;
      piVar4[2] = (int)param_2;
      *(int **)(iVar1 + 0x14) = param_2;
    }
    piVar4 = (int *)piVar4[2];
  } while (piVar4 != (int *)0x0);
  *(int *)(iVar1 + 0x18) = *(int *)(iVar1 + 0x18) + 1;
  return 0;
}

