void fn_8275E9C0(int param_1,int *param_2)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  
  if (*(unsigned int *)(param_1 + 8) <= *(unsigned int *)(param_1 + 4)) {
    return;
  }
  psVar5 = *(short **)(param_1 + 0x1c);
  if (psVar5 == (short *)0x0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      uVar4 = **(unsigned int **)(param_1 + 0x20);
      *(unsigned int **)(param_1 + 0x20) = *(unsigned int **)(param_1 + 0x20) + 1;
      *(unsigned int *)(param_1 + 0x18) = 1;
      *(unsigned int *)(param_1 + 0x14) = uVar4;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = *(unsigned int *)(param_1 + 0x14);
    piVar7 = param_2 + 1;
    *param_2 = **(int **)(param_1 + 0x20);
    piVar6 = (int *)(*(int *)(param_1 + 0x20) + 4);
    *(int **)(param_1 + 0x20) = piVar6;
    param_2[1] = *piVar6;
    piVar6 = (int *)(*(int *)(param_1 + 0x20) + 4);
    *(int **)(param_1 + 0x20) = piVar6;
    if ((uVar3 & uVar2) != 0) {
      param_2[2] = *piVar6;
      piVar6 = (int *)(*(int *)(param_1 + 0x20) + 4);
      *(int **)(param_1 + 0x20) = piVar6;
      piVar7 = param_2 + 3;
      *piVar7 = *piVar6;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
    }
  }
  else {
    if (0x8000 < *(unsigned int *)(param_1 + 0x18)) {
      sVar1 = *psVar5;
      *(short **)(param_1 + 0x1c) = psVar5 + 1;
      *(int *)(param_1 + 0x14) = (int)sVar1;
      *(unsigned int *)(param_1 + 0x18) = 1;
    }
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = *(unsigned int *)(param_1 + 0x14);
    piVar7 = param_2 + 1;
    *param_2 = (int)**(short **)(param_1 + 0x1c);
    psVar5 = (short *)(*(int *)(param_1 + 0x1c) + 2);
    *(short **)(param_1 + 0x1c) = psVar5;
    param_2[1] = (int)*psVar5;
    psVar5 = (short *)(*(int *)(param_1 + 0x1c) + 2);
    *(short **)(param_1 + 0x1c) = psVar5;
    if ((uVar3 & uVar2) != 0) {
      param_2[2] = (int)*psVar5;
      psVar5 = (short *)(*(int *)(param_1 + 0x1c) + 2);
      *(short **)(param_1 + 0x1c) = psVar5;
      piVar7 = param_2 + 3;
      *piVar7 = (int)*psVar5;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2;
    }
  }
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) << 1;
  param_2[4] = (int)piVar7 + (4 - (int)param_2) >> 2;
  return;
}

