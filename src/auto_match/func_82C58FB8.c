extern int fn_82C4E5E8();
extern int fn_82CA4F58();


void fn_82C58FB8(int param_1)

{
  __int64 *plVar1;
  unsigned int uVar2;
  unsigned __int64 *puVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar11;
  int iVar10;
  
  if (*(int *)(param_1 + 0xfc8) == 2) {
    *(unsigned int *)(param_1 + 0x11c) = 1;
    *(unsigned int *)(param_1 + 0xfc4) = 0xf;
  }
  else {
    plVar1 = *(__int64 **)(param_1 + 0x54);
    lVar9 = 0;
    iVar10 = 0;
    *(unsigned int *)(param_1 + 0x1dc) = 0;
    *(unsigned int *)(param_1 + 0xfc4) = 0;
    uVar2 = *(unsigned int *)(plVar1 + 1);
    lVar6 = *plVar1;
    *plVar1 = lVar6 << 1;
    iVar4 = -(int)(lVar6 >> 0x3f);
    *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar2 - 1);
    if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
      fn_82C4E5E8();
    }
    *(int *)(param_1 + 0x11c) = iVar4;
    if (iVar4 == 0) {
      return;
    }
    puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar11 = 2;
    lVar6 = 0;
    uVar7 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
    uVar8 = uVar7 + 0x10;
    if ((uVar8 & 0xffffffff) < 2) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar11 = uVar11 - uVar8;
        *(int *)(puVar3 + 1) = (int)(uVar7 - uVar8);
        lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar3 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f))
                + lVar6;
        *puVar3 = *puVar3 << (uVar8 & 0x7f);
        if ((__int64)(uVar7 - uVar8) < 0) {
          fn_82C4E5E8(puVar3);
        }
        uVar7 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
        uVar8 = uVar7 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
    }
    *(int *)(puVar3 + 1) = (int)(uVar7 - uVar11);
    uVar8 = (*puVar3 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar6;
    *puVar3 = *puVar3 << (uVar11 & 0x7f);
    if ((__int64)(uVar7 - uVar11) < 0) {
      fn_82C4E5E8(puVar3);
    }
    if ((uVar8 & 0xffffffff) == 0) {
      *(unsigned int *)(param_1 + 0xfc4) = 0xf;
    }
    else if ((uVar8 & 0xffffffff) == 1) {
      puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar11 = 2;
      uVar7 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
      uVar8 = uVar7 + 0x10;
      if ((uVar8 & 0xffffffff) < 2) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar8;
          *(int *)(puVar3 + 1) = (int)(uVar7 - uVar8);
          lVar9 = (unsigned __int64)
                  (unsigned int)((int)(*puVar3 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + lVar9;
          *puVar3 = *puVar3 << (uVar8 & 0x7f);
          if ((__int64)(uVar7 - uVar8) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar7 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
          uVar8 = uVar7 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      *(int *)(puVar3 + 1) = (int)(uVar7 - uVar11);
      uVar8 = (*puVar3 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
      *puVar3 = *puVar3 << (uVar11 & 0x7f);
      if ((__int64)(uVar7 - uVar11) < 0) {
        fn_82C4E5E8(puVar3);
      }
      if ((uVar8 & 0xffffffff) == 3) {
        *(unsigned int *)(param_1 + 0xfc4) = 9;
      }
      else {
        *(int *)(param_1 + 0xfc4) = 3 << ((unsigned int)uVar8 & 0x3f);
      }
    }
    else if ((uVar8 & 0xffffffff) == 2) {
      puVar3 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar7 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
      uVar11 = uVar7 + 0x10;
      if ((uVar11 & 0xffffffff) < 2) {
        do {
          iVar10 = (int)lVar9;
          if ((uVar11 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar11;
          *(int *)(puVar3 + 1) = (int)(uVar7 - uVar11);
          lVar9 = (unsigned __int64)
                  (unsigned int)((int)(*puVar3 >> (0x40 - uVar11 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + lVar9;
          iVar10 = (int)lVar9;
          *puVar3 = *puVar3 << (uVar11 & 0x7f);
          if ((__int64)(uVar7 - uVar11) < 0) {
            fn_82C4E5E8(puVar3);
          }
          uVar7 = (unsigned __int64)*(unsigned int *)(puVar3 + 1);
          uVar11 = uVar7 + 0x10;
        } while ((uVar11 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar11 = *puVar3;
      *(int *)(puVar3 + 1) = (int)(uVar7 - uVar8);
      *puVar3 = uVar11 << (uVar8 & 0x7f);
      if ((__int64)(uVar7 - uVar8) < 0) {
        fn_82C4E5E8(puVar3);
      }
      *(int *)(param_1 + 0xfc4) = 1 << ((int)(uVar11 >> (0x40 - uVar8 & 0x7f)) + iVar10 & 0x3fU);
    }
    else if ((uVar8 & 0xffffffff) == 3) {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      lVar6 = *plVar1;
      uVar2 = *(unsigned int *)(plVar1 + 1);
      *plVar1 = lVar6 << 1;
      *(int *)(plVar1 + 1) = (int)((unsigned __int64)uVar2 - 1);
      if ((__int64)((unsigned __int64)uVar2 - 1) < 0) {
        fn_82C4E5E8();
      }
      *(unsigned int *)(param_1 + 0x1dc) = (unsigned int)((unsigned __int64)lVar6 >> 0x3f);
    }
    if ((*(int *)(param_1 + 0x1dc) == 0) && (*(int *)(param_1 + 0xfc4) == 0)) {
      return;
    }
  }
  uVar5 = fn_82CA4F58(param_1,1);
  *(unsigned int *)(param_1 + 0xfcc) = uVar5;
  return;
}

