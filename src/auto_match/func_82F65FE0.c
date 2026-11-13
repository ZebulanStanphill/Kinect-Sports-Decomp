#define true 1
extern unsigned int *auStack_154;
extern unsigned int *auStack_d4;
extern int fn_82F63BA0();
extern int fn_82F68240();


void fn_82F65FE0(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3,int (**param_4)())

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned char *puVar9;
  unsigned __int64 uVar8;
  __int64 lVar10;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned int auStack_154 [32];
  unsigned int auStack_d4 [53];
  
  if (((((param_1 & 0xffffffff) == 0) && (param_2 != 0)) || ((param_3 & 0xffffffff) == 0)) ||
     (param_4 == (int (**)())0x0)) {
    puVar5 = (unsigned int *)fn_82F68240();
    *puVar5 = 0x16;
    fn_82F63BA0();
  }
  else if (1 < param_2) {
    lVar10 = 0;
    puVar12 = auStack_d4;
    uVar14 = (__int64)(int)(param_2 - 1) * (__int64)(int)param_3 + param_1;
    puVar11 = auStack_154;
LAB_82f66058:
    while( true ) {
      trapWord(6,param_3,0);
      uVar7 = (uVar14 - param_1 & 0xffffffff) / (param_3 & 0xffffffff) + 1;
      if ((uVar7 & 0xffffffff) < 9) break;
      uVar7 = (__int64)(int)((unsigned int)uVar7 >> 1) * (__int64)(int)param_3 + param_1;
      iVar6 = (*param_4)(param_1,uVar7);
      uVar3 = (unsigned int)param_1;
      if ((0 < iVar6) && ((param_1 & 0xffffffff) != (uVar7 & 0xffffffff))) {
        iVar6 = uVar3 - (int)uVar7;
        uVar15 = uVar7;
        uVar16 = param_3;
        do {
          puVar9 = (unsigned char *)uVar15;
          uVar1 = puVar9[iVar6];
          puVar9[iVar6] = *puVar9;
          *puVar9 = uVar1;
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      iVar6 = (*param_4)(param_1,uVar14);
      uVar2 = (unsigned int)uVar14;
      if ((0 < iVar6) && ((param_1 & 0xffffffff) != (uVar14 & 0xffffffff))) {
        uVar15 = uVar14;
        uVar16 = param_3;
        do {
          puVar9 = (unsigned char *)uVar15;
          uVar1 = puVar9[uVar3 - uVar2];
          puVar9[uVar3 - uVar2] = *puVar9;
          *puVar9 = uVar1;
          uVar15 = uVar15 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      iVar6 = (*param_4)(uVar7,uVar14);
      uVar15 = uVar14;
      uVar16 = param_1;
      if ((0 < iVar6) && ((uVar7 & 0xffffffff) != (uVar14 & 0xffffffff))) {
        iVar6 = (int)uVar7 - uVar2;
        uVar8 = uVar14;
        uVar17 = param_3;
        do {
          puVar9 = (unsigned char *)uVar8;
          uVar1 = puVar9[iVar6];
          puVar9[iVar6] = *puVar9;
          *puVar9 = uVar1;
          uVar8 = uVar8 + 1;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
LAB_82f661ec:
      if ((uVar16 & 0xffffffff) < (uVar7 & 0xffffffff)) {
        do {
          uVar16 = uVar16 + param_3;
          if ((uVar7 & 0xffffffff) <= (uVar16 & 0xffffffff)) goto LAB_82f66220;
          iVar6 = (*param_4)(uVar16,uVar7);
        } while (iVar6 < 1);
        if ((uVar7 & 0xffffffff) <= (uVar16 & 0xffffffff)) goto LAB_82f66220;
      }
      else {
LAB_82f66220:
        do {
          uVar16 = uVar16 + param_3;
          if ((uVar14 & 0xffffffff) < (uVar16 & 0xffffffff)) break;
          iVar6 = (*param_4)(uVar16,uVar7);
        } while (iVar6 < 1);
      }
      do {
        uVar15 = uVar15 - param_3;
        if ((uVar15 & 0xffffffff) <= (uVar7 & 0xffffffff)) break;
        iVar6 = (*param_4)(uVar15,uVar7);
      } while (0 < iVar6);
      uVar4 = (unsigned int)uVar16;
      if ((uVar16 & 0xffffffff) <= (uVar15 & 0xffffffff)) {
        if ((uVar16 & 0xffffffff) != (uVar15 & 0xffffffff)) {
          iVar6 = uVar4 - (int)uVar15;
          uVar8 = uVar15;
          uVar17 = param_3;
          do {
            puVar9 = (unsigned char *)uVar8;
            uVar1 = puVar9[iVar6];
            puVar9[iVar6] = *puVar9;
            *puVar9 = uVar1;
            uVar8 = uVar8 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
        if ((uVar7 & 0xffffffff) == (uVar15 & 0xffffffff)) {
          uVar7 = uVar16;
        }
        goto LAB_82f661ec;
      }
      uVar15 = uVar15 + param_3;
      if ((uVar7 & 0xffffffff) < (uVar15 & 0xffffffff)) {
        do {
          uVar15 = uVar15 - param_3;
          if ((uVar15 & 0xffffffff) <= (uVar7 & 0xffffffff)) goto LAB_82f662e0;
          iVar6 = (*param_4)(uVar15,uVar7);
        } while (iVar6 == 0);
        if ((uVar15 & 0xffffffff) <= (uVar7 & 0xffffffff)) goto LAB_82f662e0;
      }
      else {
LAB_82f662e0:
        do {
          uVar15 = uVar15 - param_3;
          if ((uVar15 & 0xffffffff) <= (param_1 & 0xffffffff)) break;
          iVar6 = (*param_4)(uVar15,uVar7);
        } while (iVar6 == 0);
      }
      if ((int)((unsigned int)uVar15 - uVar3) < (int)(uVar2 - uVar4)) goto LAB_82f66340;
      if ((param_1 & 0xffffffff) < (uVar15 & 0xffffffff)) {
        puVar12[1] = uVar3;
        lVar10 = lVar10 + 1;
        puVar11[1] = (unsigned int)uVar15;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      }
      param_1 = uVar16;
      puVar13 = puVar12;
      if ((uVar14 & 0xffffffff) <= (uVar16 & 0xffffffff)) goto LAB_82f660f0;
    }
    puVar13 = puVar12;
    if ((param_1 & 0xffffffff) < (uVar14 & 0xffffffff)) {
      do {
        uVar7 = param_1;
        uVar15 = param_1 + param_3;
        if ((param_1 + param_3 & 0xffffffff) <= (uVar14 & 0xffffffff)) {
          do {
            iVar6 = (*param_4)(uVar15,uVar7);
            if (0 < iVar6) {
              uVar7 = uVar15;
            }
            uVar15 = uVar15 + param_3;
          } while ((uVar15 & 0xffffffff) <= (uVar14 & 0xffffffff));
        }
        if ((uVar7 & 0xffffffff) != (uVar14 & 0xffffffff)) {
          iVar6 = (int)uVar7 - (int)uVar14;
          uVar7 = uVar14;
          uVar15 = param_3;
          do {
            puVar9 = (unsigned char *)uVar7;
            uVar1 = puVar9[iVar6];
            puVar9[iVar6] = *puVar9;
            *puVar9 = uVar1;
            uVar7 = uVar7 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        uVar14 = uVar14 - param_3;
      } while ((param_1 & 0xffffffff) < (uVar14 & 0xffffffff));
    }
    goto LAB_82f660f0;
  }
  return;
LAB_82f66340:
  if ((uVar16 & 0xffffffff) < (uVar14 & 0xffffffff)) {
    puVar12 = puVar12 + 1;
    *puVar12 = uVar4;
    lVar10 = lVar10 + 1;
    puVar11 = puVar11 + 1;
    *puVar11 = uVar2;
  }
  uVar14 = uVar15;
  puVar13 = puVar12;
  if ((uVar15 & 0xffffffff) <= (param_1 & 0xffffffff)) {
LAB_82f660f0:
    lVar10 = lVar10 + -1;
    puVar12 = puVar13 + -1;
    if (lVar10 < 0) {
      return;
    }
    param_1 = (unsigned __int64)*puVar13;
    uVar14 = (unsigned __int64)*puVar11;
    puVar11 = puVar11 + -1;
  }
  goto LAB_82f66058;
}

