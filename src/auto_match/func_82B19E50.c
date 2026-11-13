extern int fn_82ABDD90();
extern int fn_82ABE250();
extern int fn_82B17F70();


void fn_82B19E50(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  
  piVar13 = (int *)fn_82ABE250(param_1,0x18,2);
  iVar14 = fn_82B17F70(param_1,param_2,param_3,piVar13);
  if (iVar14 == 0) {
    *piVar13 = *(int *)(param_1 + 0x3e0);
    *(int **)(param_1 + 0x3e0) = piVar13;
    return;
  }
  while (piVar13[2] == 0) {
    iVar14 = fn_82B17F70(param_1,*(unsigned int *)(*(int *)(*(int *)(iVar14 + 4) + 0x34) + 0xc),
                           param_3,piVar13);
    if (iVar14 == 0) {
      return;
    }
  }
  do {
    if (((*(int *)(*(int *)(param_2 + 4) + 8) != 0) ||
        (iVar14 = *(int *)(*(int *)(param_2 + 4) + 0x10), (*(unsigned int *)(iVar14 + 8) & 0x3f80) != 0x680)
        ) || (*(int *)(*(int *)(iVar14 + 0x34) + 0xc) != param_2)) break;
    iVar15 = fn_82B17F70(param_1,iVar14,param_3,piVar13);
    param_2 = iVar14;
  } while (iVar15 != 0);
  if ((piVar13[1] != 1) && ((unsigned int)piVar13[1] < 0x2000)) {
    piVar13[5] = *(int *)(param_4 + 0x40);
    *(int **)(param_4 + 0x40) = piVar13;
    uVar1 = piVar13[1];
    uVar2 = piVar13[3];
    if ((uVar2 >> 0xd & 0x1fff) == uVar1) {
      puVar3 = (unsigned int *)*piVar13;
      uVar20 = 0;
      uVar5 = *puVar3;
      puVar4 = (unsigned int *)puVar3[2];
      uVar12 = uVar5;
      for (puVar7 = puVar4; puVar7 != (unsigned int *)0x0; puVar7 = (unsigned int *)puVar7[2]) {
        uVar6 = *puVar7;
        if (uVar6 != uVar12 + 1) {
          uVar20 = uVar20 + 1;
        }
        uVar12 = uVar6;
      }
      puVar3 = *(unsigned int **)(puVar3[1] + 0x30);
      uVar6 = puVar3[3];
      uVar8 = *(unsigned int *)(uVar6 + 8);
      iVar14 = fn_82ABDD90(param_1,uVar8 >> 7 & 0x7f,uVar8 >> 0x13 & 7,uVar8 >> 0xe & 7);
      uVar8 = *(unsigned int *)(iVar14 + (uVar6 - 8)) & 0x7fff;
      uVar9 = *(unsigned int *)(uVar8 * 0x28 + *(int *)(param_1 + 0xc) + 4) >> 4 & 7;
      if (((uVar9 == 2) || (uVar9 == 7)) && (uVar20 < 2)) {
        uVar9 = *puVar3;
        uVar21 = 0;
        uVar10 = uVar9 >> 0x19 & 7;
        uVar18 = 0;
        if (uVar10 != 0) {
          uVar16 = 0;
          do {
            uVar18 = uVar18 + 1;
            uVar19 = uVar16 & 0x3f;
            uVar16 = uVar16 + 2;
            uVar21 = 1 << ((uVar9 >> 5 & 0xff) >> uVar19 & 3) | uVar21;
          } while (uVar18 < uVar10);
        }
        uVar9 = *(unsigned int *)(uVar6 + 8);
        iVar14 = fn_82ABDD90(param_1,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
        uVar6 = *(unsigned int *)(iVar14 + (uVar6 - 8));
        for (; puVar4 != (unsigned int *)0x0; puVar4 = (unsigned int *)puVar4[2]) {
          uVar16 = 0;
          uVar19 = 0;
          uVar9 = **(unsigned int **)(puVar4[1] + 0x30);
          uVar10 = (*(unsigned int **)(puVar4[1] + 0x30))[3];
          uVar18 = uVar9 >> 0x19 & 7;
          if (uVar18 != 0) {
            uVar17 = 0;
            do {
              uVar19 = uVar19 + 1;
              uVar11 = uVar17 & 0x3f;
              uVar17 = uVar17 + 2;
              uVar16 = 1 << ((uVar9 >> 5 & 0xff) >> uVar11 & 3) | uVar16;
            } while (uVar19 < uVar18);
          }
          if (uVar16 != uVar21) {
            return;
          }
          uVar9 = *(unsigned int *)(uVar10 + 8);
          iVar14 = fn_82ABDD90(param_1,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
          if ((*(unsigned int *)(iVar14 + (uVar10 - 8)) & 0x7fff) != uVar8) {
            return;
          }
          uVar9 = *(unsigned int *)(uVar10 + 8);
          iVar14 = fn_82ABDD90(param_1,uVar9 >> 7 & 0x7f,uVar9 >> 0x13 & 7,uVar9 >> 0xe & 7);
          if ((*(unsigned int *)(iVar14 + (uVar10 - 8)) >> 0xf & 0x3fff) !=
              (*puVar4 - uVar5) + (uVar6 >> 0xf & 0x3fff)) {
            return;
          }
        }
        if (*(double *)(param_4 + 8) < (double)uVar5) {
          uVar20 = uVar20 + 1;
        }
        if ((uVar12 - uVar5) + 1 < (*(unsigned int *)(param_4 + 4) & 0x7fff)) {
          uVar20 = uVar20 + 1;
        }
        piVar13[3] = uVar2 | 0x4000000;
        piVar13[4] = piVar13[4] & 0xffffe000U | uVar20 & 0x1fff;
        *(unsigned int *)(param_4 + 0x4c) = (uVar1 - uVar20) + *(int *)(param_4 + 0x4c);
      }
    }
  }
  return;
}

