extern int fn_82C4E5E8();
extern int fn_82C589E8();


void fn_82C5D8F0(int param_1)

{
  unsigned __int64 *puVar1;
  __int64 *plVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar9 = 0;
  iVar6 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    uVar8 = 1;
    iVar9 = 0;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        iVar6 = iVar9;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        iVar6 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar6;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar9 = iVar6;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    uVar5 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
    *puVar1 = uVar5 << (uVar8 & 0x7f);
    if ((__int64)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0x1c4) = (int)(uVar5 >> (0x40 - uVar8 & 0x7f)) + iVar6;
  }
  else {
    uVar8 = 2;
    iVar6 = 0;
    if ((uVar5 & 0xffffffff) < 2) {
      do {
        iVar9 = iVar6;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        iVar9 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar6 = iVar9;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
    iVar9 = (int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) + iVar9;
    *puVar1 = *puVar1 << (uVar8 & 0x7f);
    if ((__int64)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(unsigned int *)(param_1 + 0x1c4) = 1;
    if (iVar9 == 0) {
      *(unsigned int *)(param_1 + 0x1c4) = 0;
    }
    else {
      if (iVar9 == 1) {
        *(unsigned int *)(param_1 + 4000) = 0;
      }
      else if (iVar9 == 2) {
        *(unsigned int *)(param_1 + 4000) = 1;
      }
      else {
        *(unsigned int *)(param_1 + 4000) = 2;
      }
      fn_82C589E8(param_1);
    }
  }
  if (*(int *)(param_1 + 0x1bc) == 0) goto LAB_82c5df0c;
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar5 = 1;
  lVar7 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  if (*(int *)(param_1 + 0xf8) < 0xb) {
    uVar8 = uVar4 + 0x10;
    if ((uVar8 & 0xffffffff) == 0) {
      do {
        if ((uVar8 & 0xffffffff) == 0) break;
        uVar5 = uVar5 - uVar8;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
        lVar7 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) +
                lVar7;
        *puVar1 = *puVar1 << (uVar8 & 0x7f);
        if ((__int64)(uVar4 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar8 = uVar4 + 0x10;
      } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
    uVar8 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
    *puVar1 = uVar8 << (uVar5 & 0x7f);
    if ((__int64)(uVar4 - uVar5) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar8 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0) {
LAB_82c5df04:
      iVar6 = param_1 + 0x864;
    }
    else {
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar8 = 1;
      lVar7 = 0;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar7 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar5 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
      *puVar1 = uVar5 << (uVar8 & 0x7f);
      if ((__int64)(uVar4 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0) {
        iVar6 = param_1 + 0x87c;
      }
      else {
LAB_82c5dce0:
        iVar6 = param_1 + 0x870;
      }
    }
  }
  else {
    uVar8 = uVar4 + 0x10;
    if (*(int *)(param_1 + 0xf8) < 0x15) {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar5 = uVar5 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
          lVar7 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar5 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((__int64)(uVar4 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar8 = uVar4 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      *puVar1 = uVar8 << (uVar5 & 0x7f);
      if ((__int64)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0)
      goto LAB_82c5dce0;
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar8 = 1;
      lVar7 = 0;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar7 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar5 & 0x7f);
          if ((__int64)(uVar4 - uVar5) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar5 = uVar4 + 0x10;
        } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      uVar5 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
      *puVar1 = uVar5 << (uVar8 & 0x7f);
      if ((__int64)(uVar4 - uVar8) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0)
      goto LAB_82c5df04;
      iVar6 = param_1 + 0x87c;
    }
    else {
      if ((uVar8 & 0xffffffff) == 0) {
        do {
          if ((uVar8 & 0xffffffff) == 0) break;
          uVar5 = uVar5 - uVar8;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
          lVar7 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) << ((unsigned int)uVar5 & 0x3f))
                  + lVar7;
          *puVar1 = *puVar1 << (uVar8 & 0x7f);
          if ((__int64)(uVar4 - uVar8) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar8 = uVar4 + 0x10;
        } while ((uVar8 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      uVar8 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      *puVar1 = uVar8 << (uVar5 & 0x7f);
      if ((__int64)(uVar4 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      if (((uVar8 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) == 0) {
        iVar6 = param_1 + 0x87c;
      }
      else {
        puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar8 = 1;
        lVar7 = 0;
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        if ((uVar5 & 0xffffffff) == 0) {
          do {
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar8 = uVar8 - uVar5;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
            lVar7 = (unsigned __int64)
                    (unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + lVar7;
            *puVar1 = *puVar1 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
            uVar5 = uVar4 + 0x10;
          } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
        }
        uVar5 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
        *puVar1 = uVar5 << (uVar8 & 0x7f);
        if ((__int64)(uVar4 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        iVar6 = param_1 + 0x870;
        if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar7 & 0xffffffff) != 0)
        goto LAB_82c5df04;
      }
    }
  }
  *(int *)(param_1 + 0x860) = iVar6;
LAB_82c5df0c:
  if (*(int *)(param_1 + 0xf68) != 0) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar8 = 1;
    iVar9 = 0;
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    iVar6 = 0;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        iVar9 = iVar6;
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        iVar9 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
        *puVar1 = *puVar1 << (uVar5 & 0x7f);
        if ((__int64)(uVar4 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar6 = iVar9;
      } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
    }
    uVar5 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
    *puVar1 = uVar5 << (uVar8 & 0x7f);
    if ((__int64)(uVar4 - uVar8) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0x1c8) = (int)(uVar5 >> (0x40 - uVar8 & 0x7f)) + iVar9;
  }
  if (*(int *)(param_1 + 0x1b8) != 0) {
    plVar2 = *(__int64 **)(param_1 + 0x54);
    lVar7 = *plVar2;
    uVar3 = *(unsigned int *)(plVar2 + 1);
    *plVar2 = lVar7 << 1;
    *(int *)(plVar2 + 1) = (int)((unsigned __int64)uVar3 - 1);
    if ((__int64)((unsigned __int64)uVar3 - 1) < 0) {
      fn_82C4E5E8();
    }
    if (lVar7 < 0) {
      plVar2 = *(__int64 **)(param_1 + 0x54);
      *(unsigned int *)(param_1 + 0x14c) = 0;
      uVar3 = *(unsigned int *)(plVar2 + 1);
      lVar7 = *plVar2;
      *plVar2 = lVar7 << 1;
      *(int *)(plVar2 + 1) = (int)((unsigned __int64)uVar3 - 1);
      if ((__int64)((unsigned __int64)uVar3 - 1) < 0) {
        fn_82C4E5E8();
      }
      if (lVar7 < 0) {
        plVar2 = *(__int64 **)(param_1 + 0x54);
        lVar7 = *plVar2;
        uVar3 = *(unsigned int *)(plVar2 + 1);
        *plVar2 = lVar7 << 1;
        *(int *)(plVar2 + 1) = (int)((unsigned __int64)uVar3 - 1);
        if ((__int64)((unsigned __int64)uVar3 - 1) < 0) {
          fn_82C4E5E8();
        }
        if (lVar7 < 0) {
          *(unsigned int *)(param_1 + 0x154) = 2;
        }
        else {
          *(unsigned int *)(param_1 + 0x154) = 1;
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x154) = 0;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x14c) = 1;
    }
  }
  return;
}

