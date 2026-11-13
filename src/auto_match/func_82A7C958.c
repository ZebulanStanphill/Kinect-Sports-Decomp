typedef unsigned char bool;
#define true 1
#define false 0
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_c4;
extern int fn_82A7C8B8();
extern unsigned int iStack_110;
extern unsigned int lbl_82002AE0;
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;
extern unsigned int uStack_f8;


void fn_82A7C958(int param_1,int param_2,int param_3,int param_4,unsigned __int64 param_5,
                  unsigned __int64 param_6)

{
  unsigned char *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  unsigned int uVar10;
  int iVar12;
  int *piVar13;
  __int64 lVar11;
  char *pcVar14;
  int *piVar15;
  unsigned __int64 uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  double dVar21;
  double dVar22;
  unsigned __int64 uStack00000030;
  unsigned __int64 uStack00000038;
  int iStack_110;
  unsigned __int64 uStack_f8;
  float afStack_f0 [11];
  unsigned int auStack_c4 [49];
  
  uStack00000030 = ((((unsigned __int64)(uStack00000030)) & (~(((unsigned __int64)0xFFFFFFFF) << 32))) | ((((unsigned __int64)((unsigned int)param_5)) & ((unsigned __int64)0xFFFFFFFF)) << 32));
  uVar10 = (((unsigned __int64)(uStack00000030) >> 32) & 0xFFFFFFFF);
  uVar16 = 0;
  puVar1 = *(unsigned char **)(param_2 + 0xc);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar20 = *(int *)(param_2 + 4);
  if (((((unsigned __int64)(uStack00000030) >> 32) & 0xFFFFFFFF) == 6) ||
     (((*(int *)(param_1 + 0x3c) != 1 && (31999 < *(int *)(param_1 + 0x50))) &&
      (*(int *)(param_1 + 0x50) < 0xac44)))) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  iVar17 = 0;
  iVar18 = 0;
  if (bVar8) {
  }
  else {
    iStack_110 = ((((int)*(short *)(param_2 + 0x76) << ((((unsigned __int64)(uStack00000030) >> 32) & 0xFFFFFFFF) & 0x3f)) >> 6) *
                 *(int *)(param_1 + 0x114)) / *(int *)(param_1 + 0x100);
  }
  iVar3 = *(int *)(param_1 + 0x194);
  iVar4 = *(int *)(param_1 + 0x10c);
  pcVar14 = puVar1 + *(int *)(param_1 + 400);
  piVar15 = (int *)(*(int *)(param_1 + 400) * 4 + param_3);
  uStack00000030 = param_5;
  uStack00000038 = param_6;
  while( true ) {
    iVar5 = *piVar15;
    if (*piVar15 <= iVar3) {
      iVar5 = iVar3;
    }
    if (iVar4 <= iVar5) break;
    if (*pcVar14 == '\x01') {
      piVar13 = (int *)((iVar18 + 1) * 4 + param_4);
      iVar6 = *piVar13;
      while (iVar6 <= (iVar5 << (uVar10 & 0x3f)) >> 6) {
        piVar13 = piVar13 + 1;
        iVar18 = iVar18 + 1;
        iVar6 = *piVar13;
      }
      if (bVar8) {
        *(unsigned int *)((int)auStack_c4 + (int)(uVar16 << 2) + 4) =
             *(unsigned int *)(iVar18 * 4 + iVar20);
      }
      else {
        iVar6 = iVar4;
        if (piVar15[1] <= iVar4) {
          iVar6 = piVar15[1];
        }
        iVar9 = iVar18 * 4;
        iVar19 = *(int *)(iVar9 + param_4 + 4);
        if (iStack_110 <= iVar19) {
          iVar19 = iStack_110;
        }
        iVar12 = (iVar6 << (uVar10 & 0x3f)) >> 6;
        if (iStack_110 <= iVar12) {
          iVar12 = iStack_110;
        }
        piVar13 = (int *)((iVar17 + 1) * 4 + param_4);
        iVar7 = *piVar13;
        while (iVar7 <= iVar12 + -1) {
          piVar13 = piVar13 + 1;
          iVar17 = iVar17 + 1;
          iVar7 = *piVar13;
        }
        if (iVar17 == iVar18) {
          dVar21 = (double)fn_82A7C8B8(*(unsigned int *)(iVar9 + iVar20));
          *(float *)((int)afStack_f0 + (int)(uVar16 << 2)) = (float)(dVar21 * dVar21);
        }
        else {
          if ((int)uVar10 < 7) {
            iVar19 = iVar19 << (6 - uVar10 & 0x3f);
          }
          else {
            iVar19 = (1 << (uVar10 - 7 & 0x3f)) + iVar19 >> (uVar10 - 6 & 0x3f);
          }
          dVar21 = (double)fn_82A7C8B8(*(unsigned int *)(iVar9 + iVar20));
          dVar22 = (double)fn_82A7C8B8(*(unsigned int *)(iVar17 * 4 + iVar20));
          uStack_f8 = (__int64)iVar19;
          *(float *)((int)afStack_f0 + (int)(uVar16 << 2)) =
               (((float)uStack_f8 - (float)(__int64)iVar5) / (float)(unsigned int)(iVar6 - iVar5)) *
               (float)(dVar21 * dVar21) +
               (((float)(__int64)iVar6 - (float)uStack_f8) / (float)(unsigned int)(iVar6 - iVar5)) *
               (float)(dVar22 * dVar22);
        }
      }
      uVar16 = uVar16 + 1 & 0xff;
    }
    pcVar14 = pcVar14 + 1;
    piVar15 = piVar15 + 1;
  }
  lVar11 = uVar16 - 1;
  if (0 < lVar11) {
    iVar20 = 0;
    do {
      iVar18 = (int)(uVar16 << 2);
      if (bVar8) {
        dVar21 = (double)fn_82A7C8B8((unsigned __int64)*(unsigned int *)((int)auStack_c4 + iVar20 + 4) -
                                       (unsigned __int64)*(unsigned int *)((int)auStack_c4 + iVar18));
        *(float *)(iVar20 + iVar2) = (float)dVar21;
      }
      else {
        *(float *)(iVar20 + iVar2) =
             SQRT(*(float *)((int)afStack_f0 + iVar20) / *(float *)((int)afStack_f0 + iVar18 + -4));
      }
      lVar11 = lVar11 + -1;
      iVar20 = iVar20 + 4;
    } while (lVar11 != 0);
  }
  if (uVar16 != 0) {
    *(unsigned int *)((int)(uVar16 << 2) + iVar2 + -4) = lbl_82002AE0;
  }
  *puVar1 = (char)uVar16;
  return;
}

