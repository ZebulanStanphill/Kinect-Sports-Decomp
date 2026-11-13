extern int fn_82924628();
extern int fn_829252C0();
extern int fn_82B90378();
extern unsigned int lbl_82005328;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82925CE8(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  __int64 lVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  __int64 lVar17;
  __int64 lVar18;
  int iVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  __int64 lVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_829252C0(param_1,param_4);
  }
  uVar15 = *(unsigned int *)(param_1 + 0x68);
  iVar13 = *(int *)(param_1 + 0x60);
  iVar19 = *(int *)(param_1 + 100);
  uVar14 = *(unsigned int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  dVar31 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar22 = 0;
    uVar23 = 1;
  }
  else {
    uVar22 = (unsigned __int64)uVar15 - 1;
    uVar23 = 0xffffffffffffffff;
  }
  dVar30 = dVar31;
  dVar25 = dVar31;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar11 = lbl_8202EE40;
  fVar10 = lbl_82005CCC;
  fVar9 = lbl_82005328;
  uVar21 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar12 = (uVar23 & 0xfffffff) * 0x10;
    lVar16 = (uVar23 + uVar22 & 0xfffffff) << 4;
    lVar24 = ((__int64)(int)(uVar15 - 1) * (__int64)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (__int64)iVar13 * (__int64)(int)param_2 + (__int64)iVar19 * (__int64)(int)param_3 +
             (unsigned __int64)uVar14 + (uVar23 & 0x3fffffff) * -4;
    lVar18 = (uVar22 & 0xfffffff) << 4;
    dVar27 = (double)lbl_8200D8DC;
    dVar28 = (double)lbl_820288E0;
    lVar17 = (uVar22 - uVar23 & 0xfffffff) << 4;
    dVar29 = (double)lbl_820288C8;
    do {
      iVar19 = (int)lVar18;
      iVar13 = param_4 + 8 + iVar19;
      fVar1 = *(float *)((uVar21 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)((double)*(float *)(param_4 + 8 + iVar19) + dVar31) * fVar10;
      fVar4 = (float)((double)*(float *)(iVar13 + -8) + dVar25) * fVar10;
      fVar5 = (float)((double)*(float *)(iVar13 + -4) + dVar30) * fVar10;
      uVar15 = (unsigned int)(fVar3 + fVar1);
      iVar13 = (int)(fVar4 + fVar1);
      uVar14 = (unsigned int)(fVar5 + fVar1);
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar7 = (int)lVar17;
        iVar6 = iVar7 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar4 - (float)(__int64)iVar13) * fVar9);
        *(float *)(iVar6 + 0x10) = (float)(dVar25 * dVar29 + (double)*(float *)(iVar6 + 0x10));
        dVar31 = (double)((fVar5 - (float)(__int64)(int)uVar14) * fVar9);
        iVar6 = iVar19 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)((fVar3 - (float)(__int64)(int)uVar15) * fVar9);
        dVar30 = (double)(float)(dVar31 * dVar11);
        *(float *)(iVar6 + 0x10) = (float)(dVar25 * dVar28 + (double)*(float *)(iVar6 + 0x10));
        iVar8 = (int)lVar16;
        iVar6 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x10) = (float)(dVar25 * dVar27 + (double)*(float *)(iVar6 + 0x10));
        iVar6 = iVar7 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar31 * dVar29 + (double)*(float *)(iVar6 + 0x14));
        iVar6 = iVar19 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar31 * dVar28 + (double)*(float *)(iVar6 + 0x14));
        iVar6 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar31 * dVar27 + (double)*(float *)(iVar6 + 0x14));
        iVar7 = iVar7 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x18) = (float)(dVar26 * dVar29 + (double)*(float *)(iVar7 + 0x18));
        iVar19 = iVar19 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)(float)(dVar25 * dVar11);
        *(float *)(iVar19 + 0x18) = (float)(dVar26 * dVar28 + (double)*(float *)(iVar19 + 0x18));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar26 * dVar27 + (double)*(float *)(iVar8 + 0x18));
        dVar31 = (double)(float)(dVar26 * dVar11);
      }
      iVar19 = iVar13;
      if (0xfe < iVar13) {
        iVar19 = 0xff;
      }
      if (iVar19 < 1) {
        iVar13 = 0;
      }
      else if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      uVar20 = uVar14;
      if (0xfe < (int)uVar14) {
        uVar20 = 0xff;
      }
      if ((int)uVar20 < 1) {
        uVar14 = 0;
      }
      else if (0xfe < (int)uVar14) {
        uVar14 = 0xff;
      }
      uVar20 = uVar15;
      if (0xfe < (int)uVar15) {
        uVar20 = 0xff;
      }
      if ((int)uVar20 < 1) {
        uVar15 = 0;
      }
      else if (0xfe < (int)uVar15) {
        uVar15 = 0xff;
      }
      uVar21 = uVar21 + 1;
      lVar18 = lVar12 + lVar18;
      lVar17 = lVar12 + lVar17;
      lVar16 = lVar12 + lVar16;
      lVar24 = lVar24 + (uVar23 & 0x3fffffff) * 4;
      *(unsigned int *)lVar24 = (iVar13 << 8 | uVar14) << 8 | uVar15;
    } while (uVar21 < *(unsigned int *)(param_1 + 0x68));
  }
  return;
}

