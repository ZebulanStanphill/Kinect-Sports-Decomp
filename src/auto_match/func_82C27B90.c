/* WARNING: Removing unreachable block (ram,0x82c27be4) */

unsigned __int64 fn_82C27B90(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  param_2[2] = 0;
  param_2[3] = 0;
  piVar2 = *(int **)(iVar1 + 0x94);
  if (*(int **)(iVar1 + 0x94) == (int *)0x0) {
    *(int **)(iVar1 + 0x94) = param_2;
    return 0;
  }
  do {
    piVar3 = piVar2;
    if (*(unsigned __int64 *)(*piVar3 + 8) <= *(unsigned __int64 *)(*param_2 + 8)) {
      param_2[2] = (int)piVar3;
      param_2[3] = piVar3[3];
      if (piVar3[3] != 0) {
        *(int **)(piVar3[3] + 8) = param_2;
        piVar3[3] = (int)param_2;
        return 0;
      }
      *(int **)(iVar1 + 0x94) = param_2;
      piVar3[3] = (int)param_2;
      return 0;
    }
    piVar2 = (int *)piVar3[2];
  } while ((int *)piVar3[2] != (int *)0x0);
  param_2[3] = (int)piVar3;
  param_2[2] = 0;
  piVar3[2] = (int)param_2;
  return 0;
}

