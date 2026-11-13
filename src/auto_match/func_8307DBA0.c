int fn_8307DBA0(unsigned int param_1,int param_2)

{
  int *piVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int *piVar7;
  int iVar8;
  
  iVar5 = 0;
  iVar4 = 0;
  iVar8 = 0;
  uVar6 = 0;
  if (1 < (int)param_1) {
    piVar7 = (int *)(param_2 + -8);
    do {
      piVar1 = piVar7 + 3;
      uVar6 = uVar6 + 2;
      pbVar2 = (unsigned char *)(piVar7 + 4);
      pbVar3 = (unsigned char *)(piVar7 + 7);
      piVar7 = piVar7 + 6;
      iVar5 = (*piVar1 + 0x80) * (unsigned int)*pbVar2 * 2 + iVar5;
      iVar4 = (*piVar7 + 0x80) * (unsigned int)*pbVar3 * 2 + iVar4;
    } while (uVar6 < param_1 - 1);
  }
  if (uVar6 < param_1) {
    param_2 = uVar6 * 0xc + param_2;
    iVar8 = (*(int *)(param_2 + 4) + 0x80) * (unsigned int)*(unsigned char *)(param_2 + 8) * 2;
  }
  return iVar4 + iVar5 + iVar8 + (param_1 * 0x60 + 0x8f & 0xffffff80);
}

