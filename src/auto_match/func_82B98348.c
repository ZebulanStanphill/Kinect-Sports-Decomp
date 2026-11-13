extern int fn_82F6A548();
extern int fn_82F6A594();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005CCC;
extern unsigned int lbl_8202EE68;
extern unsigned int lbl_8202EE6C;
extern unsigned int lbl_8202EE70;
extern unsigned int lbl_8202EE74;
extern unsigned int lbl_8202EE78;
extern unsigned int lbl_8202EE7C;
extern unsigned int lbl_8202EE80;
extern unsigned int lbl_8202EE84;


/* WARNING: Removing unreachable block (ram,0x82b984e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82B98348(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  unsigned int uVar15;
  unsigned short *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  float *pfVar21;
  
  iVar14 = fn_82F6A548();
  fVar13 = lbl_8202EE84;
  fVar12 = lbl_8202EE80;
  fVar11 = lbl_8202EE7C;
  fVar10 = lbl_8202EE78;
  fVar9 = lbl_8202EE74;
  fVar8 = lbl_8202EE70;
  fVar7 = lbl_8202EE6C;
  fVar6 = lbl_8202EE68;
  fVar1 = lbl_82005CCC;
  fVar5 = lbl_82002C5C;
  if ((*(int *)(iVar14 + 0xa0) != 0) && (*(int *)(iVar14 + 0xa4) != 0)) {
    uVar15 = *(unsigned int *)(iVar14 + 0x84);
    iVar17 = *(int *)(iVar14 + 4);
    pfVar21 = *(float **)(iVar14 + 0x80);
    iVar18 = *(int *)(iVar14 + 0x94) * *(int *)(iVar14 + 100) +
             *(int *)(iVar14 + 0x88) * *(int *)(iVar14 + 0x60) + uVar15 * 2 +
             *(int *)(iVar14 + 0x20);
    if (0x1828004a < iVar17) {
      if (iVar17 < 0x1828004d) {
        if (uVar15 < *(unsigned int *)(iVar14 + 0x8c)) {
          puVar16 = (unsigned short *)(iVar18 + -2);
          pfVar21 = pfVar21 + -6;
          do {
            uVar15 = uVar15 + 2;
            puVar16[1] = (unsigned short)((int)(pfVar21[7] * fVar1 + fVar5) <<
                                 (*(unsigned int *)(iVar14 + 0xa8) & 0x3f)) |
                         (unsigned short)((int)(pfVar21[6] * fVar1 + fVar5) <<
                                 (*(unsigned int *)(iVar14 + 0xac) & 0x3f));
            pfVar4 = pfVar21 + 0xb;
            pfVar21 = pfVar21 + 8;
            puVar16 = puVar16 + 2;
            *puVar16 = (unsigned short)((int)(*pfVar4 * fVar1 + fVar5) << (*(unsigned int *)(iVar14 + 0xa8) & 0x3f))
                       | (unsigned short)((int)(*pfVar21 * fVar1 + fVar5) <<
                                 (*(unsigned int *)(iVar14 + 0xac) & 0x3f));
          } while (uVar15 < *(unsigned int *)(iVar14 + 0x8c));
        }
      }
      else if (((0x1a20004a < iVar17) && (iVar17 < 0x1a20004d)) &&
              (uVar15 < *(unsigned int *)(iVar14 + 0x8c))) {
        puVar16 = (unsigned short *)(iVar18 + -2);
        do {
          fVar1 = pfVar21[1];
          fVar2 = pfVar21[2];
          fVar3 = *pfVar21;
          iVar17 = (int)(pfVar21[4] * fVar6 + pfVar21[6] * fVar7 + pfVar21[5] * fVar8 + fVar5) +
                   0x10;
          iVar18 = (int)(fVar1 * fVar8 + fVar3 * fVar6 + fVar2 * fVar7 + fVar5) + 0x10;
          iVar20 = (int)((fVar3 * fVar9 - (fVar2 * fVar12 + fVar1 * fVar13)) + fVar5) + 0x80;
          iVar19 = (int)(-(fVar3 * fVar11 - (fVar2 * fVar9 - fVar1 * fVar10)) + fVar5) + 0x80;
          if (0xff < iVar18) {
            iVar18 = 0xff;
          }
          if (iVar17 < 0) {
            iVar17 = 0;
          }
          else if (0xff < iVar17) {
            iVar17 = 0xff;
          }
          if (iVar19 < 0) {
            iVar19 = 0;
          }
          else if (0xff < iVar19) {
            iVar19 = 0xff;
          }
          if (iVar20 < 0) {
            iVar20 = 0;
          }
          else if (0xff < iVar20) {
            iVar20 = 0xff;
          }
          uVar15 = uVar15 + 2;
          pfVar21 = pfVar21 + 8;
          puVar16[1] = (unsigned short)(iVar19 << (*(unsigned int *)(iVar14 + 0xac) & 0x3f)) |
                       (unsigned short)(iVar18 << (*(unsigned int *)(iVar14 + 0xa8) & 0x3f));
          puVar16 = puVar16 + 2;
          *puVar16 = (unsigned short)(iVar20 << (*(unsigned int *)(iVar14 + 0xac) & 0x3f)) |
                     (unsigned short)(iVar17 << (*(unsigned int *)(iVar14 + 0xa8) & 0x3f));
        } while (uVar15 < *(unsigned int *)(iVar14 + 0x8c));
      }
    }
    *(unsigned int *)(iVar14 + 0xa0) = 0;
  }
  fn_82F6A594(0);
  return;
}

