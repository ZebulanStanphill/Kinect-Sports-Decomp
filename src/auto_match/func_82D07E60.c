typedef unsigned char bool;
#define false 0
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CFC050();


/* WARNING: Removing unreachable block (ram,0x82d07e30) */
/* WARNING: Removing unreachable block (ram,0x82d07e38) */
/* WARNING: Removing unreachable block (ram,0x82d07e40) */

void fn_82D07E60(unsigned char *param_1,unsigned int *param_2)

{
  unsigned char bVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned short *puVar5;
  __int64 lVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  bool bVar10;
  short sVar11;
  unsigned short *puVar12;
  int iVar14;
  short *psVar15;
  short sVar17;
  __int64 lVar13;
  unsigned short *puVar16;
  __int64 lVar18;
  
  if (param_1[0x14] == 0) {
    iVar8 = *(int *)(param_1 + 0xc);
    uVar4 = *(unsigned int *)(param_1 + 8);
    uVar9 = (unsigned __int64)uVar4;
    if (*param_1 == 3) {
      iVar7 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = uVar3 + uVar9;
      iVar14 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar14) {
        lVar18 = ((unsigned __int64)param_2[2] & 0x3fffffff) << 1;
        if (iVar14 < (int)lVar18) {
          lVar13 = lVar18;
        }
        fn_82CE6310(*(unsigned int *)(iVar7 + 0x10),param_2,lVar13,2);
      }
      sVar17 = 0;
      param_2[1] = param_2[1] + uVar4;
      if (0 < (int)uVar4) {
        psVar15 = (short *)(uVar3 * 2 + *param_2 + -2);
        do {
          sVar11 = sVar17 + (short)iVar8;
          sVar17 = sVar17 + 1;
          psVar15 = psVar15 + 1;
          *psVar15 = sVar11;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
    }
    else if (*param_1 == 4) {
      lVar18 = (uVar9 - 2) + (uVar9 - 2 & 0x7fffffff) * 2;
      iVar7 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = (unsigned __int64)uVar3 + lVar18;
      iVar14 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar14) {
        lVar6 = ((unsigned __int64)param_2[2] & 0x3fffffff) << 1;
        if (iVar14 < (int)lVar6) {
          lVar13 = lVar6;
        }
        fn_82CE6310(*(unsigned int *)(iVar7 + 0x10),param_2,lVar13,2);
      }
      bVar10 = false;
      psVar15 = (short *)(uVar3 * 2 + *param_2);
      param_2[1] = param_2[1] + (int)lVar18;
      if (2 < (int)uVar4) {
        lVar13 = uVar9 - 2;
        iVar8 = iVar8 + 2;
        do {
          sVar17 = (short)iVar8;
          *psVar15 = sVar17 + -2;
          if (bVar10) {
            psVar15[1] = sVar17;
            psVar15[2] = sVar17 + -1;
          }
          else {
            psVar15[1] = sVar17 + -1;
            psVar15[2] = sVar17;
          }
          psVar15 = psVar15 + 3;
          bVar10 = (bool)(bVar10 ^ 1);
          iVar8 = iVar8 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
  }
  else {
    if (param_1[0x14] != 1) {
      return;
    }
    bVar1 = *param_1;
    if (bVar1 < 3) {
      return;
    }
    if (4 < bVar1) {
      return;
    }
    uVar4 = *(unsigned int *)(param_1 + 8);
    uVar9 = (unsigned __int64)uVar4;
    puVar5 = *(unsigned short **)(param_1 + 0x18);
    if (bVar1 == 3) {
      iVar8 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = uVar3 + uVar9;
      iVar7 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar7) {
        lVar18 = ((unsigned __int64)param_2[2] & 0x3fffffff) << 1;
        if (iVar7 < (int)lVar18) {
          lVar13 = lVar18;
        }
        fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),param_2,lVar13,2);
      }
      param_2[1] = param_2[1] + uVar4;
      fn_82CFC050(((unsigned __int64)uVar3 & 0x7fffffff) * 2 + (unsigned __int64)*param_2,puVar5,uVar4 << 1);
    }
    else if (bVar1 == 4) {
      lVar18 = (uVar9 - 2) + (uVar9 - 2 & 0x7fffffff) * 2;
      iVar8 = fn_82CE5410();
      uVar3 = param_2[1];
      lVar13 = (unsigned __int64)uVar3 + lVar18;
      iVar7 = (int)lVar13;
      if ((int)(param_2[2] & 0x3fffffff) < iVar7) {
        lVar6 = ((unsigned __int64)param_2[2] & 0x3fffffff) << 1;
        if (iVar7 < (int)lVar6) {
          lVar13 = lVar6;
        }
        fn_82CE6310(*(unsigned int *)(iVar8 + 0x10),param_2,lVar13,2);
      }
      bVar10 = false;
      puVar16 = (unsigned short *)(uVar3 * 2 + *param_2);
      param_2[1] = param_2[1] + (int)lVar18;
      if (2 < (int)uVar4) {
        lVar13 = uVar9 - 2;
        do {
          puVar12 = puVar5 + 1;
          *puVar16 = *puVar5;
          if (bVar10) {
            puVar16[1] = puVar5[2];
            uVar2 = *puVar12;
          }
          else {
            puVar16[1] = *puVar12;
            uVar2 = puVar5[2];
          }
          bVar10 = (bool)(bVar10 ^ 1);
          puVar16[2] = uVar2;
          puVar16 = puVar16 + 3;
          lVar13 = lVar13 + -1;
          puVar5 = puVar12;
        } while (lVar13 != 0);
      }
    }
  }
  return;
}

