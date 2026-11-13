extern int jpeg_idct_4x4();
extern int jpeg_idct_2x2();
extern int jpeg_idct_islow();
extern int jpeg_idct_ifast();
extern int fn_827D10A0();
extern unsigned int lbl_82017E38;
extern unsigned int lbl_82017EB0;
extern unsigned int lbl_82017EB8;
extern unsigned int lbl_827D0850;


void fn_827C9958(int *param_1)

{
  short sVar1;
  unsigned int uVar2;
  double *pdVar3;
  float *pfVar4;
  double *pdVar5;
  int *piVar6;
  unsigned int *puVar7;
  int iVar8;
  unsigned short *puVar9;
  int iVar10;
  short *psVar11;
  int iVar12;
  unsigned int *puVar13;
  int (**pcVar14)();
  unsigned int uVar15;
  int *piVar16;
  __int64 lVar17;
  
  uVar15 = 0;
  pcVar14 = (int (**)())0x0;
  iVar12 = 0;
  if (0 < param_1[9]) {
    piVar16 = (int *)(param_1[0x31] + 0x24);
    puVar13 = (unsigned int *)(param_1[0x67] + 0x2c);
    do {
      iVar8 = *piVar16;
      if (iVar8 == 1) {
        pcVar14 = (int (**)())&lbl_827D0850;
LAB_827c9a68:
        uVar15 = 0;
      }
      else {
        if (iVar8 == 2) {
          pcVar14 = jpeg_idct_2x2;
          goto LAB_827c9a68;
        }
        if (iVar8 == 4) {
          pcVar14 = jpeg_idct_4x4;
          goto LAB_827c9a68;
        }
        if (iVar8 == 8) {
          uVar2 = param_1[0x11];
          if (uVar2 == 0) {
            pcVar14 = jpeg_idct_islow;
            goto LAB_827c9a68;
          }
          if (uVar2 == 1) {
            uVar15 = 1;
            pcVar14 = jpeg_idct_ifast;
          }
          else {
            if (2 < uVar2) {
              *(unsigned int *)(*param_1 + 0x14) = 0x30;
              goto LAB_827c99e0;
            }
            uVar15 = 2;
            pcVar14 = fn_827D10A0;
          }
        }
        else {
          *(unsigned int *)(*param_1 + 0x14) = 7;
          *(int *)(*param_1 + 0x18) = *piVar16;
LAB_827c99e0:
          (**(int (***)())*param_1)(param_1);
        }
      }
      puVar13[-10] = (unsigned int)pcVar14;
      if (((*(char *)(piVar16 + 3) != '\0') && (*puVar13 != uVar15)) &&
         (iVar8 = piVar16[10], iVar8 != 0)) {
        *puVar13 = uVar15;
        if (uVar15 == 0) {
          puVar9 = (unsigned short *)(iVar8 + -2);
          puVar7 = (unsigned int *)(piVar16[0xb] + -4);
          lVar17 = 0x40;
          do {
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
            *puVar7 = (unsigned int)*puVar9;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        else if (uVar15 == 1) {
          piVar6 = (int *)(piVar16[0xb] + -4);
          lVar17 = 0x40;
          psVar11 = (short *)&lbl_82017E38;
          do {
            sVar1 = *psVar11;
            puVar9 = (unsigned short *)(iVar8 + 0x7dfe81c8 + (int)psVar11);
            psVar11 = psVar11 + 1;
            piVar6 = piVar6 + 1;
            *piVar6 = (int)((unsigned int)*puVar9 * (int)sVar1 + 0x800) >> 0xc;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        else if (uVar15 < 3) {
          iVar10 = piVar16[0xb];
          pdVar3 = (double *)&lbl_82017EB8;
          do {
            pfVar4 = (float *)(iVar10 + -4);
            puVar9 = (unsigned short *)(iVar8 + -2);
            pdVar5 = (double *)&lbl_82017EB0;
            iVar10 = iVar10 + 0x20;
            lVar17 = 8;
            iVar8 = iVar8 + 0x10;
            do {
              puVar9 = puVar9 + 1;
              pdVar5 = pdVar5 + 1;
              pfVar4 = pfVar4 + 1;
              *pfVar4 = (float)((double)*puVar9 * *pdVar3 * *pdVar5);
              lVar17 = lVar17 + -1;
            } while (lVar17 != 0);
            pdVar3 = pdVar3 + 1;
          } while ((int)pdVar3 < -0x7dfe8108);
        }
        else {
          *(unsigned int *)(*param_1 + 0x14) = 0x30;
          (**(int (***)())*param_1)(param_1);
        }
      }
      iVar12 = iVar12 + 1;
      puVar13 = puVar13 + 1;
      piVar16 = piVar16 + 0x15;
    } while (iVar12 < param_1[9]);
  }
  return;
}

