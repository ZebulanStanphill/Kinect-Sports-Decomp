#define NAN(x) ((x) != (x))
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C08DC;
extern unsigned int lbl_831C08E0;
extern unsigned int lbl_831C08E4;


void fn_8258B3F8(unsigned int *param_1,float *param_2,float *param_3,unsigned int *param_4,unsigned int *param_5)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  float fVar6;
  float fVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float fVar11;
  float fVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  __int64 lVar18;
  
  fVar12 = ltcg_pool_0_0f;
  fVar11 = lbl_821CA460;
  uVar13 = *param_1;
  uVar15 = (unsigned __int64)uVar13;
  uVar16 = param_1[3];
  fVar1 = *param_2 - (float)(__int64)(int)param_1[9];
  fVar2 = *param_3 - (float)(__int64)(int)param_1[9];
  fVar7 = (lbl_821CA460 / (float)(__int64)lbl_831C08DC) * fVar1;
  fVar6 = (lbl_821CA460 / (float)(__int64)lbl_831C08DC) * fVar2;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar7 = fVar7 - lbl_821CA460;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar2) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar6 = fVar6 - lbl_821CA460;
  }
  uVar17 = (unsigned __int64)(unsigned int)(int)fVar7;
  if ((int)fVar7 < (int)uVar13) {
    uVar17 = uVar15;
  }
  if ((int)uVar16 <= (int)uVar17) {
    uVar17 = (unsigned __int64)uVar16;
  }
  uVar3 = *param_4;
  uVar8 = (unsigned int)((uVar17 - uVar15 & 0x7ff) << 0x15);
  *param_4 = uVar8 | uVar3 & 0x1fffff;
  uVar17 = (unsigned __int64)(unsigned int)(int)fVar6;
  if ((int)fVar6 < (int)uVar13) {
    uVar17 = uVar15;
  }
  uVar14 = (unsigned __int64)uVar16;
  if ((int)uVar17 < (int)uVar16) {
    uVar14 = uVar17;
  }
  uVar13 = param_1[10];
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  lVar18 = (__int64)lbl_831C08E0;
  uVar16 = *param_5;
  uVar4 = param_1[1];
  uVar9 = (unsigned int)((uVar14 - uVar15 & 0x7ff) << 0x15);
  uVar5 = param_1[4];
  *param_5 = uVar9 | uVar16 & 0x1fffff;
  fVar1 = fVar1 - (float)(__int64)(int)uVar13;
  fVar2 = fVar2 - (float)(__int64)(int)uVar13;
  fVar7 = (fVar11 / (float)lVar18) * fVar1;
  fVar6 = (fVar11 / (float)lVar18) * fVar2;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < fVar12) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar7 = fVar7 - fVar11;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < fVar12) << 2) | (unsigned int)(NAN(fVar2) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar6 = fVar6 - fVar11;
  }
  uVar15 = (unsigned __int64)(unsigned int)(int)fVar7;
  if ((int)fVar7 < (int)uVar4) {
    uVar15 = (unsigned __int64)uVar4;
  }
  if ((int)uVar5 <= (int)uVar15) {
    uVar15 = (unsigned __int64)uVar5;
  }
  uVar13 = param_1[1];
  uVar10 = (unsigned int)((uVar15 - uVar13 & 0xffffffff) << 0xb) & 0x1ff800;
  *param_4 = uVar10 | uVar8 | uVar3 & 0x7ff;
  uVar15 = (unsigned __int64)uVar13;
  if ((int)uVar13 <= (int)fVar6) {
    uVar15 = (unsigned __int64)(unsigned int)(int)fVar6;
  }
  uVar17 = (unsigned __int64)uVar5;
  if ((int)uVar15 < (int)uVar5) {
    uVar17 = uVar15;
  }
  lVar18 = (__int64)lbl_831C08E4;
  fVar1 = param_2[2];
  uVar13 = param_1[0xb];
  fVar2 = param_3[2];
  uVar3 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = (unsigned int)((uVar17 - uVar4 & 0xffffffff) << 0xb) & 0x1ff800;
  *param_5 = uVar4 | uVar9 | uVar16 & 0x7ff;
  fVar1 = fVar1 - (float)(__int64)(int)uVar13;
  fVar2 = fVar2 - (float)(__int64)(int)uVar13;
  fVar7 = (fVar11 / (float)lVar18) * fVar1;
  fVar6 = (fVar11 / (float)lVar18) * fVar2;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar1 < fVar12) << 2) | (unsigned int)(NAN(fVar1) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar7 = fVar7 - fVar11;
  }
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar2 < fVar12) << 2) | (unsigned int)(NAN(fVar2) || NAN(fVar12)) << 2)) <
      0.0) {
    fVar6 = fVar6 - fVar11;
  }
  uVar13 = (int)fVar7;
  if ((int)fVar7 < (int)uVar3) {
    uVar13 = uVar3;
  }
  if ((int)uVar5 <= (int)uVar13) {
    uVar13 = uVar5;
  }
  uVar16 = param_1[2];
  *param_4 = uVar10 | uVar8 | uVar13 - uVar16 & 0x7ff;
  if ((int)uVar16 <= (int)fVar6) {
    uVar16 = (int)fVar6;
  }
  if ((int)uVar5 <= (int)uVar16) {
    uVar16 = uVar5;
  }
  *param_5 = uVar4 | uVar9 | uVar16 - uVar3 & 0x7ff;
  return;
}

