typedef unsigned char bool;
typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_20;
extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack00000024;
extern unsigned int fStack_70;
extern int fn_82DD3750();
extern unsigned int lbl_82134508;
extern unsigned int lbl_82142CA0;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_821CA820;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 loadVectorLeftIndexed128();
extern V16 vectorSubtractFloatingPoint();


unsigned __int64 fn_82DD4158(double param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
  int iVar10;
  unsigned int *puVar11;
  unsigned int uVar12;
  unsigned __int64 in_r0;
  unsigned __int64 uVar13;
  int iVar15;
  unsigned __int64 uVar14;
  bool bVar16;
  __int64 lVar17;
  unsigned char in_vs32 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned char in_vs46 [16];
  unsigned char in_vs48 [16];
  unsigned char in_vs50 [16];
  unsigned char in_vs52 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float in_register_00010030;
  float in_register_00010034;
  float in_register_00010038;
  float in_register_00010040;
  float in_register_00010044;
  float in_register_00010048;
  float in_register_00010090;
  float in_register_00010094;
  float in_register_00010098;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float in_register_000101f0;
  float in_register_000101f4;
  float in_register_000101f8;
  float fStack00000024;
  float fStack_70;
  float afStack_68 [6];
  float afStack_50 [4];
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [16];
  unsigned char auStack_20 [16];
  
  uVar12 = lbl_82134508;
  uVar13 = ZEXT48(&stack0x00000000);
  iVar10 = (int)in_r0;
  pfVar9 = (float *)(iVar10 + (int)param_3 & 0xfffffff0);
  fVar18 = *pfVar9;
  fVar19 = pfVar9[1];
  fVar20 = pfVar9[2];
  fVar21 = pfVar9[3];
  pfVar9 = (float *)(iVar10 + (int)param_2 & 0xfffffff0);
  fVar25 = *pfVar9;
  fVar26 = pfVar9[1];
  fVar27 = pfVar9[2];
  fVar28 = pfVar9[3];
  fStack00000024 = (float)param_1;
  vectorSubtractFloatingPoint(in_vs44,in_vs32);
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs43,in_vs44);
  loadVectorLeftIndexed128(in_r0,uVar13 + 0x24);
  vectorSubtractFloatingPoint(in_vs40,in_vs32);
  vectorSubtractFloatingPoint(in_vs40,in_vs44);
  vectorSubtractFloatingPoint(in_vs40,in_vs43);
  vectorSubtractFloatingPoint(in_vs45,in_vs40);
  puVar11 = (unsigned int *)((unsigned int)(&lbl_821CA820 + iVar10) & 0xfffffff0);
  uVar22 = *puVar11;
  uVar23 = puVar11[1];
  uVar24 = puVar11[2];
  lVar17 = 3;
  fVar3 = in_register_000101f0 * in_register_00010030;
  fVar4 = in_register_000101f4 * in_register_00010034;
  fVar5 = in_register_000101f8 * in_register_00010038;
  iVar15 = 0;
  fVar6 = in_register_00010094 * in_register_00010040 - in_register_00010094 * in_register_00010040;
  fVar7 = in_register_00010098 * in_register_00010044 - in_register_00010098 * in_register_00010044;
  fVar8 = in_register_00010098 * in_register_00010040 - in_register_00010090 * in_register_00010048;
  vectorSubtractFloatingPoint(in_vs50,in_vs52);
  vectorSubtractFloatingPoint(in_vs46,in_vs48);
  fVar2 = fVar6 * fVar3 + fVar7 * fVar4 + fVar8 * fVar5;
  pfVar9 = (float *)((unsigned int)(auStack_20 + iVar10) & 0xfffffff0);
  *pfVar9 = fVar6;
  pfVar9[1] = fVar7;
  pfVar9[2] = fVar8;
  pfVar9[3] = in_register_00010094 * in_register_00010048 -
              in_register_00010098 * in_register_00010044;
  fVar6 = fVar18 * fVar3 + fVar19 * fVar4 + fVar20 * fVar5;
  pfVar9 = (float *)((unsigned int)(auStack_40 + iVar10) & 0xfffffff0);
  *pfVar9 = fVar18;
  pfVar9[1] = fVar19;
  pfVar9[2] = fVar20;
  pfVar9[3] = fVar21;
  fVar3 = fVar25 * fVar3 + fVar26 * fVar4 + fVar27 * fVar5;
  pfVar9 = (float *)((unsigned int)(auStack_30 + iVar10) & 0xfffffff0);
  *pfVar9 = fVar25;
  pfVar9[1] = fVar26;
  pfVar9[2] = fVar27;
  pfVar9[3] = fVar28;
  fVar4 = lbl_821AAD20;
  pfVar9 = (float *)((int)afStack_50 + iVar10 & 0xfffffff0);
  *pfVar9 = fVar6 * (float)((unsigned int)fVar6 & uVar22);
  pfVar9[1] = fVar3 * (float)((unsigned int)fVar3 & uVar23);
  pfVar9[2] = fVar2 * (float)((unsigned int)fVar2 & uVar24);
  pfVar9[3] = 0.0;
  do {
    uVar1 = storeVectorElementWordIndexed(in_vs44,0,uVar13 - 0x70);
    *(unsigned int *)(uVar13 - 0x70) = uVar1;
    if (fStack_70 == fVar4) {
      *(unsigned int *)((int)afStack_68 + iVar15) = uVar12;
    }
    else {
      *(float *)((int)afStack_68 + iVar15) = *(float *)((int)afStack_50 + iVar15) / fStack_70;
    }
    iVar15 = iVar15 + 4;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  bVar16 = afStack_68[0] <= afStack_68[1];
  fVar4 = afStack_68[0];
  if (!bVar16) {
    fVar4 = afStack_68[1];
    afStack_68[1] = afStack_68[0];
  }
  uVar14 = (unsigned __int64)bVar16;
  if (afStack_68[1] <= afStack_68[2]) {
    uVar14 = 2;
    fVar5 = afStack_68[1];
    afStack_68[1] = afStack_68[2];
  }
  else {
    fVar5 = afStack_68[2];
    if (afStack_68[2] < fVar4) {
      fVar5 = fVar4;
    }
  }
  if (afStack_68[1] < lbl_82142CA0) {
    return 0xffffffffffffffff;
  }
  if (fVar5 * lbl_82186E18 < afStack_68[1]) {
    return uVar14;
  }
  pfVar9 = (float *)((int)afStack_50 + iVar10 & 0xfffffff0);
  *pfVar9 = fVar6;
  pfVar9[1] = fVar3;
  pfVar9[2] = fVar2;
  pfVar9[3] = 0.0;
  uVar13 = fn_82DD3750(param_2,param_3,uVar13 - 0x50);
  return uVar13;
}

