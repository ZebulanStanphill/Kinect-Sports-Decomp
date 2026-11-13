#define true 1


void fn_82B8F208(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  
  param_1[1] = param_2;
  *(unsigned char *)((int)param_1 + 0x19) = 0;
  if (param_2 == 0) {
    return;
  }
  if ((*(unsigned int *)(*param_1 + 0x30) >> 0x13 & 1) != 0) {
    return;
  }
  iVar1 = *(int *)(param_2 + 4);
  piVar4 = *(int **)(iVar1 + 0xc);
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar2 = *piVar4;
    if ((*(unsigned int *)(iVar2 + 0x30) >> 0x13 & 1) != 0) break;
    piVar4 = (int *)piVar4[2];
  }
  piVar4 = (int *)(*(int *)(iVar2 + 0x74) + 0x10);
  if (*piVar4 == 0) {
    return;
  }
  param_1[4] = iVar2;
  param_1[5] = iVar1;
  param_1[2] = (int)piVar4;
  while (piVar4 != (int *)0x0) {
    uVar3 = *(unsigned int *)(*(int *)param_1[2] + 0x30);
    if (((uVar3 >> 0x16 & 1) == 0) && ((uVar3 >> 0x14 & 1) != 0)) break;
    piVar4 = (int *)((int *)param_1[2])[1];
    param_1[2] = (int)piVar4;
  }
  *(unsigned char *)((int)param_1 + 0x19) = *(unsigned char *)(param_1 + 6);
  return;
}

