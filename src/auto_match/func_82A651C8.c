#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A64E30();
extern int _blkmov();
extern unsigned int lbl_82002AE0;
extern unsigned int uStack_70;


void fn_82A651C8(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  float *pfVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  float *pfVar12;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  unsigned __int64 uStack_70;
  
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)param_1[3])) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  uVar18 = 0;
  uVar14 = (unsigned __int64)(unsigned int)param_1[6];
  puVar2 = (unsigned int *)*param_1;
  uVar13 = ZEXT48(puVar2);
  lVar16 = (unsigned __int64)(unsigned int)param_1[2] + 8;
  dVar20 = (double)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
  uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)(float)param_1[4])) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar15 = (unsigned __int64)(((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF);
  iVar8 = param_1[1];
  uVar3 = param_1[7];
  uVar4 = param_1[9];
  uVar19 = (unsigned __int64)uVar4;
  dVar22 = (double)((float)param_1[4] - (float)(__int64)(int)(((unsigned __int64)(uStack_70) >> 32) & 0xFFFFFFFF));
  puVar17 = (unsigned int *)lVar16;
  if (uVar14 != 0) {
    *puVar17 = *puVar2;
  }
  dVar23 = (double)lbl_82002AE0;
  if ((int)uVar4 < 1) {
    pfVar12 = (float *)(iVar8 + -4);
    do {
      if (uVar3 <= uVar18) break;
      uVar18 = uVar18 + 1;
      pfVar5 = (float *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar17);
      uVar19 = uVar15 + uVar19;
      dVar21 = (double)pfVar5[-1];
      pfVar12 = pfVar12 + 1;
      *pfVar12 = (float)((double)(float)((double)*pfVar5 - dVar21) * dVar20 + dVar21);
      for (dVar20 = dVar22 + dVar20; dVar20 = (double)(float)dVar20, dVar23 <= dVar20;
          dVar20 = dVar20 - dVar23) {
        uVar19 = uVar19 + 1;
      }
    } while ((int)uVar19 < 1);
    uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)dVar20)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
  }
  pfVar12 = (float *)(uVar18 * 4 + iVar8);
  if (((unsigned int)pfVar12 & 0xc) != 0) {
    if (uVar3 - uVar18 < 0x10) goto LAB_82a65368;
    do {
      uVar18 = uVar18 + 1;
      pfVar5 = (float *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar2);
      uVar19 = uVar15 + uVar19;
      dVar21 = (double)pfVar5[-1];
      *pfVar12 = (float)((double)(float)((double)*pfVar5 - dVar21) * dVar20 + dVar21);
      dVar20 = dVar22 + dVar20;
      pfVar12 = pfVar12 + 1;
      while( true ) {
        uStack_70 = ((((unsigned __int64)(uStack_70)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((float)dVar20)) & ((unsigned __int64)0xFFFFFFFF)) << 0));
        dVar20 = (double)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
        if (dVar20 < dVar23) break;
        dVar20 = dVar20 - dVar23;
        uVar19 = uVar19 + 1;
      }
    } while (((unsigned int)pfVar12 & 0xc) != 0);
  }
  if (0xf < uVar3 - uVar18) {
    uVar4 = uVar3 - uVar18 & 0xfffffff0;
    lVar6 = fn_82A64E30((uVar19 & 0x3fffffff) * 4 + uVar13 + -4,uVar18 * 4 + iVar8,uVar4,
                              &uStack_70);
    dVar20 = (double)(((unsigned __int64)(uStack_70) >> 0) & 0xFFFFFFFF);
    uVar18 = uVar4 + uVar18;
    uVar19 = lVar6 + uVar19;
  }
