extern int fn_82A70960();
extern int fn_82A70E08();
extern int fn_82C2B580();


unsigned __int64 fn_82A70FB8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  __int64 lVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  int iVar13;
  unsigned __int64 uVar14;
  __int64 lVar15;
  
  uVar14 = 0;
  puVar3 = (unsigned int *)0x0;
  uVar11 = 0;
  iVar5 = 0;
  puVar12 = (unsigned int *)0x0;
  iVar13 = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    puVar3 = (unsigned int *)fn_82C2B580(0x1004);
    puVar12 = (unsigned int *)0x0;
    iVar5 = 0;
    if (puVar3 != (unsigned int *)0x0) {
      puVar12 = puVar3 + -1;
      do {
        if ((uVar11 & 0x7ffff) == 0x400) {
          uVar6 = 0;
        }
        else {
          uVar6 = fn_82A70960(0xffffffff8208fe44);
        }
        uVar4 = fn_82A70E08(param_1,uVar6);
        uVar11 = uVar11 + 1;
        puVar12 = puVar12 + 1;
        *puVar12 = uVar4;
      } while ((int)uVar11 < 0x401);
      if (0x13fffff < (int)*puVar3) {
        *puVar3 = puVar3[1];
      }
      iVar5 = fn_82C2B580(0x1004);
      puVar12 = puVar3;
      if (iVar5 != 0) {
        lVar7 = 0;
        lVar15 = 0x400;
        puVar9 = puVar3;
        do {
          lVar10 = (unsigned __int64)puVar9[1] - (unsigned __int64)*puVar9;
          if (lVar10 < 1) {
            lVar10 = (unsigned __int64)*puVar9 - (unsigned __int64)puVar9[1];
          }
          if ((int)lVar7 < (int)lVar10) {
            lVar7 = lVar10;
          }
          puVar9 = puVar9 + 1;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        if ((int)lVar7 < 3) {
          lVar7 = 2;
        }
        uVar4 = 0;
        uVar11 = 0;
        if (1 < (lVar7 - 1U & 0xffffffff)) {
          do {
            uVar4 = uVar11 + 1;
            uVar11 = uVar4;
          } while (1 < (unsigned int)(lVar7 - 1U) >> (uVar4 & 0x3f));
        }
        iVar13 = (int)((param_2 & 0x3fffffff) << 2);
        *(unsigned int *)(iVar13 + *(int *)(param_1 + 0x128)) = 0x1d - uVar4;
        if (*(int *)(iVar13 + *(int *)(param_1 + 0x128)) < 1) {
          uVar8 = 0;
        }
        else {
          uVar8 = *(unsigned int *)(iVar13 + *(int *)(param_1 + 0x128));
        }
        iVar2 = iVar5 - (int)puVar3;
        *(unsigned int *)(iVar13 + *(int *)(param_1 + 0x128)) = uVar8;
        lVar7 = 0x400;
        puVar9 = puVar3;
        do {
          iVar1 = (int)(puVar9[1] - *puVar9 <<
                       (*(unsigned int *)(iVar13 + *(int *)(param_1 + 0x128)) & 0x3f)) >> 0xd;
          *(int *)(iVar2 + (int)puVar9) = iVar1;
          uVar11 = puVar9[1];
          if ((int)*puVar9 < (int)uVar11) {
            if ((int)uVar11 <
                (int)((iVar1 * 0x1fff >> (*(unsigned int *)(iVar13 + *(int *)(param_1 + 0x128)) & 0x3f)) +
                     *puVar9)) {
LAB_82a711b8:
              *(unsigned int *)(iVar2 + (int)puVar9) = 0;
            }
          }
          else if ((int)((*(int *)(iVar2 + (int)puVar9) * 0x1fff >>
                         (*(unsigned int *)(iVar13 + *(int *)(param_1 + 0x128)) & 0x3f)) + *puVar9) <
                   (int)uVar11) goto LAB_82a711b8;
          puVar9 = puVar9 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        *(unsigned int *)(iVar5 + 0x1000) = 0;
        iVar13 = iVar5;
        goto LAB_82a711c8;
      }
    }
    uVar14 = 0xffffffff8007000e;
  }
LAB_82a711c8:
  iVar2 = (int)((param_2 & 0x3fffffff) << 2);
  *(unsigned int **)(*(int *)(param_1 + 0x10c) + iVar2) = puVar3;
  *(unsigned int **)(*(int *)(param_1 + 0x104) + iVar2) = puVar12;
  *(int *)(*(int *)(param_1 + 0x110) + iVar2) = iVar5;
  *(int *)(*(int *)(param_1 + 0x108) + iVar2) = iVar13;
  return uVar14;
}

