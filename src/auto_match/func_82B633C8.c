typedef unsigned char bool;
extern int fn_82B63208();
extern int fn_82B63290();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_70;


void fn_82B633C8(unsigned char *param_1,int param_2,__int64 param_3,int param_4)

{
  bool bVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  unsigned char uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  __int64 lVar15;
  double dVar16;
  __int64 alStack_80;
  unsigned __int64 uStack_70;
  unsigned char bStack_68;
  unsigned char bStack_67;
  unsigned char bStack_66;
  unsigned char bStack_65;
  unsigned char bStack_64;
  unsigned char bStack_63;
  unsigned char bStack_62;
  char cStack_61;
  
  fVar7 = lbl_821AAD20;
  fVar6 = lbl_82002AE0;
  iVar10 = 0;
  fVar4 = lbl_82002AE0;
  fVar5 = lbl_821AAD20;
  if (0 < param_4) {
    do {
      iVar9 = 0;
      if (0 < (int)param_3) {
        lVar15 = param_3;
        do {
          iVar11 = (iVar10 * 4 + iVar9) * 4;
          if (fVar7 <= *(float *)(iVar11 + param_2)) {
            if (fVar6 < *(float *)(iVar11 + param_2)) {
              *(float *)(iVar11 + param_2) = fVar6;
            }
          }
          else {
            *(float *)(iVar11 + param_2) = fVar7;
          }
          fVar3 = *(float *)(iVar11 + param_2);
          if (fVar3 < fVar4) {
            fVar4 = fVar3;
          }
          if (fVar5 < fVar3) {
            fVar5 = fVar3;
          }
          iVar9 = iVar9 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_4);
  }
  uVar2 = (unsigned int)(fVar4 * lbl_82005CCC + lbl_82002C5C);
  alStack_80 = (__int64)(int)uVar2;
  uVar12 = (unsigned int)(fVar5 * lbl_82005CCC + lbl_82002C5C);
  bVar1 = (int)uVar12 < (int)uVar2;
  uVar14 = uVar12;
  if (uVar12 == uVar2) {
    uVar2 = (unsigned int)(fVar4 * lbl_82005CCC);
    uStack_70 = (__int64)(int)uVar2;
    dVar16 = (double)fn_82F6B2A8();
    uVar14 = (unsigned int)dVar16;
    uVar12 = uVar14;
    if (0xff < (int)uVar14) {
      uVar12 = 0xff;
    }
    bVar1 = (int)uVar12 < (int)uVar2;
  }
  uStack_70 = (__int64)(int)uVar14;
  uVar14 = uVar12;
  uVar13 = uVar2;
  if ((!bVar1) && (uVar14 = uVar2, uVar13 = uVar12, uVar12 == uVar2)) {
    if ((int)uVar12 < 0xff) {
      uVar13 = uVar12 + 1;
    }
    else {
      uVar14 = uVar2 - 1;
    }
  }
  fn_82B63208(&alStack_80,uVar13 & 0xff,uVar14 & 0xff);
  iVar10 = 0;
  do {
    iVar9 = 0;
    do {
      uVar8 = fn_82B63290((double)*(float *)((iVar10 + iVar9) * 4 + param_2),&alStack_80);
      *(unsigned char *)((int)&uStack_70 + iVar9 + iVar10) = uVar8;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 4);
    iVar10 = iVar10 + 4;
  } while (iVar10 < 0x10);
  param_1[2] = (((((unsigned __int64)(uStack_70) >> 40) & 0xFF) << 3 | (((unsigned __int64)(uStack_70) >> 32) & 0xFF)) << 3 | (((unsigned __int64)(uStack_70) >> 24) & 0xFF)) << 1 |
               (((unsigned __int64)(uStack_70) >> 16) & 0xFF) >> 2;
  param_1[5] = ((char)uStack_70 << 3 | (((unsigned __int64)(uStack_70) >> 48) & 0xFF)) << 2 | (((unsigned __int64)(uStack_70) >> 40) & 0xFF) >> 1;
  param_1[4] = (bStack_66 << 3 | bStack_67) << 3 | bStack_68;
  param_1[3] = ((((unsigned __int64)(uStack_70) >> 16) & 0xFF) << 3 | (((unsigned __int64)(uStack_70) >> 8) & 0xFF)) << 3 | (((unsigned __int64)(uStack_70) >> 0) & 0xFF);
  param_1[1] = (char)((unsigned __int64)alStack_80 >> 0x38);
  *param_1 = (char)((unsigned __int64)alStack_80 >> 0x28);
  param_1[7] = ((bStack_63 << 3 | bStack_64) << 3 | bStack_65) << 1 | bStack_66 >> 2;
  param_1[6] = (cStack_61 << 3 | bStack_62) << 2 | bStack_63 >> 1;
  return;
}

