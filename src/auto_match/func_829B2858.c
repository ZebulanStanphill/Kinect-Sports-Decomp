extern int fn_829B1720();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_8202706C;
extern unsigned int lbl_82027070;
extern unsigned int lbl_820288C8;
extern unsigned int lbl_820288E0;
extern unsigned int lbl_82054184;
extern unsigned int uStack_68;


void fn_829B2858(unsigned int *param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  float fVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  unsigned __int64 uVar14;
  unsigned __int64 *puVar15;
  __int64 lVar16;
  unsigned __int64 uStack_68;
  float afStack_5c [23];
  
  uVar14 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != 0) {
    puVar15 = &uStack_68;
    lVar16 = 8;
    do {
      puVar15 = puVar15 + 1;
      *puVar15 = 0;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  fVar11 = lbl_82054184;
  fVar10 = lbl_820288E0;
  fVar9 = lbl_820288C8;
  fVar8 = lbl_82027070;
  fVar7 = lbl_8202706C;
  fVar6 = lbl_8200D8DC;
  fVar5 = lbl_82002C5C;
  lVar16 = 0x10;
  pfVar13 = afStack_5c;
  pfVar12 = (float *)(param_2 + 0xc);
  do {
    fVar2 = *pfVar12;
    if (param_3 != 0) {
      fVar2 = pfVar13[-1] + fVar2;
    }
    uVar3 = (unsigned int)((uVar14 & 0xffffffff) >> 1) & 0x7ffffffc;
    uVar1 = (unsigned int)(fVar2 * fVar8 + fVar5);
    *(unsigned int *)(uVar3 + (int)param_1) = *(unsigned int *)(uVar3 + (int)param_1) >> 4 | uVar1 << 0x1c;
    if (param_3 != 0) {
      uStack_68 = (unsigned __int64)uVar1;
      uVar4 = uVar14 & 3;
      fVar2 = -((float)uStack_68 * fVar7 - fVar2);
      if (uVar4 != 3) {
        *pfVar13 = fVar2 * fVar11 + *pfVar13;
      }
      if ((uVar14 & 0xffffffff) < 0xc) {
        if (uVar4 != 0) {
          pfVar13[2] = fVar2 * fVar9 + pfVar13[2];
        }
        pfVar13[3] = fVar2 * fVar10 + pfVar13[3];
        if (uVar4 != 3) {
          pfVar13[4] = fVar2 * fVar6 + pfVar13[4];
        }
      }
    }
    uVar14 = uVar14 + 1;
    pfVar12 = pfVar12 + 4;
    pfVar13 = pfVar13 + 1;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  *param_1 = *param_1 << 0x10 | *param_1 >> 0x10;
  param_1[1] = param_1[1] << 0x10 | param_1[1] >> 0x10;
  fn_829B1720(param_1 + 2,param_2,0);
  return;
}

