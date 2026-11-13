extern int fn_82C4E5E8();
extern int fn_82C57C50();
extern int fn_82CA6740();


unsigned __int64 fn_82C57F70(int param_1)

{
  __int64 *plVar1;
  unsigned __int64 *puVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  int iVar7;
  unsigned __int64 uVar6;
  __int64 lVar8;
  unsigned __int64 uVar9;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned __int64 uVar10;
  unsigned int uVar13;
  __int64 lVar14;
  unsigned __int64 uVar15;
  int iVar16;
  __int64 lVar17;
  int aiStack_50 [20];
  
  uVar13 = 0;
  uVar9 = (__int64)*(int *)(param_1 + 0x50d0) * (__int64)*(int *)(param_1 + 0x90);
  lVar17 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x1fffffff) * 8 +
           (unsigned __int64)*(unsigned int *)(param_1 + 0x110);
  iVar7 = fn_82CA6740(*(unsigned int *)(param_1 + 0x8c),3);
  iVar5 = (int)lVar17;
  if ((iVar7 == 0) && (iVar7 = fn_82CA6740(*(unsigned int *)(param_1 + 0x88),3), iVar7 != 0)) {
    uVar11 = *(unsigned int *)(param_1 + 0x88);
    iVar7 = 0;
    uVar9 = (unsigned __int64)uVar11 & 1;
    if (0 < *(int *)(param_1 + 0x8c)) {
      do {
        uVar15 = uVar9;
        if ((int)uVar9 < (int)uVar11) {
          do {
            iVar16 = uVar11 * iVar7 + (int)uVar15;
            uVar6 = fn_82C57C50(*(unsigned int *)(param_1 + 0x54),0xffffffff820fc1bc,
                                  0xffffffff820fc1f8,aiStack_50);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            uVar15 = uVar15 + 2;
            puVar12 = (unsigned int *)(iVar16 * 0x18 + iVar5);
            *puVar12 = aiStack_50[0] << 0x1f | *puVar12 & 0x7fffffff;
            puVar12[6] = (aiStack_50[0] >> 1) << 0x1f | puVar12[6] & 0x7fffffff;
            iVar16 = iVar16 + *(int *)(param_1 + 0x88);
            puVar12 = (unsigned int *)(iVar16 * 0x18 + iVar5);
            *puVar12 = (aiStack_50[0] >> 2) << 0x1f | *puVar12 & 0x7fffffff;
            iVar4 = aiStack_50[0] >> 4;
            puVar12[6] = (aiStack_50[0] >> 3) << 0x1f | puVar12[6] & 0x7fffffff;
            aiStack_50[0] = aiStack_50[0] >> 5;
            puVar12 = (unsigned int *)((iVar16 + *(int *)(param_1 + 0x88)) * 0x18 + iVar5);
            *puVar12 = iVar4 << 0x1f | *puVar12 & 0x7fffffff;
            puVar12[6] = aiStack_50[0] << 0x1f | puVar12[6] & 0x7fffffff;
            uVar11 = *(unsigned int *)(param_1 + 0x88);
          } while ((int)uVar15 < (int)uVar11);
        }
        iVar7 = iVar7 + 3;
      } while (iVar7 < *(int *)(param_1 + 0x8c));
    }
  }
  else {
    uVar13 = *(unsigned int *)(param_1 + 0x8c) & 1;
    uVar9 = fn_82CA6740(*(unsigned int *)(param_1 + 0x88),3);
    uVar11 = uVar13;
    if ((int)uVar13 < *(int *)(param_1 + 0x8c)) {
      do {
        iVar7 = *(int *)(param_1 + 0x88);
        uVar15 = uVar9;
        if ((int)uVar9 < iVar7) {
          do {
            lVar14 = (__int64)iVar7 * (__int64)(int)uVar11 + uVar15;
            uVar6 = fn_82C57C50(*(unsigned int *)(param_1 + 0x54),0xffffffff820fc1bc,
                                  0xffffffff820fc1f8,aiStack_50);
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            puVar12 = (unsigned int *)((int)lVar14 * 0x18 + iVar5);
            iVar7 = (int)((lVar14 + 2U + (lVar14 + 2U & 0x7fffffff) * 2 & 0xffffffff) << 3);
            uVar15 = uVar15 + 3;
            uVar3 = *(unsigned int *)(iVar7 + iVar5);
            *puVar12 = aiStack_50[0] << 0x1f | *puVar12 & 0x7fffffff;
            puVar12[6] = (aiStack_50[0] >> 1) << 0x1f | puVar12[6] & 0x7fffffff;
            *(unsigned int *)(iVar7 + iVar5) = (aiStack_50[0] >> 2) << 0x1f | uVar3 & 0x7fffffff;
            lVar14 = lVar14 + (unsigned __int64)*(unsigned int *)(param_1 + 0x88);
            uVar10 = lVar14 + 2;
            puVar12 = (unsigned int *)((int)lVar14 * 0x18 + iVar5);
            iVar16 = (int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            uVar3 = *(unsigned int *)(iVar16 + iVar5);
            iVar7 = aiStack_50[0] >> 4;
            *puVar12 = (aiStack_50[0] >> 3) << 0x1f | *puVar12 & 0x7fffffff;
            aiStack_50[0] = aiStack_50[0] >> 5;
            puVar12[6] = iVar7 << 0x1f | puVar12[6] & 0x7fffffff;
            *(unsigned int *)(iVar16 + iVar5) = aiStack_50[0] << 0x1f | uVar3 & 0x7fffffff;
            iVar7 = *(int *)(param_1 + 0x88);
          } while ((int)uVar15 < iVar7);
        }
        uVar11 = uVar11 + 2;
      } while ((int)uVar11 < *(int *)(param_1 + 0x8c));
    }
  }
  lVar14 = 0;
  iVar7 = (int)uVar9;
  if (0 < iVar7) {
    do {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar8 = *plVar1;
      uVar11 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar8 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar11 - 1);
      if ((__int64)((unsigned __int64)uVar11 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar8 < 0) {
        iVar16 = 0;
        if (0 < *(int *)(param_1 + 0x8c)) {
          do {
            puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
            uVar15 = *puVar2;
            uVar11 = *(unsigned int *)(puVar2 + 1);
            *puVar2 = uVar15 << 1;
            *(int *)(puVar2 + 1) = (int)((unsigned __int64)uVar11 - 1);
            if ((__int64)((unsigned __int64)uVar11 - 1) < 0) {
              fn_82C4E5E8();
            }
            uVar10 = (__int64)iVar16 * (__int64)*(int *)(param_1 + 0x88) + lVar14;
            iVar16 = iVar16 + 1;
            iVar4 = (int)((uVar10 + (uVar10 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(unsigned int *)(iVar4 + iVar5) =
                 (unsigned int)((uVar15 >> 0x3f) << 0x1f) | *(unsigned int *)(iVar4 + iVar5) & 0x7fffffff;
          } while (iVar16 < *(int *)(param_1 + 0x8c));
        }
      }
      else {
        iVar16 = 0;
        if (0 < *(int *)(param_1 + 0x8c)) {
          do {
            uVar15 = (__int64)iVar16 * (__int64)*(int *)(param_1 + 0x88) + lVar14;
            iVar16 = iVar16 + 1;
            iVar4 = (int)((uVar15 + (uVar15 & 0x7fffffff) * 2 & 0xffffffff) << 3);
            *(unsigned int *)(iVar4 + iVar5) = *(unsigned int *)(iVar4 + iVar5) & 0x7fffffff;
          } while (iVar16 < *(int *)(param_1 + 0x8c));
        }
      }
      lVar14 = lVar14 + 1;
    } while ((int)lVar14 < iVar7);
  }
  if (uVar13 != 0) {
    plVar1 = *(__int64 **)(param_1 + 0x54);
    lVar14 = *plVar1;
    uVar13 = *(unsigned int *)(plVar1 + 1);
    *plVar1 = lVar14 << 1;
    *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar13 - 1);
    if ((__int64)((unsigned __int64)uVar13 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar14 < 0) {
      if (iVar7 < *(int *)(param_1 + 0x88)) {
        lVar17 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x1fffffff) * 8 + lVar17 + -0x18;
        do {
          puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
          uVar15 = *puVar2;
          uVar13 = *(unsigned int *)(puVar2 + 1);
          *puVar2 = uVar15 << 1;
          *(int *)(puVar2 + 1) = (int)((unsigned __int64)uVar13 - 1);
          if ((__int64)((unsigned __int64)uVar13 - 1) < 0) {
            fn_82C4E5E8();
          }
          iVar5 = (int)lVar17;
          uVar9 = uVar9 + 1;
          lVar17 = lVar17 + 0x18;
          *(unsigned int *)lVar17 = (unsigned int)((uVar15 >> 0x3f) << 0x1f) | *(unsigned int *)(iVar5 + 0x18) & 0x7fffffff;
        } while ((int)uVar9 < *(int *)(param_1 + 0x88));
        return 0;
      }
    }
    else if (iVar7 < *(int *)(param_1 + 0x88)) {
      lVar17 = (uVar9 + (uVar9 & 0x7fffffff) * 2 & 0x1fffffff) * 8 + lVar17 + -0x18;
      do {
        iVar5 = (int)lVar17;
        uVar9 = uVar9 + 1;
        lVar17 = lVar17 + 0x18;
        *(unsigned int *)lVar17 = *(unsigned int *)(iVar5 + 0x18) & 0x7fffffff;
      } while ((int)uVar9 < *(int *)(param_1 + 0x88));
    }
  }
  return 0;
}

