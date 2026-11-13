#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern float fRam831d19d4;
extern int fn_822ABA88();
extern int fn_8249ABC0();
extern unsigned int lbl_82192480;
extern unsigned int ltcg_pool_0_0f;


void fn_823DD568(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  unsigned int uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int iVar10;
  unsigned __int64 uVar9;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  int iVar14;
  unsigned int uVar15;
  
  uVar15 = *(unsigned int *)(param_1 + 8);
  uVar11 = (unsigned __int64)uVar15;
  *(unsigned int *)(param_1 + 0xd8) = 0;
  *(unsigned int *)(param_1 + 0xe4) = 0;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x270) = 0;
  *(unsigned int *)(param_1 + 0xdc) = uVar2;
  if ((*(float *)(uVar15 + 0x47c) < *(float *)(uVar15 + 0x474)) &&
     (fVar5 = *(float *)(uVar15 + 0xe40) + lbl_82192480, *(float *)(uVar15 + 0xe40) = fVar5,
     fRam831d19d4 < fVar5)) {
    *(float *)(uVar15 + 0xe40) = fRam831d19d4;
  }
  uVar1 = *(unsigned int *)(uVar15 + 8);
  uVar12 = (unsigned __int64)uVar1;
  iVar13 = *(int *)(uVar15 + 0xeec);
  uVar6 = -(unsigned int)(*(int *)(uVar15 + 0xee8) != 0) & 7;
  iVar14 = 0;
  iVar10 = 0;
  *(unsigned int *)(uVar1 + 0x8dbc) = uVar6;
  lVar7 = uVar12 + 0x8db0;
  *(unsigned int *)(uVar1 + 0x8db4) = iVar13 + uVar6;
  do {
    if ((iVar14 == 0) || (iVar14 == 2)) {
LAB_823dd658:
      lVar7 = lVar7 + 4;
      iVar14 = iVar14 + 1;
    }
    else {
      if ((iVar10 != *(int *)(uVar15 + 0xeec)) && (iVar10 != 0)) {
        iVar13 = iVar10 + uVar6;
        iVar10 = iVar10 + 1;
        *(int *)((int)lVar7 + 4) = iVar13;
        goto LAB_823dd658;
      }
      iVar10 = iVar10 + 1;
    }
    if (6 < iVar14) {
      uVar15 = -(unsigned int)(*(int *)(uVar15 + 0xee8) != 1) & 7;
      *(unsigned int *)((iVar14 + 0x236d) * 4 + uVar1) = uVar15 + 1;
      *(unsigned int *)((iVar14 + 0x236e) * 4 + uVar1) = uVar15;
      *(unsigned int *)((iVar14 + 0x236f) * 4 + uVar1) = uVar15 + 2;
      *(unsigned int *)((iVar14 + 0x2370) * 4 + uVar1) = uVar15 + 3;
      *(unsigned int *)((iVar14 + 0x2371) * 4 + uVar1) = uVar15 + 4;
      *(unsigned int *)((iVar14 + 0x2372) * 4 + uVar1) = uVar15 + 5;
      lVar7 = 0;
      *(unsigned int *)((iVar14 + 0x2373) * 4 + uVar1) = uVar15 + 6;
      do {
        uVar8 = 0;
        piVar3 = *(int **)((int)lVar7 + *(int *)uVar12);
        uVar9 = ZEXT48(piVar3);
        if (*(int *)(*(int *)(piVar3[4] * 4 + *piVar3) + 8) != 0) {
          do {
            iVar13 = fn_822ABA88();
            *(unsigned int *)(iVar13 + 0x200) = 0;
            uVar8 = uVar8 + 1;
          } while ((uVar8 & 0xffffffff) <
                   (unsigned __int64)*(unsigned int *)(*(int *)(((int *)uVar9)[4] * 4 + *(int *)uVar9) + 8));
        }
        lVar7 = lVar7 + 4;
      } while ((int)lVar7 < 8);
      piVar4 = *(int **)(*(int *)((int)uVar11 + 0xee8) * 4 + *(int *)((int)uVar11 + 0x20));
      piVar3 = (int *)*piVar4;
      if (piVar4[1] - (int)piVar3 >> 2 != 0) {
        uVar2 = *(unsigned int *)(*piVar3 + 0x28);
        iVar13 = fn_8249ABC0();
        *(unsigned int *)(iVar13 + 0x114) = uVar2;
      }
      return;
    }
  } while( true );
}

