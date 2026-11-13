extern int fn_82C4E5E8();


unsigned __int64 fn_82C592E0(int param_1)

{
  unsigned __int64 *puVar1;
  __int64 *plVar2;
  int iVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar9 = 0xb;
  iVar7 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar6 = uVar5 + 0x10;
  iVar3 = 0;
  if ((uVar6 & 0xffffffff) < 0xb) {
    do {
      iVar7 = iVar3;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
      iVar7 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar7;
      *puVar1 = *puVar1 << (uVar6 & 0x7f);
      if ((__int64)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar6 = uVar5 + 0x10;
      iVar3 = iVar7;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar9);
  iVar7 = (int)(*puVar1 >> (0x40 - uVar9 & 0x7f)) + iVar7;
  *puVar1 = *puVar1 << (uVar9 & 0x7f);
  if ((__int64)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar1);
  }
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar9 = 0xb;
  iVar8 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar6 = uVar5 + 0x10;
  iVar3 = 0;
  if ((uVar6 & 0xffffffff) < 0xb) {
    do {
      iVar8 = iVar3;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar9 = uVar9 - uVar6;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
      iVar8 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar8;
      *puVar1 = *puVar1 << (uVar6 & 0x7f);
      if ((__int64)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar6 = uVar5 + 0x10;
      iVar3 = iVar8;
    } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar9);
  iVar8 = (int)(*puVar1 >> (0x40 - uVar9 & 0x7f)) + iVar8;
  *puVar1 = *puVar1 << (uVar9 & 0x7f);
  if ((__int64)(uVar5 - uVar9) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((iVar7 == 0) || (iVar8 == 0)) {
    uVar4 = 1;
  }
  else {
    plVar2 = *(__int64 **)(param_1 + 0x54);
    uVar9 = 5;
    *(int *)(param_1 + 0x9c) = iVar7;
    *(int *)(param_1 + 0xa0) = iVar8;
    uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
    uVar6 = uVar5 + 0x10;
    if ((uVar6 & 0xffffffff) < 5) {
      do {
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *plVar2 = *plVar2 << (uVar6 & 0x7f);
        *(int *)(plVar2 + 1) = (int)(uVar5 - uVar6);
        if ((__int64)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(plVar2);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
        uVar6 = uVar5 + 0x10;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    *plVar2 = *plVar2 << (uVar9 & 0x7f);
    *(int *)(plVar2 + 1) = (int)(uVar5 - uVar9);
    if ((__int64)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(plVar2);
    }
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    *(unsigned int *)(param_1 + 0xf68) = 0;
    uVar9 = 1;
    *(unsigned int *)(param_1 + 0xf74) = 1;
    iVar7 = 0;
    *(unsigned int *)(param_1 + 0x1b8) = 0;
    *(unsigned int *)(param_1 + 0xf6c) = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar6 = uVar5 + 0x10;
    iVar3 = 0;
    if ((uVar6 & 0xffffffff) == 0) {
      do {
        iVar7 = iVar3;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
        iVar7 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar7;
        *puVar1 = *puVar1 << (uVar6 & 0x7f);
        if ((__int64)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar6 = uVar5 + 0x10;
        iVar3 = iVar7;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    uVar6 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar9);
    *puVar1 = uVar6 << (uVar9 & 0x7f);
    if ((__int64)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar1);
    }
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar10 = 1;
    *(int *)(param_1 + 0xf64) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar7;
    iVar7 = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar6 = uVar5 + 0x10;
    iVar3 = 0;
    if ((uVar6 & 0xffffffff) == 0) {
      do {
        iVar7 = iVar3;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar6;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
        iVar7 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((unsigned int)uVar10 & 0x3f)) + iVar7;
        *puVar1 = *puVar1 << (uVar6 & 0x7f);
        if ((__int64)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar6 = uVar5 + 0x10;
        iVar3 = iVar7;
      } while ((uVar6 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    uVar6 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar10);
    *puVar1 = uVar6 << (uVar10 & 0x7f);
    if ((__int64)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(puVar1);
    }
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar9 = 3;
    *(int *)(param_1 + 400) = (int)(uVar6 >> (0x40 - uVar10 & 0x7f)) + iVar7;
    iVar7 = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar6 = uVar5 + 0x10;
    iVar3 = 0;
    if ((uVar6 & 0xffffffff) < 3) {
      do {
        iVar7 = iVar3;
        if ((uVar6 & 0xffffffff) == 0) break;
        uVar9 = uVar9 - uVar6;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
        iVar7 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((unsigned int)uVar9 & 0x3f)) + iVar7;
        *puVar1 = *puVar1 << (uVar6 & 0x7f);
        if ((__int64)(uVar5 - uVar6) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar6 = uVar5 + 0x10;
        iVar3 = iVar7;
      } while ((uVar6 & 0xffffffff) < (uVar9 & 0xffffffff));
    }
    uVar6 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar9);
    *puVar1 = uVar6 << (uVar9 & 0x7f);
    if ((__int64)(uVar5 - uVar9) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0x3ca8) = (int)(uVar6 >> (0x40 - uVar9 & 0x7f)) + iVar7;
    uVar4 = 0;
  }
  return uVar4;
}

