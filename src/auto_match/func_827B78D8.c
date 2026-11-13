extern int fn_827B6F80();


void fn_827B78D8(int param_1,int param_2,__int64 param_3)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)fn_827B6F80(param_1,*(unsigned int *)(param_2 + 0x1c),
                                (unsigned __int64)*(unsigned short *)(param_2 + 0x22) + param_3,
                                (unsigned __int64)*(unsigned short *)(param_2 + 0x24) - param_3);
  *(short *)(param_2 + 0x24) = (short)param_3;
  *(short *)(*(int *)(param_2 + 8) + 0x1c) = (short)param_3;
  iVar1 = *(int *)(param_1 + 0x34);
  *piVar2 = param_1 + 0x30;
  piVar2[1] = iVar1;
  **(int **)(param_1 + 0x34) = (int)piVar2;
  *(int **)(param_1 + 0x34) = piVar2;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  iVar1 = *(int *)(param_2 + 0x10);
  piVar2[4] = iVar1;
  piVar2[3] = param_2;
  *(int **)(iVar1 + 0xc) = piVar2;
  *(int **)(param_2 + 0x10) = piVar2;
  piVar2[6] = *(int *)(param_1 + 0x54);
  piVar2[5] = param_1 + 0x3c;
  *(int **)(*(int *)(param_1 + 0x54) + 0x14) = piVar2;
  *(int **)(param_1 + 0x54) = piVar2;
  return;
}

