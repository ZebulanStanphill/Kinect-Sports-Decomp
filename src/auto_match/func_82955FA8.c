extern unsigned int *auStack_a0;
extern int fn_8294B7A8();
extern int fn_829632F0();
extern int fn_829639F0();
extern int fn_829646C8();
extern int fn_82964868();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int uStack_a8;


unsigned __int64 fn_82955FA8(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  __int64 lVar11;
  int *piVar12;
  unsigned char *pbVar13;
  unsigned char *pbVar14;
  unsigned __int64 uVar15;
  int iVar16;
  unsigned __int64 uVar17;
  unsigned int *puVar18;
  __int64 lVar19;
  unsigned char *pbVar20;
  unsigned int uVar21;
  int *piVar22;
  int aiStack_d0 [4];
  int aiStack_c0 [4];
  unsigned char abStack_b0 [8];
  unsigned __int64 uStack_a8;
  unsigned char auStack_a0 [160];
  
  uVar7 = fn_8294B7A8();
  if (-1 < (int)uVar7) {
    uVar1 = param_1[3];
    uVar15 = (unsigned __int64)uVar1;
    uVar17 = 0;
    if (uVar15 != 0) {
      iVar16 = 0;
      do {
        puVar3 = *(unsigned int **)(iVar16 + param_1[6]);
        uVar2 = *puVar3;
        if ((uVar2 & 0xfff00000) != 0) {
          uVar6 = uVar2 & 0xfffff;
          lVar19 = 0;
          iVar8 = (**(int (***)())(*param_1 + 0x20))(param_1,puVar3,aiStack_d0);
          if (iVar8 != 0) {
            puVar18 = (unsigned int *)((int)&uStack_a8 + 4);
            do {
              if ((*puVar3 & 0xfff00000) == 0x74100000) break;
              if ((unsigned __int64)(unsigned int)param_1[0x54] <= (uVar17 & 0xffffffff)) {
                aiStack_c0[2] = -1;
                aiStack_c0[3] = -1;
                uStack_a8 = 0xffffffffffffffff;
              }
              uVar21 = -(unsigned int)(uVar6 == 1) & 3;
              pbVar20 = (unsigned char *)(aiStack_d0[0] * uVar6 * 4 + puVar3[2]);
              iVar8 = (uVar2 & 0xfffff) * 4;
              lVar11 = 0;
              if ((uVar2 & 0xfffff) != 0) {
                pbVar14 = pbVar20;
                pbVar13 = abStack_b0 + uVar21 * 4;
                do {
                  lVar11 = (unsigned __int64)*pbVar14 - (unsigned __int64)*pbVar13;
                  if (lVar11 != 0) break;
                  pbVar14 = pbVar14 + 1;
                  pbVar13 = pbVar13 + 1;
                } while (pbVar14 != pbVar20 + iVar8);
              }
              if (((int)lVar11 != 0) ||
                 ((puVar3[3] != 0 &&
                  (*(int *)(*(int *)(*(int *)puVar3[4] * 4 + param_1[5]) + 0x14) != -1)))) {
                iVar9 = fn_829646C8(param_1,uVar6 | 0x10000000,0xffffffffffffffff,
                                          0xffffffffffffffff);
                if (iVar9 == -1) {
                  return 0xffffffff8007000e;
                }
                iVar9 = *(int *)(iVar9 * 4 + param_1[6]);
                uVar7 = fn_829632F0(iVar9,puVar3);
                if ((int)uVar7 < 0) {
                  return uVar7;
                }
                piVar22 = aiStack_c0 + uVar21;
                uVar7 = (**(int (***)())(*param_1 + 0x154))
                                  (param_1,uVar17,piVar22,uVar6,auStack_a0,lVar19);
                if ((int)uVar7 < 0) {
                  return uVar7;
                }
                iVar4 = *(int *)(*piVar22 * 4 + param_1[5]);
                piVar12 = piVar22;
                for (uVar10 = uVar21; uVar10 < uVar21 + uVar6; uVar10 = uVar10 + 1) {
                  iVar5 = *(int *)(*piVar12 * 4 + param_1[5]);
                  if (puVar3[3] != 0) {
                    *(unsigned int *)(iVar5 + 0x14) =
                         *(unsigned int *)(*(int *)(*(int *)puVar3[4] * 4 + param_1[5]) + 0x14);
                    *(unsigned int *)(iVar5 + 0x18) =
                         *(unsigned int *)(*(int *)(*(int *)puVar3[4] * 4 + param_1[5]) + 0x18);
                  }
                  piVar12 = piVar12 + 1;
                }
                lVar19 = lVar19 + 1;
                puVar18 = puVar18 + 1;
                *puVar18 = *(unsigned int *)(iVar4 + 0xc);
                fn_82F68CC0(*(unsigned int *)(iVar9 + 0x10),piVar22,iVar8);
                fn_82F68CC0(*(unsigned int *)(iVar9 + 8),pbVar20,iVar8);
                fn_82F68CC0(abStack_b0 + uVar21 * 4,pbVar20,iVar8);
              }
              fn_82F68CC0(pbVar20,aiStack_c0 + uVar21,iVar8);
              iVar8 = (**(int (***)())(*param_1 + 0x20))(param_1,puVar3,aiStack_d0);
            } while (iVar8 != 0);
          }
          iVar8 = fn_82964868(param_1,puVar3);
          if (iVar8 == -1) {
            return 0xffffffff8007000e;
          }
          fn_82BA02A8(puVar3);
          fn_829639F0(puVar3);
          *(unsigned int *)(iVar16 + param_1[6]) = 0;
        }
        uVar17 = uVar17 + 1;
        iVar16 = iVar16 + 4;
      } while ((uVar17 & 0xffffffff) < uVar15);
    }
    if (uVar15 < (unsigned int)param_1[3]) {
      iVar16 = uVar1 << 2;
      iVar8 = 0;
      do {
        uVar15 = uVar15 + 1;
        puVar18 = (unsigned int *)(iVar16 + param_1[6]);
        iVar16 = iVar16 + 4;
        *(unsigned int *)(iVar8 + param_1[6]) = *puVar18;
        iVar8 = iVar8 + 4;
      } while ((uVar15 & 0xffffffff) < (unsigned __int64)(unsigned int)param_1[3]);
    }
    uVar7 = 0;
    param_1[3] = param_1[3] - uVar1;
  }
  return uVar7;
}

