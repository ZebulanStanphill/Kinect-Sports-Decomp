typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_130;
extern int fn_8294AC48();
extern int fn_82964628();
extern unsigned int iStack_d0;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005730;
extern unsigned int lbl_820380A0;
extern unsigned int uStack_114;
extern unsigned int uStack_118;
extern unsigned int uStack_11c;
extern unsigned int uStack_120;
extern unsigned int uStack_a4;


unsigned __int64 fn_82999AD0(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  double dVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  int *piVar13;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int *puVar15;
  int iVar16;
  __int64 lVar14;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned int auStack_130 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_120;

  unsigned int uStack_118;
  unsigned int uStack_114;
  unsigned int *puStack_110;
  unsigned int *puStack_10c;
  unsigned int *puStack_108;
  int iStack_d0;
  int aiStack_cc [10];
  unsigned int uStack_a4;
  int aiStack_a0 [40];
  
  auStack_130[0] = 0;
  stack_pair_120.first = 0;
  stack_pair_120.second = 1;
  uStack_118 = 2;
  uStack_114 = 3;
  if (*(short *)(param_1 + 0xca) == 0x104) {
    return 0;
  }
  uVar10 = **(unsigned int **)(param_1 + 0x104);
  uVar2 = (unsigned __int64)uVar10;
  uVar18 = uVar2 & 0xfffff;
  uVar8 = fn_8294AC48(param_1,*(unsigned int **)(param_1 + 0x104),0xffffffff8204fef0,&puStack_110,
                            auStack_130,&iStack_d0,&stack_pair_120.first,uVar18);
  if ((int)uVar8 < 0) {
    return uVar8;
  }
  if ((int)uVar8 == 0) {
    bVar5 = false;
    bVar6 = false;
    if ((uVar10 & 0xfffff) == 0) {
      return 1;
    }
    piVar13 = aiStack_a0;
    uVar17 = uVar18;
    do {
      iVar16 = *(int *)(*piVar13 * 4 + *(int *)(param_1 + 0x14));
      if (((*(unsigned int *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
           0) || (*(double *)(iVar16 + 0x20) != lbl_82005730)) {
        bVar6 = true;
      }
      else {
        bVar5 = true;
      }
      piVar13 = piVar13 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  else {
    uVar8 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),0xffffffff8204ff70,
                              &puStack_110,auStack_130,&iStack_d0,&stack_pair_120.first,uVar18);
    dVar7 = lbl_820380A0;
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    bVar5 = false;
    bVar6 = false;
    bVar3 = false;
    bVar4 = false;
    if ((uVar10 & 0xfffff) == 0) {
      return 1;
    }
    piVar13 = &iStack_d0;
    uVar17 = uVar18;
    do {
      iVar16 = *(int *)(*piVar13 * 4 + *(int *)(param_1 + 0x14));
      if (((*(unsigned int *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
           0) || (*(double *)(iVar16 + 0x20) != lbl_820380A0)) {
        bVar4 = true;
      }
      else {
        bVar3 = true;
      }
      piVar13 = piVar13 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    if ((bVar3) && (!bVar4)) {
      puVar15 = &uStack_a4;
      uVar17 = uVar18;
      do {
        uVar9 = puVar15[-0xb];
        puVar15[-0xb] = puVar15[1];
        puVar15 = puVar15 + 1;
        *puVar15 = uVar9;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if ((uVar10 & 0xfffff) == 0) {
      return 1;
    }
    piVar13 = aiStack_a0;
    uVar17 = uVar18;
    do {
      iVar16 = *(int *)(*piVar13 * 4 + *(int *)(param_1 + 0x14));
      if (((*(unsigned int *)(*(int *)(*(int *)(iVar16 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
           0) || (*(double *)(iVar16 + 0x20) != dVar7)) {
        bVar6 = true;
      }
      else {
        bVar5 = true;
      }
      piVar13 = piVar13 + 1;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
  }
  if ((!bVar5) || (bVar6)) {
    return 1;
  }
  uVar17 = 1;
  if (1 < uVar18) {
    piVar13 = aiStack_cc;
    do {
      if (*piVar13 != iStack_d0) {
        return 1;
      }
      uVar17 = uVar17 + 1;
      piVar13 = piVar13 + 1;
    } while ((uVar17 & 0xffffffff) < uVar18);
  }
  uVar17 = 0;
  *puStack_10c = 0x10000001;
  uVar10 = 0;
  puStack_10c[1] = 1;
  puStack_10c[3] = 1;
  *puStack_108 = (unsigned int)uVar18 | 0x70f00000;
  *puStack_110 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar16 = 0;
    do {
      iVar1 = *(int *)(iVar16 + *(int *)(param_1 + 0x14));
      if ((*(int *)(param_1 + 0x88) == *(int *)(iVar1 + 4)) &&
         (uVar11 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc), (uVar17 & 0xffffffff) <= uVar11)) {
        uVar17 = uVar11 + 1;
      }
      uVar10 = uVar10 + 1;
      iVar16 = iVar16 + 4;
    } while (uVar10 < *(unsigned int *)(param_1 + 8));
  }
  uVar9 = fn_82964628(lbl_82005710,param_1,*(unsigned int *)(param_1 + 0x88),uVar17,
                            *(unsigned int *)
                             (*(int *)(*(int *)puStack_108[2] * 4 + *(int *)(param_1 + 0x14)) + 0x10
                             ));
  *(unsigned int *)puStack_10c[4] = uVar9;
  *(int *)puStack_10c[2] = iStack_d0;
  if (*(int *)puStack_10c[4] != -1) {
    iVar16 = 0;
    uVar17 = uVar18;
    do {
      *(unsigned int *)(puStack_108[2] + iVar16) = *(unsigned int *)puStack_10c[4];
      iVar16 = iVar16 + 4;
      uVar17 = uVar17 - 1;
    } while (uVar17 != 0);
    lVar12 = 0;
    lVar14 = (uVar2 & 0xfffff) << 2;
    do {
      uVar17 = (uVar2 & 0xfffff) * 2 + lVar12;
      lVar12 = lVar12 + 1;
      iVar1 = (int)((uVar17 & 0xffffffff) << 2);
      iVar16 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      uVar9 = *(unsigned int *)(iVar16 + (int)lVar14);
      *(unsigned int *)(iVar16 + (int)lVar14) = *(unsigned int *)(iVar1 + iVar16);
      lVar14 = lVar14 + 4;
      *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar1) = uVar9;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
    *(unsigned int *)(param_1 + 0x450) = 1;
    return 0;
  }
  return 0xffffffff8007000e;
}

