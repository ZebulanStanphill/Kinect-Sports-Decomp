#define true 1
extern unsigned int *auStack_74;
extern unsigned int *auStack_90;
extern unsigned int *auStack_9c;


void fn_82D5F130(int param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  __int64 lVar14;
  unsigned int auStack_9c [3];
  unsigned int auStack_90 [1];
  unsigned int auStack_74 [29];

  do {
    uVar4 = param_2 + param_3 >> 1;
    iVar10 = uVar4 * 0x20 + param_1;
    lVar14 = 2;
    puVar9 = (unsigned int *)(iVar10 + -4);
    puVar13 = (unsigned int *)((int)auStack_74 + ((iVar10 + (uVar4 & 0x7ffffff) * -0x20) - param_1));
    do {
      puVar12 = puVar9 + 1;
      uVar1 = puVar9[2];
      uVar2 = puVar9[3];
      puVar9 = puVar9 + 4;
      uVar3 = *puVar9;
      puVar13[1] = *puVar12;
      puVar13[2] = uVar1;
      puVar13[3] = uVar2;
      puVar13 = puVar13 + 4;
      *puVar13 = uVar3;
      lVar14 = lVar14 + -1;
      iVar10 = param_2;
      iVar6 = param_3;
    } while (lVar14 != 0);
    do {
      puVar11 = (unsigned int *)(iVar10 * 0x20 + param_1);
      uVar4 = *puVar11;
      while (uVar4 < auStack_74[1]) {
        puVar11 = puVar11 + 8;
        iVar10 = iVar10 + 1;
        uVar4 = *puVar11;
      }
      puVar11 = (unsigned int *)(iVar6 * 0x20 + param_1);
      uVar4 = *puVar11;
      while (auStack_74[1] < uVar4) {
        puVar11 = puVar11 + -8;
        iVar6 = iVar6 + -1;
        uVar4 = *puVar11;
      }
      if (iVar6 < iVar10) break;
      if (iVar6 != iVar10) {
        iVar8 = iVar6 * 0x20 + param_1;
        puVar13 = (unsigned int *)(iVar8 + 8);
        iVar7 = iVar10 * 0x20 + param_1;
        lVar14 = 2;
        puVar9 = (unsigned int *)(iVar8 + -4);
        puVar12 = auStack_90 + 2;
        do {
          puVar5 = puVar9 + 2;
          uVar1 = puVar9[3];
          uVar3 = *(unsigned int *)((iVar8 - (int)(auStack_90 + 2)) + (int)puVar12);
          puVar9 = puVar9 + 4;
          uVar2 = *puVar9;
          puVar12[-1] = *puVar5;
          *puVar12 = uVar1;
          puVar12[-2] = uVar3;
          puVar12[1] = uVar2;
          puVar12 = puVar12 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar9 = (unsigned int *)(iVar7 + -4);
        lVar14 = 2;
        do {
          puVar13[-2] = puVar9[1];
          puVar13[-1] = puVar9[2];
          *puVar13 = *(unsigned int *)((iVar7 - iVar8) + (int)puVar13);
          puVar9 = puVar9 + 4;
          puVar13[1] = *puVar9;
          puVar13 = puVar13 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        puVar9 = auStack_9c;
        lVar14 = 2;
        puVar13 = (unsigned int *)(iVar7 + 8);
        do {
          puVar12 = puVar9 + 3;
          uVar2 = *(unsigned int *)((int)auStack_90 + -iVar7 + (int)puVar13);
          uVar3 = *(unsigned int *)((int)auStack_90 + -iVar7 + 4 + (int)puVar13);
          puVar9 = puVar9 + 4;
          uVar1 = *puVar9;
          puVar13[-2] = *puVar12;
          *puVar13 = uVar2;
          puVar13[1] = uVar3;
          puVar13[-1] = uVar1;
          puVar13 = puVar13 + 4;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
      }
      iVar6 = iVar6 + -1;
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar6);
    if (param_2 < iVar6) {
      fn_82D5F130(param_1,param_2,iVar6,param_4);
    }
    param_2 = iVar10;
    if (param_3 <= iVar10) {
      return;
    }
  } while( true );
}
