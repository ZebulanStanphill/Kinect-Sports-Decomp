extern unsigned int *auStack_14c;
extern int fn_82F08110();
extern int memcpy();


void fn_82F081B8(unsigned __int64 param_1,int param_2,unsigned short *param_3,__int64 param_4,
                  short *param_5)

{
  unsigned short uVar1;
  short sVar2;
  unsigned short *puVar3;
  int *piVar4;
  int iVar5;
  short sVar6;
  __int64 lVar7;
  unsigned int uVar8;
  short sVar10;
  int iVar9;
  short sVar11;
  short *psVar12;
  int *piVar13;
  __int64 lVar14;
  __int64 lVar15;
  unsigned short *puVar16;
  __int64 lVar17;
  short asStack_150 [2];
  unsigned char auStack_14c [172];
  
  lVar15 = 1;
  lVar17 = param_4 + 0x80;
  piVar4 = (int *)(param_2 + 4);
  do {
    piVar13 = piVar4;
    puVar16 = param_3;
    psVar12 = param_5;
    lVar7 = lVar17;
    lVar14 = param_4;
    uVar1 = *puVar16;
    puVar3 = (unsigned short *)lVar14;
    puVar3[1] = 0;
    *puVar3 = uVar1;
    if (*piVar13 == 1) {
      iVar5 = fn_82F08110(param_1,param_2,lVar15,lVar7,puVar16);
      uVar8 = 1;
      sVar6 = 2;
      sVar10 = 0;
      iVar9 = 4;
      do {
        sVar2 = *(short *)(*(int *)(iVar9 + iVar5) * 2 + (int)lVar7);
        if (sVar2 == 0) {
          sVar10 = sVar10 + 1;
        }
        else {
          iVar9 = (int)sVar6;
          sVar11 = sVar6 + 1;
          sVar6 = sVar6 + 2;
          asStack_150[iVar9] = sVar2;
          asStack_150[sVar11] = sVar10;
          sVar10 = 0;
        }
        uVar8 = uVar8 + 1 & 0xff;
        iVar9 = uVar8 << 2;
      } while (uVar8 < 0x40);
      *psVar12 = sVar6;
      memcpy(lVar14 + 4,auStack_14c,((__int64)sVar6 - 2U & 0x7fffffff) << 1);
    }
    lVar15 = lVar15 + 1;
    param_3 = puVar16 + 8;
    lVar17 = lVar7 + 0x100;
    param_4 = lVar14 + 0x100;
    param_5 = psVar12 + 1;
    piVar4 = piVar13 + 1;
  } while ((int)lVar15 < 5);
  uVar1 = *param_3;
  puVar3[0x81] = 0;
  *(unsigned short *)(lVar14 + 0x100) = uVar1;
  if (piVar13[1] == 1) {
    iVar5 = fn_82F08110(param_1,param_2,5,lVar17,param_3);
    uVar8 = 1;
    sVar6 = 2;
    sVar10 = 0;
    iVar9 = 4;
    do {
      sVar2 = *(short *)(*(int *)(iVar9 + iVar5) * 2 + (int)lVar17);
      if (sVar2 == 0) {
        sVar10 = sVar10 + 1;
      }
      else {
        iVar9 = (int)sVar6;
        sVar11 = sVar6 + 1;
        sVar6 = sVar6 + 2;
        asStack_150[iVar9] = sVar2;
        asStack_150[sVar11] = sVar10;
        sVar10 = 0;
      }
      uVar8 = uVar8 + 1 & 0xff;
      iVar9 = uVar8 << 2;
    } while (uVar8 < 0x40);
    psVar12[1] = sVar6;
    memcpy(lVar14 + 0x104,auStack_14c,((__int64)sVar6 - 2U & 0x7fffffff) << 1);
  }
  lVar7 = lVar7 + 0x200;
  puVar3[0x100] = puVar16[0x10];
  puVar3[0x101] = 0;
  if (piVar13[2] == 1) {
    iVar5 = fn_82F08110(param_1,param_2,6,lVar7,puVar16 + 0x10);
    uVar8 = 1;
    sVar6 = 2;
    sVar10 = 0;
    iVar9 = 4;
    do {
      sVar2 = *(short *)(*(int *)(iVar9 + iVar5) * 2 + (int)lVar7);
      if (sVar2 == 0) {
        sVar10 = sVar10 + 1;
      }
      else {
        sVar11 = sVar6 + 1;
        asStack_150[sVar6] = sVar2;
        sVar6 = sVar6 + 2;
        asStack_150[sVar11] = sVar10;
        sVar10 = 0;
      }
      uVar8 = uVar8 + 1 & 0xff;
      iVar9 = uVar8 << 2;
    } while (uVar8 < 0x40);
    psVar12[2] = sVar6;
    memcpy(lVar14 + 0x204,auStack_14c,((__int64)sVar6 - 2U & 0x7fffffff) << 1);
  }
  return;
}