LAB_82a65368:
  if (uVar18 < uVar3) {
    iVar9 = uVar3 - uVar18;
    pfVar12 = (float *)(uVar18 * 4 + iVar8 + -4);
    do {
      uVar7 = uVar19 & 0xffffffff;
      uVar19 = uVar15 + uVar19;
      pfVar5 = (float *)((int)(uVar7 << 2) + (int)puVar2);
      dVar21 = (double)pfVar5[-1];
      pfVar12 = pfVar12 + 1;
      *pfVar12 = (float)((double)(float)((double)*pfVar5 - dVar21) * dVar20 + dVar21);
      for (dVar20 = dVar22 + dVar20; dVar20 = (double)(float)dVar20, dVar23 <= dVar20;
          dVar20 = dVar20 - dVar23) {
        uVar19 = uVar19 + 1;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  if ((int)uVar19 < (int)(uVar14 - 1)) {
    uVar19 = uVar14 - 1;
  }
  uStack_70 = (unsigned __int64)(unsigned int)(float)dVar20 << 0x20;
  uVar15 = (uVar19 - uVar14) - 1;
  param_1[3] = (float)dVar20;
  param_1[9] = (int)(uVar19 - uVar14);
  iVar8 = (int)-uVar14;
  if ((int)uVar15 < iVar8) {
    if (3 < iVar8 - (int)uVar15) {
      lVar10 = (uVar15 & 0x3fffffff) * 4 + lVar16 + -4;
      lVar6 = ((uVar15 + uVar14) - 3 & 0x3fffffff) * 4 + lVar16;
      do {
        uVar7 = uVar14 + 2 + uVar15;
        iVar9 = (int)lVar10;
        *(unsigned int *)(iVar9 + 4) = *(unsigned int *)((int)lVar6 + 0xc);
        uVar19 = uVar14 + 3 + uVar15;
        lVar6 = lVar6 + 0x10;
        *(unsigned int *)(iVar9 + 8) = *(unsigned int *)lVar6;
        uVar15 = uVar15 + 4;
        *(unsigned int *)(iVar9 + 0xc) =
             *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar17);
        lVar10 = lVar10 + 0x10;
        *(unsigned int *)lVar10 = *(unsigned int *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar17);
      } while ((int)uVar15 < iVar8 + -3);
    }
    if ((int)uVar15 < iVar8) {
      lVar11 = -uVar14 - uVar15;
      lVar10 = (uVar15 & 0x3fffffff) * 4 + lVar16 + -4;
      lVar6 = (uVar15 + uVar14 & 0x3fffffff) * 4 + lVar16 + -4;
      uVar15 = lVar11 + uVar15;
      do {
        lVar6 = lVar6 + 4;
        lVar10 = lVar10 + 4;
        *(unsigned int *)lVar10 = *(unsigned int *)lVar6;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
  }
  if (3 < -(int)uVar15) {
    lVar11 = ((-uVar15 - 4 & 0xffffffff) >> 2) + 1;
    lVar10 = (uVar15 & 0x3fffffff) * 4 + lVar16 + -4;
    lVar6 = ((uVar15 + uVar14) - 3 & 0x3fffffff) * 4 + uVar13;
    do {
      uVar7 = uVar14 + 2 + uVar15;
      iVar8 = (int)lVar6;
      uVar19 = uVar14 + 3 + uVar15;
      lVar6 = lVar6 + 0x10;
      uVar1 = *(unsigned int *)lVar6;
      iVar9 = (int)lVar10;
      *(unsigned int *)(iVar9 + 4) = *(unsigned int *)(iVar8 + 0xc);
      *(unsigned int *)(iVar9 + 8) = uVar1;
      uVar15 = uVar15 + 4;
      uVar1 = *(unsigned int *)((int)((uVar19 & 0xffffffff) << 2) + (int)puVar2);
      *(unsigned int *)(iVar9 + 0xc) = *(unsigned int *)((int)((uVar7 & 0xffffffff) << 2) + (int)puVar2)
      ;
      lVar10 = lVar10 + 0x10;
      *(unsigned int *)lVar10 = uVar1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((int)uVar15 < 0) {
    _blkmov((uVar15 & 0x3fffffff) * 4 + lVar16,(uVar15 + uVar14 & 0x3fffffff) * 4 + uVar13,
                 (-uVar15 & 0x3fffffff) << 2);
  }
  return;
}

