extern int fn_82924628();
extern int fn_829252C0();
extern int fn_82B90378();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_82015BE0;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_8202EE40;
extern unsigned int lbl_8202EE54;
extern unsigned int lbl_8202EE58;
extern unsigned int lbl_821AAD20;


void fn_82928710(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  int iVar20;
  __int64 lVar21;
  __int64 lVar22;
  unsigned int uVar23;
  int iVar24;
  __int64 lVar25;
  unsigned int uVar26;
  unsigned __int64 uVar27;
  __int64 lVar28;
  unsigned __int64 uVar29;
  __int64 lVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  
  iVar16 = fn_82F6A540();
  if (*(int *)(iVar16 + 0x54) != 0) {
    param_4 = fn_82924628(iVar16,param_4);
  }
  if (*(int *)(iVar16 + 0x10) != 0) {
    param_4 = fn_829252C0(iVar16,param_4);
  }
  uVar19 = *(unsigned int *)(iVar16 + 0x68);
  iVar20 = *(int *)(iVar16 + 0x60);
  iVar24 = *(int *)(iVar16 + 100);
  uVar17 = *(unsigned int *)(iVar16 + 0x20);
  iVar2 = *(int *)(iVar16 + 0x34);
  dVar37 = (double)lbl_821AAD20;
  if ((param_2 & 1) == 0) {
    uVar27 = 0;
    uVar29 = 1;
  }
  else {
    uVar27 = (unsigned __int64)uVar19 - 1;
    uVar29 = 0xffffffffffffffff;
  }
  dVar32 = dVar37;
  dVar36 = dVar37;
  dVar38 = dVar37;
  if (*(int *)(iVar16 + 0x5c) != 0) {
    fn_82B90378(iVar16,param_4);
  }
  fVar15 = lbl_8202EE58;
  fVar14 = lbl_8202EE54;
  dVar13 = lbl_8202EE40;
  fVar12 = lbl_82015BE0;
  fVar11 = lbl_8200BF40;
  uVar26 = 0;
  if (*(int *)(iVar16 + 0x68) != 0) {
    lVar21 = (uVar29 + uVar27 & 0xfffffff) << 4;
    dVar34 = (double)lbl_8200D8DC;
    dVar35 = (double)lbl_820288E0;
    dVar31 = (double)lbl_820288C8;
    lVar25 = (uVar27 & 0xfffffff) << 4;
    lVar30 = (uVar29 & 0xfffffff) * 0x10;
    lVar22 = (uVar27 - uVar29 & 0xfffffff) << 4;
    iVar10 = (int)param_4 + 8;
    lVar28 = ((__int64)(int)(uVar19 - 1) * (__int64)(int)(param_2 & 1) & 0x3fffffffU) * 4 +
             (__int64)iVar20 * (__int64)(int)(unsigned int)param_2 +
             (__int64)iVar24 * (__int64)(int)param_3 + (unsigned __int64)uVar17 +
             (uVar29 & 0x3fffffff) * -4;
    do {
      iVar24 = (int)lVar25;
      iVar20 = iVar10 + iVar24;
      fVar1 = *(float *)((uVar26 & 3) * 4 + (((unsigned int)param_2 & 3) * 8 + (param_3 & 3)) * 4 + iVar2);
      fVar4 = (float)((double)*(float *)(iVar10 + iVar24) + dVar32) * fVar14;
      fVar5 = (float)((double)*(float *)(iVar20 + -8) + dVar38) * fVar14;
      fVar6 = (float)((double)*(float *)(iVar20 + -4) + dVar36) * fVar14;
      fVar3 = (float)((double)*(float *)(iVar20 + 4) + dVar37) * fVar11;
      uVar19 = (unsigned int)(fVar4 + fVar1);
      uVar17 = (unsigned int)(fVar5 + fVar1);
      uVar18 = (unsigned int)(fVar6 + fVar1);
      iVar20 = (int)(fVar3 + fVar1);
      if (*(int *)(iVar16 + 0x5c) != 0) {
        iVar8 = (int)lVar22;
        iVar7 = iVar8 + *(int *)(iVar16 + 0x5c);
        dVar32 = (double)((fVar5 - (float)(__int64)(int)uVar17) * fVar15);
        *(float *)(iVar7 + 0x10) = (float)(dVar32 * dVar31 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar24 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar7 + 0x10) = (float)(dVar32 * dVar35 + (double)*(float *)(iVar7 + 0x10));
        iVar9 = (int)lVar21;
        iVar7 = iVar9 + *(int *)(iVar16 + 0x5c);
        dVar37 = (double)((fVar6 - (float)(__int64)(int)uVar18) * fVar15);
        *(float *)(iVar7 + 0x10) = (float)(dVar32 * dVar34 + (double)*(float *)(iVar7 + 0x10));
        iVar7 = iVar8 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar37 * dVar31 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar24 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar7 + 0x14) = (float)(dVar37 * dVar35 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar9 + *(int *)(iVar16 + 0x5c);
        dVar33 = (double)((fVar4 - (float)(__int64)(int)uVar19) * fVar15);
        *(float *)(iVar7 + 0x14) = (float)(dVar37 * dVar34 + (double)*(float *)(iVar7 + 0x14));
        iVar7 = iVar8 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar7 + 0x18) = (float)(dVar33 * dVar31 + (double)*(float *)(iVar7 + 0x18));
        iVar7 = iVar24 + *(int *)(iVar16 + 0x5c);
        dVar38 = (double)(float)(dVar32 * dVar13);
        *(float *)(iVar7 + 0x18) = (float)(dVar33 * dVar35 + (double)*(float *)(iVar7 + 0x18));
        iVar7 = iVar9 + *(int *)(iVar16 + 0x5c);
        dVar36 = (double)(float)(dVar37 * dVar13);
        *(float *)(iVar7 + 0x18) = (float)(dVar33 * dVar34 + (double)*(float *)(iVar7 + 0x18));
        iVar8 = iVar8 + *(int *)(iVar16 + 0x5c);
        dVar32 = (double)(float)(dVar33 * dVar13);
        dVar37 = (double)((fVar3 - (float)(__int64)iVar20) * fVar12);
        *(float *)(iVar8 + 0x1c) = (float)(dVar37 * dVar31 + (double)*(float *)(iVar8 + 0x1c));
        iVar24 = iVar24 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar24 + 0x1c) = (float)(dVar37 * dVar35 + (double)*(float *)(iVar24 + 0x1c));
        iVar9 = iVar9 + *(int *)(iVar16 + 0x5c);
        *(float *)(iVar9 + 0x1c) = (float)(dVar37 * dVar34 + (double)*(float *)(iVar9 + 0x1c));
        dVar37 = (double)(float)(dVar37 * dVar13);
      }
      uVar23 = uVar17;
      if (0x3fe < (int)uVar17) {
        uVar23 = 0x3ff;
      }
      if ((int)uVar23 < 1) {
        uVar17 = 0;
      }
      else if (0x3fe < (int)uVar17) {
        uVar17 = 0x3ff;
      }
      uVar23 = uVar18;
      if (0x3fe < (int)uVar18) {
        uVar23 = 0x3ff;
      }
      if ((int)uVar23 < 1) {
        uVar18 = 0;
      }
      else if (0x3fe < (int)uVar18) {
        uVar18 = 0x3ff;
      }
      uVar23 = uVar19;
      if (0x3fe < (int)uVar19) {
        uVar23 = 0x3ff;
      }
      if ((int)uVar23 < 1) {
        uVar19 = 0;
      }
      else if (0x3fe < (int)uVar19) {
        uVar19 = 0x3ff;
      }
      iVar24 = iVar20;
      if (2 < iVar20) {
        iVar24 = 3;
      }
      if (iVar24 < 1) {
        iVar20 = 0;
      }
      else if (2 < iVar20) {
        iVar20 = 3;
      }
      uVar26 = uVar26 + 1;
      lVar25 = lVar30 + lVar25;
      lVar22 = lVar30 + lVar22;
      lVar21 = lVar30 + lVar21;
      lVar28 = lVar28 + (uVar29 & 0x3fffffff) * 4;
      *(unsigned int *)lVar28 = ((iVar20 << 10 | uVar17) << 10 | uVar18) << 10 | uVar19;
    } while (uVar26 < *(unsigned int *)(iVar16 + 0x68));
  }
  fn_82F6A58C();
  return;
}

