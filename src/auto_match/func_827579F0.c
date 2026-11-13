typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_100;
extern unsigned int fStack_104;
extern unsigned int fStack_108;
extern unsigned int fStack_f4;
extern unsigned int fStack_f8;
extern unsigned int fStack_fc;
extern int fn_8268D008();
extern int fn_827555D8();
extern int fn_82755FA8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827A9470();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005C88;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_110;
extern unsigned int uStack_cc;
extern unsigned int uStack_d0;
extern unsigned int uStack_e8;


void fn_827579F0(unsigned __int64 param_1,double param_2,double param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  int *piVar6;
  __int64 lVar5;
  unsigned int uVar7;
  __int64 lVar8;
  int iVar9;
  int iVar10;
  __int64 lVar11;
  int iVar12;
  unsigned __int64 uVar13;
  double dVar14;
  double extraout_f1;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  unsigned __int64 uStack_110;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int *apiStack_f0 [2];
  unsigned int uStack_e8;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  
  piVar6 = (int *)fn_82F6A540();
  fStack_f8 = (float)extraout_f1;
  fStack_f4 = (float)param_2;
  lVar11 = 0;
  dVar14 = (double)lbl_821AAD20;
  lVar8 = 0;
  dVar15 = (double)lbl_82005C88;
  uVar7 = 0;
  if (piVar6[1] != 0) {
    iVar12 = 0;
    dVar16 = dVar14;
    iVar9 = 0;
    do {
      iVar3 = *(int *)(iVar12 + *piVar6);
      fn_8268D008(iVar3 + 0x44,&fStack_108,&fStack_f8);
      dVar18 = (double)fStack_108;
      dVar17 = (double)fStack_104;
      if (((((double)*(float *)(iVar3 + 0x8c) < dVar18) ||
           (dVar18 < (double)*(float *)(iVar3 + 0x84))) ||
          ((double)*(float *)(iVar3 + 0x90) < dVar17)) ||
         (bVar4 = true, dVar17 < (double)*(float *)(iVar3 + 0x88))) {
        bVar4 = false;
      }
      lVar5 = lVar11;
      iVar10 = iVar3;
      if (bVar4) break;
      fn_82755FA8(&uStack_110,(float *)(iVar3 + 0x84),&fStack_108);
      fVar1 = (float)((double)(((unsigned __int64)(uStack_110) >> 32) & 0xFFFFFFFF) - dVar17);
      fVar2 = (float)((double)(((unsigned __int64)(uStack_110) >> 0) & 0xFFFFFFFF) - dVar18);
      dVar17 = (double)SQRT(fVar2 * fVar2 + fVar1 * fVar1);
      iVar10 = iVar9;
      if ((dVar17 < param_3) && (dVar17 < dVar15)) {
        lVar8 = lVar11;
        dVar15 = dVar17;
        dVar14 = (double)(((unsigned __int64)(uStack_110) >> 32) & 0xFFFFFFFF);
        dVar16 = (double)(((unsigned __int64)(uStack_110) >> 0) & 0xFFFFFFFF);
        iVar10 = iVar3;
      }
      uVar7 = uVar7 + 1;
      iVar9 = iVar12 + *piVar6;
      iVar12 = iVar12 + 8;
      lVar11 = (unsigned __int64)*(unsigned int *)(iVar9 + 4) + lVar11;
      lVar5 = lVar8;
      dVar17 = dVar14;
      dVar18 = dVar16;
      iVar9 = iVar10;
    } while (uVar7 < (unsigned int)piVar6[1]);
    if (iVar10 != 0) {
      fStack_100 = (float)(dVar18 - (double)*(float *)(iVar10 + 0x84));
      dVar15 = (double)fStack_100;
      fStack_fc = (float)(dVar17 - (double)*(float *)(iVar10 + 0x88));
      fn_827A9470(apiStack_f0,iVar10 + 0x6c,&fStack_100);
      if (((apiStack_f0[0] == (int *)0x0) || ((unsigned int)apiStack_f0[0][1] <= uStack_e8)) ||
         (bVar4 = false, (int)uStack_e8 < 0)) {
        bVar4 = true;
      }
      if (!bVar4) {
        piVar6 = *(int **)(uStack_e8 * 4 + *apiStack_f0[0]);
        uStack_110 = (__int64)piVar6[3];
        dVar14 = (double)uStack_110;
        if (dVar14 <= dVar15) {
          if (*piVar6 < 0) {
            uVar7 = (unsigned int)*(unsigned short *)(piVar6 + 5);
          }
          else {
            uVar7 = piVar6[5];
          }
          uStack_110 = (__int64)(int)uVar7;
          if (dVar15 <= (double)(float)((double)uStack_110 + dVar14)) {
            dVar15 = (double)(float)(dVar15 - dVar14);
            iVar9 = 0;
            fn_82756F70(&uStack_d0,piVar6);
            lVar8 = 0;
            while( true ) {
              if ((uStack_d0 == 0) || (bVar4 = false, uStack_cc <= uStack_d0)) {
                bVar4 = true;
              }
              if (bVar4) break;
              uVar7 = (unsigned int)*(unsigned short *)(uStack_d0 + 2);
              if ((*(unsigned short *)(uStack_d0 + 6) >> 6 & 1) != 0) {
                uVar7 = -uVar7;
              }
              iVar9 = uVar7 + iVar9;
              uStack_110 = (__int64)iVar9;
              if (dVar15 < (double)uStack_110) break;
              lVar8 = (unsigned __int64)(*(unsigned short *)(uStack_d0 + 4) >> 0xc) + lVar8;
              fn_827555D8(&uStack_d0);
            }
            if (*piVar6 < 0) {
              uVar13 = (unsigned __int64)(unsigned int)piVar6[2] & 0xffffff;
              if (uVar13 == 0xffffff) {
                uVar13 = 0xffffffffffffffff;
              }
            }
            else {
              uVar13 = (unsigned __int64)(unsigned int)piVar6[2];
            }
            fn_82756488(&uStack_d0);
            lVar5 = uVar13 + lVar8 + lVar5;
            goto LAB_82757cd8;
          }
        }
      }
    }
  }
  lVar5 = -1;
LAB_82757cd8:
  fn_82F6A58C(lVar5);
  return;
}

