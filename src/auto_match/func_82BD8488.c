unsigned __int64 fn_82BD8488(int param_1,int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  piVar4 = (int *)(param_1 + 0x188);
  uVar1 = 0;
  if ((int *)*piVar4 != (int *)0x0) {
    uVar2 = *(unsigned __int64 *)(*param_2 + 0x18);
    piVar6 = (int *)*piVar4;
    piVar3 = (int *)0x0;
    do {
      piVar5 = piVar6;
      piVar6 = piVar5;
      if (uVar2 < *(unsigned __int64 *)(*piVar5 + 0x18)) break;
      piVar6 = (int *)piVar5[1];
      piVar3 = piVar5;
    } while (piVar6 != (int *)0x0);
    if (piVar6 != (int *)0x0) {
      if (*(unsigned __int64 *)(*piVar5 + 0x18) == uVar2) {
        return 0xffffffff80004005;
      }
      if (piVar3 != (int *)0x0) {
        param_2[1] = piVar3[1];
        piVar3[1] = (int)param_2;
        return uVar1;
      }
      param_2[1] = *piVar4;
      *piVar4 = (int)param_2;
      if (*(int *)(param_1 + 0x18c) != 0) {
        return uVar1;
      }
      goto LAB_82bd8504;
    }
    if ((piVar3 != (int *)0x0) && (*(unsigned __int64 *)(*piVar3 + 0x18) == uVar2)) {
      return 0xffffffff80004005;
    }
  }
  param_2[1] = 0;
  if (*(int *)(param_1 + 0x18c) == 0) {
    *piVar4 = (int)param_2;
  }
  else {
    *(int **)(*(int *)(param_1 + 0x18c) + 4) = param_2;
  }
LAB_82bd8504:
  *(int **)(param_1 + 0x18c) = param_2;
  return uVar1;
}

