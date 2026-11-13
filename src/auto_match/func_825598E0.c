typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int iStack_5c;
extern unsigned int lbl_8218EC10;
extern unsigned int lbl_82192330;
extern unsigned int lbl_82195688;
extern unsigned int lbl_8219568C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64
fn_825598E0(double param_1,double param_2,unsigned short *param_3,unsigned __int64 param_4,int param_5,
             unsigned __int64 param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned short uVar6;
  unsigned short uVar7;
  unsigned short uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float *pfVar13;
  bool bVar14;
  bool bVar15;
  int in_r0;
  unsigned __int64 uVar16;
  int iVar17;
  unsigned __int64 uVar18;
  int iVar19;
  unsigned __int64 uVar20;
  int iVar21;
  unsigned __int64 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  unsigned int in_register_00010410;
  unsigned int in_register_00010414;
  unsigned int in_register_00010418;
  unsigned int in_vr65;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned char auStack_50 [80];
  
  fVar12 = ltcg_pool_0_0f;
  uVar22 = (unsigned __int64)((float)(param_2 / param_1) * ((float)(__int64)param_5 - lbl_821CA460));
  iStack_5c = (int)uVar22;
  uVar18 = uVar22 & 0xffffffff;
  uVar16 = uVar18 + 1;
  uVar20 = uVar18 - 1;
  uVar18 = uVar18 + 2;
  if ((-1 < (__int64)uVar20) && (iVar19 = (int)uVar18, iVar19 <= param_5 + -1)) {
    uVar6 = *param_3;
    iVar9 = *(int *)(param_3 + 4);
    if (iStack_5c < (int)(unsigned int)uVar6) {
      fVar1 = *(float *)(iStack_5c * 4 + iVar9);
    }
    else {
      fVar1 = *(float *)((unsigned int)uVar6 * 4 + iVar9 + -4);
    }
    uVar7 = param_3[6];
    iVar10 = *(int *)(param_3 + 10);
    if (iStack_5c < (int)(unsigned int)uVar7) {
      fVar2 = *(float *)(iStack_5c * 4 + iVar10);
    }
    else {
      fVar2 = *(float *)((unsigned int)uVar7 * 4 + iVar10 + -4);
    }
    uVar8 = param_3[0xc];
    iVar11 = *(int *)(param_3 + 0x10);
    if (iStack_5c < (int)(unsigned int)uVar8) {
      fVar23 = *(float *)(iStack_5c * 4 + iVar11);
    }
    else {
      fVar23 = *(float *)((unsigned int)uVar8 * 4 + iVar11 + -4);
    }
    iVar17 = (int)uVar16;
    if (iVar17 < (int)(unsigned int)uVar6) {
      fVar24 = *(float *)((int)((uVar16 & 0xffffffff) << 2) + iVar9);
    }
    else {
      fVar24 = *(float *)((unsigned int)uVar6 * 4 + iVar9 + -4);
    }
    if (iVar17 < (int)(unsigned int)uVar7) {
      fVar25 = *(float *)((int)((uVar16 & 0xffffffff) << 2) + iVar10);
    }
    else {
      fVar25 = *(float *)((unsigned int)uVar7 * 4 + iVar10 + -4);
    }
    if (iVar17 < (int)(unsigned int)uVar8) {
      fVar26 = *(float *)((int)((uVar16 & 0xffffffff) << 2) + iVar11);
    }
    else {
      fVar26 = *(float *)((unsigned int)uVar8 * 4 + iVar11 + -4);
    }
    fVar27 = SQRT((fVar24 - fVar1) * (fVar24 - fVar1) +
                  (fVar26 - fVar23) * (fVar26 - fVar23) + (fVar25 - fVar2) * (fVar25 - fVar2));
    if (lbl_82195688 < fVar27) {
      iVar21 = (int)uVar20;
      if (iVar21 < (int)(unsigned int)uVar6) {
        fVar28 = *(float *)((int)((uVar20 & 0xffffffff) << 2) + iVar9);
      }
      else {
        fVar28 = *(float *)((unsigned int)uVar6 * 4 + iVar9 + -4);
      }
      if (iVar21 < (int)(unsigned int)uVar7) {
        fVar29 = *(float *)((int)((uVar20 & 0xffffffff) << 2) + iVar10);
      }
      else {
        fVar29 = *(float *)((unsigned int)uVar7 * 4 + iVar10 + -4);
      }
      if (iVar21 < (int)(unsigned int)uVar8) {
        fVar30 = *(float *)((int)((uVar20 & 0xffffffff) << 2) + iVar11);
      }
      else {
        fVar30 = *(float *)((unsigned int)uVar8 * 4 + iVar11 + -4);
      }
      if (iVar19 < (int)(unsigned int)uVar6) {
        fVar3 = *(float *)((int)((uVar18 & 0xffffffff) << 2) + iVar9);
      }
      else {
        fVar3 = *(float *)((unsigned int)uVar6 * 4 + iVar9 + -4);
      }
      if (iVar19 < (int)(unsigned int)uVar7) {
        fVar4 = *(float *)((int)((uVar18 & 0xffffffff) << 2) + iVar10);
      }
      else {
        fVar4 = *(float *)((unsigned int)uVar7 * 4 + iVar10 + -4);
      }
      if (iVar19 < (int)(unsigned int)uVar8) {
        fVar5 = *(float *)((int)((uVar18 & 0xffffffff) << 2) + iVar11);
      }
      else {
        fVar5 = *(float *)((unsigned int)uVar8 * 4 + iVar11 + -4);
      }
      fVar1 = SQRT((fVar1 - fVar28) * (fVar1 - fVar28) +
                   (fVar23 - fVar30) * (fVar23 - fVar30) + (fVar2 - fVar29) * (fVar2 - fVar29));
      fVar2 = SQRT((fVar3 - fVar24) * (fVar3 - fVar24) +
                   (fVar5 - fVar26) * (fVar5 - fVar26) + (fVar4 - fVar25) * (fVar4 - fVar25));
      if ((fVar1 <= lbl_8218EC10) || (bVar15 = false, lbl_82192330 < fVar27 / fVar1)) {
        bVar15 = true;
      }
      if ((fVar2 <= lbl_8218EC10) || (bVar14 = false, lbl_82192330 < fVar27 / fVar2)) {
        bVar14 = true;
      }
      if ((!bVar15) || (!bVar14)) {
        if (iVar17 < (int)(unsigned int)param_3[0x12]) {
          fVar1 = *(float *)((int)((uVar16 & 0xffffffff) << 2) + *(int *)(param_3 + 0x16));
        }
        else {
          fVar1 = *(float *)((unsigned int)param_3[0x12] * 4 + *(int *)(param_3 + 0x16) + -4);
        }
        pfVar13 = (float *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
        fVar23 = *pfVar13;
        fVar24 = pfVar13[1];
        fVar25 = pfVar13[2];
        fVar26 = pfVar13[3];
        pfVar13 = (float *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
        fVar27 = *pfVar13;
        fVar28 = pfVar13[1];
        fVar29 = pfVar13[2];
        fVar30 = pfVar13[3];
        fVar2 = fVar23 * fVar27 + fVar24 * fVar28 + fVar25 * fVar29 + fVar26 * fVar30;
        pfVar13 = (float *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
        *pfVar13 = fVar2;
        pfVar13[1] = fVar2;
        pfVar13[2] = fVar2;
        pfVar13[3] = fVar2;
        if (fVar1 < fVar12) {
          fVar12 = (float)((unsigned int)fVar23 ^ in_register_00010410) * fVar27 +
                   (float)((unsigned int)fVar24 ^ in_register_00010414) * fVar28 +
                   (float)((unsigned int)fVar25 ^ in_register_00010418) * fVar29 +
                   (float)((unsigned int)fVar26 ^ in_vr65) * fVar30;
          pfVar13 = (float *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
          *pfVar13 = fVar12;
          pfVar13[1] = fVar12;
          pfVar13[2] = fVar12;
          pfVar13[3] = fVar12;
        }
        if (lbl_8219568C <= fVar1) {
          return 0;
        }
      }
      if (param_7 != (float *)0x0) {
        *param_7 = (float)((double)((float)(uVar22 & 0xffffffff) / (float)(__int64)param_5) *
                          param_1);
      }
      return 1;
    }
  }
  return 0;
}

