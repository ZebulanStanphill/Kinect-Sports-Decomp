#define true 1
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82C39F10();
extern unsigned int lbl_82002AE0;


void fn_82C39F90(int *param_1)

{
  float fVar1;
  int iVar2;
  unsigned char *puVar3;
  float *pfVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  __int64 lVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  unsigned __int64 uVar16;
  double dVar17;
  double dVar18;
  float afStack_d4 [21];
  
  iVar2 = *param_1;
  iVar12 = 0;
  if (*(short *)(iVar2 + 0x22) != 0) {
    iVar13 = 0;
    dVar18 = (double)lbl_82002AE0;
    do {
      if (*(int *)(*(int *)(iVar2 + 0x140) + iVar13 + 0x28) != 0) {
        uVar16 = 0;
        iVar10 = *(int *)(iVar2 + 0x140) + iVar13;
        iVar15 = *(int *)(iVar2 + 400) << 2;
        puVar3 = *(unsigned char **)(iVar10 + 0xc);
        pfVar4 = *(float **)(iVar10 + 0x10);
        uVar5 = *(unsigned int *)(iVar10 + 0x94);
        pcVar14 = puVar3 + *(int *)(iVar2 + 400);
        while( true ) {
          uVar7 = *(unsigned int *)(*(int *)(iVar2 + 0x134) + iVar15);
          uVar8 = *(unsigned int *)(iVar2 + 0x194);
          if ((int)*(unsigned int *)(iVar2 + 0x194) <= (int)uVar7) {
            uVar8 = uVar7;
          }
          uVar7 = *(unsigned int *)(iVar2 + 0x10c);
          if ((int)uVar7 <= (int)uVar8) break;
          uVar6 = *(unsigned int *)(*(int *)(iVar2 + 0x134) + iVar15 + 4);
          if ((int)uVar7 < (int)uVar6) {
            uVar6 = uVar7;
          }
          if (*pcVar14 == '\x01') {
            dVar17 = (double)fn_82C39F10(((unsigned __int64)uVar8 & 0x3fffffff) * 4 + (unsigned __int64)uVar5,
                                           (unsigned __int64)uVar6 - (unsigned __int64)uVar8);
            lVar9 = uVar16 << 2;
            uVar16 = uVar16 + 1 & 0xff;
            *(float *)((int)afStack_d4 + (int)lVar9 + 4) = (float)dVar17;
          }
          iVar15 = iVar15 + 4;
          pcVar14 = pcVar14 + 1;
        }
        lVar9 = uVar16 - 1;
        if (0 < lVar9) {
          fVar1 = *(float *)((int)afStack_d4 + (int)(uVar16 << 2));
          pfVar11 = pfVar4;
          do {
            *pfVar11 = SQRT(*(float *)((int)afStack_d4 + (4 - (int)pfVar4) + (int)pfVar11) *
                            (float)(dVar18 / (double)fVar1));
            pfVar11 = pfVar11 + 1;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        if (uVar16 != 0) {
          *(float *)((int)pfVar4 + (int)(uVar16 << 2) + -4) = (float)dVar18;
        }
        *puVar3 = (char)uVar16;
      }
      iVar2 = *param_1;
      iVar12 = iVar12 + 1;
      iVar13 = iVar13 + 0x6f0;
    } while (iVar12 < (int)(unsigned int)*(unsigned short *)(iVar2 + 0x22));
  }
  return;
}

