extern int fn_82F68CC0();


void fn_82C3F1B8(int param_1,int *param_2,__int64 param_3,__int64 param_4)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  short *psVar5;
  unsigned short uVar6;
  int iVar7;
  
  iVar1 = param_2[10];
  iVar2 = param_2[9];
  if (param_3 - param_4 < 1) {
    if (((int)(param_3 - param_4) < 0) && (iVar7 = 0, 0 < *param_2)) {
      psVar5 = (short *)(param_2[0xc] + -2);
      do {
        psVar3 = psVar5 + 1;
        iVar4 = param_2[8] + iVar7;
        iVar7 = iVar7 + 1;
        psVar5 = psVar5 + 1;
        *psVar5 = *psVar3 - *(short *)(iVar4 * 2 + iVar1);
      } while (iVar7 < *param_2);
    }
  }
  else {
    iVar7 = 0;
    if (0 < *param_2) {
      psVar5 = (short *)(param_2[0xc] + -2);
      do {
        psVar3 = psVar5 + 1;
        iVar4 = param_2[8] + iVar7;
        iVar7 = iVar7 + 1;
        psVar5 = psVar5 + 1;
        *psVar5 = *(short *)(iVar4 * 2 + iVar1) + *psVar3;
      } while (iVar7 < *param_2);
    }
  }
  if (param_2[8] == 0) {
    fn_82F68CC0(*param_2 * 4 + iVar2,iVar2);
    fn_82F68CC0(*param_2 * 2 + iVar1,iVar1);
    param_2[8] = *param_2 + -1;
  }
  else {
    param_2[8] = param_2[8] + -1;
  }
  iVar7 = (int)param_3;
  if (*(int *)(param_1 + 0x2d0) < iVar7) {
    *(int *)(param_2[8] * 4 + iVar2) = *(int *)(param_1 + 0x2d0);
  }
  else if (iVar7 < *(int *)(param_1 + 0x2d4)) {
    *(int *)(param_2[8] * 4 + iVar2) = *(int *)(param_1 + 0x2d4);
  }
  else {
    *(int *)(param_2[8] * 4 + iVar2) = iVar7;
  }
  if (iVar7 < 1) {
    if (iVar7 < 0) {
      *(short *)(param_2[8] * 2 + iVar1) = -*(short *)((int)param_2 + 0x1e);
      goto LAB_82c3f344;
    }
    uVar6 = 0;
  }
  else {
    uVar6 = *(unsigned short *)((int)param_2 + 0x1e);
  }
  *(unsigned short *)(param_2[8] * 2 + iVar1) = uVar6;
LAB_82c3f344:
  iVar2 = (param_2[2] + param_2[8]) * 2;
  *(short *)(iVar2 + iVar1) = *(short *)(iVar2 + iVar1) >> 2;
  iVar2 = (param_2[1] + param_2[8]) * 2;
  *(short *)(iVar2 + iVar1) = *(short *)(iVar2 + iVar1) >> 1;
  return;
}

