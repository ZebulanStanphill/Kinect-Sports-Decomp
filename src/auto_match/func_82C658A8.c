extern int fn_82C4E470();
extern int fn_82C4E5E8();


unsigned __int64 fn_82C658A8(int param_1,int *param_2)

{
  __int64 *plVar1;
  unsigned __int64 *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar9;
  unsigned __int64 uVar10;
  int iVar11;
  
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x54) + 8) & 7;
  uVar4 = 8;
  if (uVar3 != 0) {
    uVar4 = uVar3;
  }
  fn_82C4E470(*(int *)(param_1 + 0x54),uVar4);
  uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe20) + 0x10;
  plVar1 = *(__int64 **)(param_1 + 0x54);
  uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
  uVar7 = uVar5 + 0x10;
  if (((uVar10 & 0xffffffff) < 0x21) && ((uVar10 & 0xffffffff) != 0)) {
    if ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff)) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((__int64)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((__int64)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
  }
  uVar5 = 0;
  lVar6 = (__int64)*(int *)(param_1 + 0x8c) * (__int64)*(int *)(param_1 + 0x88);
  for (lVar8 = lVar6 + -1; lVar8 != 0; lVar8 = (__int64)((int)lVar8 >> 1)) {
    uVar5 = uVar5 + 1;
  }
  iVar11 = 0;
  if (1 < (int)lVar6) {
    puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
    iVar11 = 0;
    uVar7 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
    uVar10 = uVar7 + 0x10;
    if ((uVar5 & 0xffffffff) < 0x21) {
      if ((uVar5 & 0xffffffff) == 0) {
        iVar11 = 0;
      }
      else {
        iVar9 = 0;
        if ((uVar10 & 0xffffffff) < (uVar5 & 0xffffffff)) {
          do {
            iVar11 = iVar9;
            if ((uVar10 & 0xffffffff) == 0) break;
            uVar5 = uVar5 - uVar10;
            *(int *)(puVar2 + 1) = (int)(uVar7 - uVar10);
            iVar11 = ((int)(*puVar2 >> (0x40 - uVar10 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) + iVar11;
            *puVar2 = *puVar2 << (uVar10 & 0x7f);
            if ((__int64)(uVar7 - uVar10) < 0) {
              fn_82C4E5E8(puVar2);
            }
            uVar7 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
            uVar10 = uVar7 + 0x10;
            iVar9 = iVar11;
          } while ((uVar10 & 0xffffffff) < (uVar5 & 0xffffffff));
        }
        *(int *)(puVar2 + 1) = (int)(uVar7 - uVar5);
        iVar11 = (int)(*puVar2 >> (0x40 - uVar5 & 0x7f)) + iVar11;
        *puVar2 = *puVar2 << (uVar5 & 0x7f);
        if ((__int64)(uVar7 - uVar5) < 0) {
          fn_82C4E5E8(puVar2);
        }
      }
    }
    else {
      iVar11 = 0;
    }
  }
  puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar10 = 5;
  *(int *)(param_1 + 0xe40) = iVar11;
  iVar9 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
  uVar7 = uVar5 + 0x10;
  iVar11 = 0;
  if ((uVar7 & 0xffffffff) < 5) {
    do {
      iVar9 = iVar11;
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar7;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar7);
      iVar9 = ((int)(*puVar2 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar10 & 0x3f)) + iVar9;
      *puVar2 = *puVar2 << (uVar7 & 0x7f);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
      uVar7 = uVar5 + 0x10;
      iVar11 = iVar9;
    } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar7 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
  *puVar2 = uVar7 << (uVar10 & 0x7f);
  if ((__int64)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar2);
  }
  *param_2 = (int)(uVar7 >> (0x40 - uVar10 & 0x7f)) + iVar9;
  uVar10 = 1;
  puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
  lVar8 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
  uVar7 = uVar5 + 0x10;
  if ((uVar7 & 0xffffffff) == 0) {
    do {
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar10 = uVar10 - uVar7;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar7);
      lVar8 = (unsigned __int64)(unsigned int)((int)(*puVar2 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar10 & 0x3f)) +
              lVar8;
      *puVar2 = *puVar2 << (uVar7 & 0x7f);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar2);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
      uVar7 = uVar5 + 0x10;
    } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
  }
  uVar7 = *puVar2;
  *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
  *puVar2 = uVar7 << (uVar10 & 0x7f);
  if ((__int64)(uVar5 - uVar10) < 0) {
    fn_82C4E5E8(puVar2);
  }
  if (((uVar7 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) != 0) {
    do {
      puVar2 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar10 = 1;
      lVar8 = 0;
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
      uVar7 = uVar5 + 0x10;
      if ((uVar7 & 0xffffffff) == 0) {
        do {
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar10 = uVar10 - uVar7;
          *(int *)(puVar2 + 1) = (int)(uVar5 - uVar7);
          lVar8 = (unsigned __int64)
                  (unsigned int)((int)(*puVar2 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar10 & 0x3f)) + lVar8;
          *puVar2 = *puVar2 << (uVar7 & 0x7f);
          if ((__int64)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(puVar2);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(puVar2 + 1);
          uVar7 = uVar5 + 0x10;
        } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      uVar7 = *puVar2;
      *(int *)(puVar2 + 1) = (int)(uVar5 - uVar10);
      *puVar2 = uVar7 << (uVar10 & 0x7f);
      if ((__int64)(uVar5 - uVar10) < 0) {
        fn_82C4E5E8(puVar2);
      }
    } while (((uVar7 >> (0x40 - uVar10 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) != 0);
    plVar1 = *(__int64 **)(param_1 + 0x54);
    uVar10 = 1;
    uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) == 0) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((__int64)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((__int64)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    plVar1 = *(__int64 **)(param_1 + 0x54);
    uVar10 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe68);
    uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar10 < 0x21) && (uVar10 != 0)) {
      if ((uVar7 & 0xffffffff) < uVar10) {
        do {
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar10 = uVar10 - uVar7;
          *plVar1 = *plVar1 << (uVar7 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
          if ((__int64)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(plVar1);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
          uVar7 = uVar5 + 0x10;
        } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      *plVar1 = *plVar1 << (uVar10 & 0x7f);
      *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
      if ((__int64)(uVar5 - uVar10) < 0) {
        fn_82C4E5E8(plVar1);
      }
    }
    plVar1 = *(__int64 **)(param_1 + 0x54);
    uVar10 = 1;
    uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) == 0) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((__int64)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((__int64)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    plVar1 = *(__int64 **)(param_1 + 0x54);
    uVar10 = 2;
    uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) < 2) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((__int64)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((__int64)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    plVar1 = *(__int64 **)(param_1 + 0x54);
    uVar10 = 3;
    uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
    uVar7 = uVar5 + 0x10;
    if ((uVar7 & 0xffffffff) < 3) {
      do {
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar10 = uVar10 - uVar7;
        *plVar1 = *plVar1 << (uVar7 & 0x7f);
        *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
        if ((__int64)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(plVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
        uVar7 = uVar5 + 0x10;
      } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
    }
    *plVar1 = *plVar1 << (uVar10 & 0x7f);
    *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
    if ((__int64)(uVar5 - uVar10) < 0) {
      fn_82C4E5E8(plVar1);
    }
    if (*(int *)(param_1 + 0x120) == 1) {
      plVar1 = *(__int64 **)(param_1 + 0x54);
      uVar10 = 3;
      uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
      uVar7 = uVar5 + 0x10;
      if ((uVar7 & 0xffffffff) < 3) {
        do {
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar10 = uVar10 - uVar7;
          *plVar1 = *plVar1 << (uVar7 & 0x7f);
          *(int *)(plVar1 + 1) = (int)(uVar5 - uVar7);
          if ((__int64)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(plVar1);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(plVar1 + 1);
          uVar7 = uVar5 + 0x10;
        } while ((uVar7 & 0xffffffff) < (uVar10 & 0xffffffff));
      }
      *plVar1 = *plVar1 << (uVar10 & 0x7f);
      *(int *)(plVar1 + 1) = (int)(uVar5 - uVar10);
      if ((__int64)(uVar5 - uVar10) < 0) {
        fn_82C4E5E8(plVar1);
      }
    }
  }
  return 1;
}

