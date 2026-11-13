extern int fn_82C4E5E8();
extern int fn_82C57C50();


unsigned __int64 fn_82C7D448(int param_1,__int64 param_2)

{
  __int64 *plVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  __int64 lVar12;
  unsigned int uVar13;
  int iVar14;
  unsigned int uVar15;
  __int64 lVar16;
  unsigned __int64 uVar17;
  unsigned int uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  int aiStack_80;
  
  uVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) + 1 & 0xffffffff) >> 1;
  uVar15 = (unsigned int)uVar3;
  uVar13 = 0;
  uVar4 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) + 1 & 0xffffffff) >> 1;
  uVar18 = (unsigned int)uVar4;
  iVar8 = (int)param_2;
  if ((uVar3 == ((unsigned __int64)(__int64)(int)uVar15 / 3) * 3) &&
     (uVar4 != ((unsigned __int64)(__int64)(int)uVar18 / 3) * 3)) {
    uVar20 = uVar4 & 1;
    iVar14 = 0;
    if (uVar15 != 0) {
      lVar16 = 0;
      do {
        uVar17 = uVar20;
        if ((unsigned int)uVar20 < uVar18) {
          do {
            iVar7 = (int)lVar16 + (int)uVar17;
            uVar10 = fn_82C57C50(*(unsigned int *)(param_1 + 0x54),0xffffffff820fd638,
                                   0xffffffff820fd678,&aiStack_80);
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            *(unsigned char *)(iVar7 + iVar8) = (unsigned char)aiStack_80 & 1;
            iVar9 = uVar18 * 2 + iVar8;
            *(unsigned char *)(iVar7 + iVar8 + 1) = (unsigned char)(aiStack_80 >> 1) & 1;
            iVar5 = aiStack_80 >> 3;
            *(unsigned char *)(uVar18 + iVar8 + iVar7) = (unsigned char)(aiStack_80 >> 2) & 1;
            iVar6 = aiStack_80 >> 4;
            aiStack_80 = aiStack_80 >> 5;
            *(unsigned char *)(uVar18 + iVar8 + iVar7 + 1) = (unsigned char)iVar5 & 1;
            uVar17 = uVar17 + 2;
            *(unsigned char *)(iVar9 + iVar7) = (unsigned char)iVar6 & 1;
            *(unsigned char *)(iVar9 + iVar7 + 1) = (unsigned char)aiStack_80 & 1;
          } while ((int)uVar17 < (int)uVar18);
        }
        iVar14 = iVar14 + 3;
        lVar16 = uVar4 * 3 + lVar16;
      } while (iVar14 < (int)uVar15);
    }
  }
  else {
    uVar17 = uVar3 & 1;
    uVar13 = (unsigned int)uVar17;
    uVar20 = uVar4 + ((unsigned __int64)(__int64)(int)uVar18 / 3) * -3;
    if (uVar13 < uVar15) {
      lVar16 = (__int64)(int)uVar18 * (__int64)(int)uVar13;
      do {
        iVar14 = (int)uVar20;
        uVar19 = uVar20;
        while (iVar14 < (int)uVar18) {
          iVar14 = (int)lVar16 + (int)uVar19;
          uVar10 = fn_82C57C50(*(unsigned int *)(param_1 + 0x54),0xffffffff820fd638,
                                 0xffffffff820fd678,&aiStack_80);
          if ((int)uVar10 != 0) {
            return uVar10;
          }
          *(unsigned char *)(iVar14 + iVar8) = (unsigned char)aiStack_80 & 1;
          iVar5 = uVar18 + iVar8;
          *(unsigned char *)(iVar14 + iVar8 + 1) = (unsigned char)(aiStack_80 >> 1) & 1;
          *(unsigned char *)(iVar14 + iVar8 + 2) = (unsigned char)(aiStack_80 >> 2) & 1;
          iVar7 = aiStack_80 >> 4;
          *(unsigned char *)(iVar5 + iVar14) = (unsigned char)(aiStack_80 >> 3) & 1;
          aiStack_80 = aiStack_80 >> 5;
          uVar19 = uVar19 + 3;
          *(unsigned char *)(iVar5 + iVar14 + 1) = (unsigned char)iVar7 & 1;
          *(unsigned char *)(iVar5 + iVar14 + 2) = (unsigned char)aiStack_80 & 1;
          iVar14 = (int)uVar19;
        }
        uVar17 = uVar17 + 2;
        lVar16 = lVar16 + uVar4 * 2;
      } while ((int)uVar17 < (int)uVar15);
    }
  }
  iVar14 = (int)uVar20;
  uVar17 = uVar20;
  lVar16 = param_2;
  if (0 < iVar14) {
    do {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar11 = *plVar1;
      uVar2 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar11 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar11 < 0) {
        if (uVar15 != 0) {
          lVar11 = lVar16 - uVar4;
          uVar19 = uVar3;
          do {
            plVar1 = *(__int64 **)(param_1 + 0x54);
            lVar12 = *plVar1;
            uVar2 = *(unsigned int *)(plVar1 + 1);
            *plVar1 = lVar12 << 1;
            *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar2 - 1);
            if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
              fn_82C4E5E8();
            }
            uVar19 = uVar19 - 1;
            lVar11 = lVar11 + uVar4;
            *(unsigned char *)lVar11 = (unsigned char)((unsigned __int64)lVar12 >> 0x3f);
          } while (uVar19 != 0);
        }
      }
      else if (uVar15 != 0) {
        lVar11 = lVar16 - uVar4;
        uVar19 = uVar3;
        do {
          lVar11 = lVar11 + uVar4;
          *(unsigned char *)lVar11 = 0;
          uVar19 = uVar19 - 1;
        } while (uVar19 != 0);
      }
      uVar17 = uVar17 - 1;
      lVar16 = lVar16 + 1;
    } while (uVar17 != 0);
  }
  if (uVar13 != 0) {
    plVar1 = *(__int64 **)(param_1 + 0x54);
    lVar16 = *plVar1;
    uVar13 = *(unsigned int *)(plVar1 + 1);
    *plVar1 = lVar16 << 1;
    *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar13 - 1);
    if ((__int64)((unsigned __int64)uVar13 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar16 < 0) {
      if (iVar14 < (int)uVar18) {
        do {
          plVar1 = *(__int64 **)(param_1 + 0x54);
          lVar16 = *plVar1;
          uVar13 = *(unsigned int *)(plVar1 + 1);
          *plVar1 = lVar16 << 1;
          *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar13 - 1);
          if ((__int64)((unsigned __int64)uVar13 - 1) < 0) {
            fn_82C4E5E8();
          }
          *(unsigned char *)((int)uVar20 + iVar8) = (unsigned char)((unsigned __int64)lVar16 >> 0x3f);
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar18);
        return 0;
      }
    }
    else if (iVar14 < (int)uVar18) {
      lVar16 = uVar20 + param_2 + -1;
      for (lVar11 = uVar4 - uVar20; lVar11 != 0; lVar11 = lVar11 + -1) {
        lVar16 = lVar16 + 1;
        *(unsigned char *)lVar16 = 0;
      }
    }
  }
  return 0;
}

