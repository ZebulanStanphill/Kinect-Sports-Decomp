typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_c4;
extern int fn_82C3F530();
extern unsigned int iStack_110;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack_f8;


void fn_82C3F5D0(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int iVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int iVar14;
  int *piVar15;
  __int64 lVar13;
  char *pcVar16;
  int *piVar17;
  unsigned __int64 uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  double dVar23;
  double dVar24;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  int iStack_110;
  unsigned __int64 uStack_f8;
  float afStack_f0 [11];
  unsigned int auStack_c4 [49];
  
  uStack00000030 = ((((unsigned __int64)(uStack00000030)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar11 = (((unsigned __int64)(uStack00000030) >> 32) & 0xFFFFFFFF);
  uVar18 = 0;
  puVar1 = *(unsigned char **)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar22 = *(int *)(param_2 + 4);
  if (((((unsigned __int64)(uStack00000030) >> 32) & 0xFFFFFFFF) == 6) ||
     (((*(int *)(param_1 + 0x3c) != 1 && (31999 < *(int *)(param_1 + 0x50))) &&
      (*(int *)(param_1 + 0x50) < 0xac44)))) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  iVar19 = 0;
  iVar20 = 0;
  if (bVar9) {
  }
  else {
    uVar3 = *(unsigned int *)(param_1 + 0x100);
    trapWord(6,(unsigned __int64)uVar3,0);
    uVar12 = (((int)*(short *)(param_2 + 0x76) << ((((unsigned __int64)(uStack00000030) >> 32) & 0xFFFFFFFF) & 0x3f)) >> 6) *
             *(int *)(param_1 + 0x114);
    iStack_110 = (int)uVar12 / (int)uVar3;
    trapWord(5,(unsigned __int64)uVar3 &
               ~((((unsigned __int64)uVar12 & 0x7fffffff) << 1 | (unsigned __int64)(uVar12 >> 0x1f)) - 1),0xffff);
  }
  iVar4 = *(int *)(param_1 + 0x194);
  iVar5 = *(int *)(param_1 + 0x10c);
  pcVar16 = puVar1 + *(int *)(param_1 + 400);
  piVar17 = (int *)(*(int *)(param_1 + 400) * 4 + param_3);
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  while( true ) {
    iVar6 = *piVar17;
    if (*piVar17 <= iVar4) {
      iVar6 = iVar4;
    }
    if (iVar5 <= iVar6) break;
    if (*pcVar16 == '\x01') {
      piVar15 = (int *)((iVar20 + 1) * 4 + param_4);
      iVar7 = *piVar15;
      while (iVar7 <= (iVar6 << (uVar11 & 0x3f)) >> 6) {
        piVar15 = piVar15 + 1;
        iVar20 = iVar20 + 1;
        iVar7 = *piVar15;
      }
      if (bVar9) {
        *(unsigned int *)((int)auStack_c4 + (int)(uVar18 << 2) + 4) =
             *(unsigned int *)(iVar20 * 4 + iVar22);
      }
      else {
        iVar7 = iVar5;
        if (piVar17[1] <= iVar5) {
          iVar7 = piVar17[1];
        }
        iVar10 = iVar20 * 4;
        iVar21 = *(int *)(iVar10 + param_4 + 4);
        if (iStack_110 <= iVar21) {
          iVar21 = iStack_110;
        }
        iVar14 = (iVar7 << (uVar11 & 0x3f)) >> 6;
        if (iStack_110 <= iVar14) {
          iVar14 = iStack_110;
        }
        piVar15 = (int *)((iVar19 + 1) * 4 + param_4);
        iVar8 = *piVar15;
        while (iVar8 <= iVar14 + -1) {
          piVar15 = piVar15 + 1;
          iVar19 = iVar19 + 1;
          iVar8 = *piVar15;
        }
        if (iVar19 == iVar20) {
          dVar23 = (double)fn_82C3F530(*(unsigned int *)(iVar10 + iVar22));
          *(float *)((int)afStack_f0 + (int)(uVar18 << 2)) = (float)(dVar23 * dVar23);
        }
        else {
          if ((int)uVar11 < 7) {
            iVar21 = iVar21 << (6 - uVar11 & 0x3f);
          }
          else {
            iVar21 = (1 << (uVar11 - 7 & 0x3f)) + iVar21 >> (uVar11 - 6 & 0x3f);
          }
          dVar23 = (double)fn_82C3F530(*(unsigned int *)(iVar10 + iVar22));
          dVar24 = (double)fn_82C3F530(*(unsigned int *)(iVar19 * 4 + iVar22));
          uStack_f8 = (__int64)iVar21;
          *(float *)((int)afStack_f0 + (int)(uVar18 << 2)) =
               (((float)uStack_f8 - (float)(__int64)iVar6) / (float)(unsigned int)(iVar7 - iVar6)) *
               (float)(dVar23 * dVar23) +
               (((float)(__int64)iVar7 - (float)uStack_f8) / (float)(unsigned int)(iVar7 - iVar6)) *
               (float)(dVar24 * dVar24);
        }
      }
      uVar18 = uVar18 + 1 & 0xff;
    }
    pcVar16 = pcVar16 + 1;
    piVar17 = piVar17 + 1;
  }
  lVar13 = uVar18 - 1;
  if (0 < lVar13) {
    iVar22 = 0;
    do {
      iVar20 = (int)(uVar18 << 2);
      if (bVar9) {
        dVar23 = (double)fn_82C3F530((unsigned __int64)*(unsigned int *)((int)auStack_c4 + iVar22 + 4) -
                                       (unsigned __int64)*(unsigned int *)((int)auStack_c4 + iVar20));
        *(float *)(iVar22 + iVar2) = (float)dVar23;
      }
      else {
        *(float *)(iVar22 + iVar2) =
             SQRT(*(float *)((int)afStack_f0 + iVar22) / *(float *)((int)afStack_f0 + iVar20 + -4));
      }
      lVar13 = lVar13 + -1;
      iVar22 = iVar22 + 4;
    } while (lVar13 != 0);
  }
  if (uVar18 != 0) {
    *(unsigned int *)((int)(uVar18 << 2) + iVar2 + -4) = lbl_82002AE0;
  }
  *puVar1 = (char)uVar18;
  return;
}

