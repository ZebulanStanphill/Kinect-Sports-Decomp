extern int fn_82924628();
extern int fn_82B8FDD0();
extern int fn_82B90378();
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8202706C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_820288C0;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE50;
extern unsigned int lbl_821AAD20;


void fn_82B944A0(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

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
  float fVar11;
  double dVar12;
  float fVar13;
  __int64 lVar14;
  unsigned int uVar15;
  int iVar16;
  __int64 lVar17;
  __int64 lVar18;
  __int64 lVar19;
  int iVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  __int64 lVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    param_4 = fn_82924628(param_1,param_4);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    param_4 = fn_82B8FDD0(param_1,param_4);
  }
  uVar15 = *(unsigned int *)(param_1 + 0x68);
  iVar16 = *(int *)(param_1 + 0x60);
  iVar20 = *(int *)(param_1 + 100);
  uVar22 = *(unsigned int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  dVar33 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar24 = 0;
    uVar25 = 1;
  }
  else {
    uVar24 = (unsigned __int64)uVar15 - 1;
    uVar25 = 0xffffffffffffffff;
  }
  dVar32 = dVar33;
  dVar28 = dVar33;
  if (*(int *)(param_1 + 0x5c) != 0) {
    fn_82B90378(param_1,param_4);
  }
  fVar13 = lbl_8202EE50;
  dVar12 = lbl_8202EE40;
  fVar11 = lbl_820288C0;
  fVar10 = lbl_82027070;
  fVar9 = lbl_8202706C;
  uVar23 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    lVar17 = (uVar25 + uVar24 & 0xfffffff) << 4;
    lVar14 = (uVar25 & 0xfffffff) * 0x10;
    lVar26 = ((__int64)(int)(uVar15 - 1) * (__int64)(int)(param_2 & 1) & 0x7fffffffU) * 2 +
             (__int64)iVar16 * (__int64)(int)param_2 + (__int64)iVar20 * (__int64)(int)param_3 +
             (unsigned __int64)uVar22 + (uVar25 & 0x7fffffff) * -2;
    dVar30 = (double)lbl_8200D8DC;
    lVar19 = (uVar24 & 0xfffffff) << 4;
    dVar31 = (double)lbl_820288E0;
    dVar27 = (double)lbl_820288C8;
    lVar18 = (uVar24 - uVar25 & 0xfffffff) << 4;
    do {
      iVar20 = (int)lVar19;
      iVar16 = param_4 + 0xc + iVar20;
      fVar1 = *(float *)((uVar23 & 3) * 4 + ((param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar3 = (float)(dVar33 + (double)*(float *)(param_4 + 0xc + iVar20)) * fVar11;
      fVar4 = (float)((double)*(float *)(iVar16 + -0xc) + dVar28) * fVar10;
      fVar5 = (float)((double)*(float *)(iVar16 + -8) + dVar32) * fVar10;
      uVar15 = (unsigned int)(fVar3 + fVar1);
      iVar16 = (int)(fVar4 + fVar1);
      uVar22 = (unsigned int)(fVar5 + fVar1);
      uVar24 = (unsigned __int64)uVar22;
      if (*(int *)(param_1 + 0x5c) != 0) {
        iVar7 = (int)lVar18;
        iVar6 = iVar7 + *(int *)(param_1 + 0x5c);
        dVar28 = (double)((fVar4 - (float)(__int64)iVar16) * fVar9);
        *(float *)(iVar6 + 0x10) = (float)(dVar28 * dVar27 + (double)*(float *)(iVar6 + 0x10));
        dVar33 = (double)((fVar5 - (float)(__int64)(int)uVar22) * fVar9);
        iVar6 = iVar20 + *(int *)(param_1 + 0x5c);
        dVar29 = (double)((fVar3 - (float)(__int64)(int)uVar15) * fVar13);
        dVar32 = (double)(float)(dVar33 * dVar12);
        *(float *)(iVar6 + 0x10) = (float)(dVar28 * dVar31 + (double)*(float *)(iVar6 + 0x10));
        iVar8 = (int)lVar17;
        iVar6 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x10) = (float)(dVar28 * dVar30 + (double)*(float *)(iVar6 + 0x10));
        iVar6 = iVar7 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar33 * dVar27 + (double)*(float *)(iVar6 + 0x14));
        iVar6 = iVar20 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar33 * dVar31 + (double)*(float *)(iVar6 + 0x14));
        iVar6 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar6 + 0x14) = (float)(dVar33 * dVar30 + (double)*(float *)(iVar6 + 0x14));
        iVar7 = iVar7 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar7 + 0x1c) = (float)(dVar29 * dVar27 + (double)*(float *)(iVar7 + 0x1c));
        iVar20 = iVar20 + *(int *)(param_1 + 0x5c);
        dVar28 = (double)(float)(dVar28 * dVar12);
        *(float *)(iVar20 + 0x1c) = (float)(dVar29 * dVar31 + (double)*(float *)(iVar20 + 0x1c));
        iVar8 = iVar8 + *(int *)(param_1 + 0x5c);
        *(float *)(iVar8 + 0x1c) = (float)(dVar29 * dVar30 + (double)*(float *)(iVar8 + 0x1c));
        dVar33 = (double)(float)(dVar29 * dVar12);
      }
      iVar20 = iVar16;
      if (0xe < iVar16) {
        iVar20 = 0xf;
      }
      if (iVar20 < -0xe) {
        iVar16 = -0xf;
      }
      else if (0xe < iVar16) {
        iVar16 = 0xf;
      }
      uVar21 = uVar22;
      if (0xe < (int)uVar22) {
        uVar21 = 0xf;
      }
      if ((int)uVar21 < -0xe) {
        uVar24 = 0xfffffffffffffff1;
      }
      else if (0xe < (int)uVar22) {
        uVar24 = 0xf;
      }
      uVar22 = uVar15;
      if (0x3e < (int)uVar15) {
        uVar22 = 0x3f;
      }
      if ((int)uVar22 < -0x3e) {
        uVar15 = 0xffffffc1;
      }
      else if (0x3e < (int)uVar15) {
        uVar15 = 0x3f;
      }
      uVar23 = uVar23 + 1;
      lVar19 = lVar14 + lVar19;
      lVar26 = lVar26 + (uVar25 & 0x7fffffff) * 2;
      *(unsigned short *)lVar26 =
           (unsigned short)((((unsigned __int64)uVar15 & 0x7ffffff) << 5 | uVar24 & 0x1f) << 5) |
           (unsigned short)iVar16 & 0x1f;
      lVar18 = lVar14 + lVar18;
      lVar17 = lVar14 + lVar17;
    } while (uVar23 < *(unsigned int *)(param_1 + 0x68));
  }
  return;
}

