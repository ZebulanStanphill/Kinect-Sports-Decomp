extern int fn_82CE5410();
extern int fn_83082030();


void fn_82D8F7E0(unsigned int *param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  unsigned short uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int aiStack_50;
  
  uVar2 = *(unsigned int *)(param_4 + 4);
  uVar11 = (unsigned __int64)uVar2;
  piVar4 = (int *)fn_82CE5410();
  iVar3 = *piVar4;
  *piVar4 = (uVar2 * 4 + 0x7f & 0xffffff80) + iVar3;
  if (0 < (int)uVar2) {
    iVar7 = 0;
    uVar12 = uVar11;
    do {
      *(unsigned int *)(iVar7 + iVar3) = 0;
      iVar7 = iVar7 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  iVar5 = 1;
  iVar7 = 0;
  if (0 < param_2[1]) {
    iVar6 = 0;
    do {
      uVar1 = *(unsigned short *)(*(int *)(*param_2 + iVar6) + 0xec);
      uVar8 = (unsigned int)uVar1;
      if ((unsigned int)*(unsigned char *)(param_3 + 0x306) == (int)(unsigned int)uVar1 >> 0xe) {
        uVar8 = (int)(unsigned int)uVar1 >> 7;
      }
      uVar1 = *(unsigned short *)(*(int *)(*param_2 + iVar6) + 0xea);
      uVar9 = (unsigned int)uVar1;
      if ((unsigned int)*(unsigned char *)(param_3 + 0x305) == (int)(unsigned int)uVar1 >> 0xe) {
        uVar9 = (int)(unsigned int)uVar1 >> 7;
      }
      uVar10 = uVar8 & 0x7f;
      if ((uVar8 & 0x7f) < (uVar9 & 0x7f)) {
        uVar10 = uVar9 & 0x7f;
      }
      if (uVar10 < 6) {
        *(unsigned int *)(*(int *)(*(int *)*param_1 + iVar6) * 4 + iVar3) = 1;
      }
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 4;
    } while (iVar7 < param_2[1]);
  }
  *(unsigned char *)*param_5 = 1;
  if (0 < (int)uVar2) {
    iVar7 = 0;
    do {
      if (*(int *)(iVar7 + iVar3) == 0) {
        *(int *)(iVar7 + iVar3) = iVar5;
        *(unsigned char *)(*param_5 + iVar5) = 0;
        iVar5 = iVar5 + 1;
      }
      else {
        *(unsigned int *)(iVar7 + iVar3) = 0;
      }
      iVar7 = iVar7 + 4;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  aiStack_50 = iVar3;
  if ((int)uVar2 < iVar5) {
    *(unsigned char *)*param_5 = 0;
    piVar4 = (int *)fn_82CE5410();
    *piVar4 = iVar3;
  }
  else {
    fn_83082030(param_1,&aiStack_50,iVar5,param_4);
    iVar3 = aiStack_50;
    piVar4 = (int *)fn_82CE5410();
    *piVar4 = iVar3;
  }
  return;
}

