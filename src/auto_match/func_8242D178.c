#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822ABA88();
extern int fn_8242C410();
extern int fn_82F65350();
extern unsigned int lbl_821916FC;
extern float lbl_82192604;
extern unsigned int lbl_821CA460;
extern unsigned int lbl_83265A28;
extern unsigned int stack0x00000000;


void fn_8242D178(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar4;
  int iVar7;
  int iVar8;
  int iVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int uVar14;
  unsigned __int64 uVar15;
  unsigned __int64 uVar16;
  unsigned int uVar17;
  
  uVar3 = ZEXT48(&stack0x00000000);
  uVar17 = 2;
  uVar5 = *(unsigned int *)(*(int *)(param_1 + 0x174) + 0xbc);
  uVar13 = (unsigned __int64)uVar5;
  if (uVar13 < 3) {
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    uVar12 = (unsigned __int64)
             (unsigned int)(int)(((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460) *
                         lbl_82192604 + lbl_821916FC);
  }
  else {
    uVar12 = 2;
  }
  uVar15 = ((unsigned __int64)uVar5 & 0x3fffffff) * 4 + (uVar3 - 0x80);
  if (((uVar15 & 0xffffffff) != (uVar3 - 0x60 & 0xffffffff)) &&
     (uVar16 = uVar15 + 4, (uVar16 & 0xffffffff) != (uVar3 - 0x60 & 0xffffffff))) {
    do {
      uVar14 = 0x7fff;
      uVar5 = fn_82F65350();
      uVar4 = (unsigned __int64)uVar5 & 0x7fff;
      uVar5 = uVar5 & 0x7fff;
      if (0x7fff < uVar17) {
        do {
          if (uVar14 == 0xffffffff) break;
          uVar6 = fn_82F65350();
          uVar4 = (uVar4 & 0x1ffff) << 0xf | (unsigned __int64)uVar6 & 0xffffffff00007fff;
          uVar5 = uVar5 << 0xf | uVar6 & 0x7fff;
          uVar14 = uVar14 << 0xf | 0x7fff;
        } while (uVar14 < uVar17);
      }
      uVar1 = *(unsigned int *)uVar16;
      iVar9 = (int)(uVar4 / uVar17) * uVar17;
      uVar17 = uVar17 + 1;
      iVar9 = (uVar5 - iVar9) * 4;
      *(unsigned int *)uVar16 = *(unsigned int *)(iVar9 + (int)uVar15);
      uVar16 = uVar16 + 4;
      *(unsigned int *)(iVar9 + (int)uVar15) = uVar1;
    } while ((uVar16 & 0xffffffff) != (uVar3 - 0x60 & 0xffffffff));
  }
  uVar15 = uVar13 - 1;
  if (-1 < (__int64)uVar15) {
    lVar11 = (uVar15 & 0x3fffffff) * 4 + (uVar3 - 0x7c);
    lVar10 = (uVar15 + uVar12 & 0x3fffffff) * 4 + (uVar3 - 0x7c);
    do {
      uVar1 = *(unsigned int *)((int)lVar11 + -4);
      lVar11 = lVar11 + -4;
      *(unsigned int *)lVar11 = *(unsigned int *)((int)lVar10 + -4);
      lVar10 = lVar10 + -4;
      *(unsigned int *)lVar10 = uVar1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uVar13 = 0;
  lVar11 = uVar3 - 0x80;
  do {
    iVar9 = *(int *)lVar11;
    iVar7 = **(int **)(param_1 + 8);
    if (iVar9 < (*(int **)(param_1 + 8))[1] - iVar7 >> 2) {
      piVar2 = *(int **)(iVar9 * 4 + iVar7);
      iVar7 = fn_822ABA88(*(unsigned int *)(piVar2[4] * 4 + *piVar2),0);
      *(char *)(*(int *)(iVar7 + 0x1a0) + 0x44) = (char)uVar13;
      iVar8 = fn_8242C410(param_1);
      if (iVar9 < iVar8) {
        *(unsigned int *)(iVar7 + 0x120) = 1;
      }
      else {
        *(unsigned int *)(iVar7 + 0x120) = 0;
        *(unsigned int *)(*(int *)(iVar7 + 0x14) + 0x1d0) = 1;
      }
    }
    uVar13 = uVar13 + 1;
    lVar11 = lVar11 + 4;
  } while ((uVar13 & 0xffffffff) < 8);
  return;
}

