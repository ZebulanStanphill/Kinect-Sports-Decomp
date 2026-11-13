extern int fn_827B6F80();


void fn_827B7978(int param_1,int param_2,char param_3,__int64 param_4)

{
  int iVar1;
  int iVar2;
  short sVar3;
  int *piVar4;
  __int64 lVar5;
  
  iVar1 = *(int *)(param_2 + 8);
  lVar5 = (unsigned __int64)*(unsigned short *)(iVar1 + 0x1c) - param_4;
  if (param_3 == '\0') {
    piVar4 = (int *)fn_827B6F80(param_1,*(unsigned int *)(param_2 + 0x1c),
                                  (unsigned __int64)*(unsigned short *)(iVar1 + 0x18) + param_4,lVar5);
    iVar2 = *(int *)(param_2 + 0x10);
    piVar4[3] = param_2;
    piVar4[4] = iVar2;
    *(int **)(iVar2 + 0xc) = piVar4;
    *(int **)(param_2 + 0x10) = piVar4;
  }
  else {
    piVar4 = (int *)fn_827B6F80(param_1,*(unsigned int *)(param_2 + 0x1c),
                                  *(unsigned short *)(iVar1 + 0x18),lVar5);
    iVar2 = *(int *)(param_2 + 0xc);
    piVar4[4] = param_2;
    piVar4[3] = iVar2;
    *(int **)(iVar2 + 0x10) = piVar4;
    sVar3 = *(short *)(param_2 + 0x22) + (short)lVar5;
    *(int **)(param_2 + 0xc) = piVar4;
    *(short *)(param_2 + 0x22) = sVar3;
    *(short *)(iVar1 + 0x18) = sVar3;
  }
  *(short *)(iVar1 + 0x1c) = (short)param_4;
  *(short *)(param_2 + 0x24) = *(short *)(param_2 + 0x24) - (short)lVar5;
  iVar1 = *(int *)(param_1 + 0x34);
  *piVar4 = param_1 + 0x30;
  piVar4[1] = iVar1;
  **(int **)(param_1 + 0x34) = (int)piVar4;
  *(int **)(param_1 + 0x34) = piVar4;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  piVar4[6] = *(int *)(param_1 + 0x54);
  piVar4[5] = param_1 + 0x3c;
  *(int **)(*(int *)(param_1 + 0x54) + 0x14) = piVar4;
  *(int **)(param_1 + 0x54) = piVar4;
  return;
}

