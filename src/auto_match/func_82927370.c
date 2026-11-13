extern int fn_82924628();
extern int fn_829252C0();
extern int fn_82B90378();
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8202706C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_821AAD20;


void fn_82927370(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  __int64 lVar13;
  unsigned int uVar14;
  int iVar15;
  __int64 lVar16;
  __int64 lVar17;
  __int64 lVar18;
  unsigned int uVar19;
  int iVar20;
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
  uVar14 = *(unsigned int *)(param_1 + 0x68);
  iVar15 = *(int *)(param_1 + 0x60);
  iVar20 = *(int *)(param_1 + 100);
  uVar2 = *(unsigned int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x34);
  dVar31 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar22 = 0;
    uVar23 = 1;
  }
  else {
    uVar22 = (unsigned __int64)uVar14 - 1;
    uVar23 = 0xffffffffffffffff;
  }
  dVar30 = dVar31;
  dVar25 = dVar31;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  dVar12 = lbl_8202EE40;
  fVar11 = lbl_82027070;
  fVar10 = lbl_8202706C;
  uVar21 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar13 = (uVar23 & 0xfffffff) * 0x10;
    lVar16 = (uVar23 + uVar22 & 0xfffffff) << 4;
    lVar24 = ((__int64)(int)(uVar14 - 1) * (__int64)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (__int64)iVar15 * (__int64)(int)param_2 + (__int64)iVar20 * (__int64)(int)param_3 +
             (unsigned __int64)uVar2 + (uVar23 & 0x7fffffff) * -2;
    lVar18 = (uVar22 & 0xfffffff) << 4;
    dVar27 = (double)lbl_8200D8DC;
    dVar28 = (double)lbl_820288E0;
    lVar17 = (uVar22 - uVar23 & 0xfffffff) << 4;
    dVar29 = (double)lbl_820288C8;
    do {
      iVar20 = (int)lVar18;
      iVar15 = param_4 + 8 + iVar20;
      fVar1 = *(float *)((uVar21 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar3);
      fVar4 = (float)((double)*(float *)(param_4 + 8 + iVar20) + dVar31) * fVar11;
      fVar5 = (float)((double)*(float *)(iVar15 + -8) + dVar25) * fVar11;
      fVar6 = (float)((double)*(float *)(iVar15 + -4) + dVar30) * fVar11;
      iVar15 = (int)(fVar4 + fVar1);
      uVar14 = (unsigned int)(fVar5 + fVar1);
      uVar2 = (unsigned int)(fVar6 + fVar1);
      uVar22 = (unsigned __int64)uVar2;
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar8 = (int)lVar17;
        iVar7 = iVar8 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)((fVar5 - (float)(__int64)(int)uVar14) * fVar10);
        *(float *)(iVar7 + 0x10) = (float)(dVar25 * dVar29 + (double)*(float *)(iVar7 + 0x10));
        dVar31 = (double)((fVar6 - (float)(__int64)(int)uVar2) * fVar10);
        iVar7 = iVar20 + *(int *)(param_1 + 0x5c);
        dVar26 = (double)((fVar4 - (float)(__int64)iVar15) * fVar10);
        dVar30 = (double)(float)(dVar31 * dVar12);
        *(float *)(iVar7 + 0x10) = (float)(dVar25 * dVar28 + (double)*(float *)(iVar7 + 0x10));
        iVar9 = (int)lVar16;
        iVar7 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x10) = (float)(dVar25 * dVar27 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar31 * dVar29 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar20 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar31 * dVar28 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar31 * dVar27 + (double)*(float *)(iVar7 + 0x14));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x18) = (float)(dVar26 * dVar29 + (double)*(float *)(iVar8 + 0x18));
        iVar20 = iVar20 + *(int *)(param_1 + 0x5c);
        dVar25 = (double)(float)(dVar25 * dVar12);
        *(float *)(iVar20 + 0x18) = (float)(dVar26 * dVar28 + (double)*(float *)(iVar20 + 0x18));
        iVar9 = iVar9 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar9 + 0x18) = (float)(dVar26 * dVar27 + (double)*(float *)(iVar9 + 0x18));
        dVar31 = (double)(float)(dVar26 * dVar12);
      }
      uVar19 = uVar14;
      if (0xe < (int)uVar14) {
        uVar19 = 0xf;
      }
      if ((int)uVar19 < 1) {
        uVar14 = 0;
      }
      else if (0xe < (int)uVar14) {
        uVar14 = 0xf;
      }
      uVar19 = uVar2;
      if (0xe < (int)uVar2) {
        uVar19 = 0xf;
      }
      if ((int)uVar19 < 1) {
        uVar22 = 0;
      }
      else if (0xe < (int)uVar2) {
        uVar22 = 0xf;
      }
      iVar20 = iVar15;
      if (0xe < iVar15) {
        iVar20 = 0xf;
      }
      if (iVar20 < 1) {
        iVar15 = 0;
      }
      else if (0xe < iVar15) {
        iVar15 = 0xf;
      }
      uVar21 = uVar21 + 1;
      lVar18 = lVar13 + lVar18;
      lVar17 = lVar13 + lVar17;
      lVar16 = lVar13 + lVar16;
      lVar24 = lVar24 + (uVar23 & 0x7fffffff) * 2;
      *(unsigned short *)lVar24 =
           (unsigned short)((((unsigned __int64)uVar14 & 0xfffffff) << 4 | uVar22) << 4) | (unsigned short)iVar15;
    } while (uVar21 < *(unsigned int *)(param_1 + 0x68));
  }
  return;
}

