#define true 1
extern int fn_82C4E5E8();


unsigned __int64 fn_82C571A0(int param_1)

{
  unsigned __int64 *puVar1;
  __int64 *plVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  int iVar10;
  __int64 lVar9;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar11 = 0x18;
  lVar8 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar7 = uVar5 + 0x10;
  if ((uVar7 & 0xffffffff) < 0x18) {
    do {
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar7;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
      lVar8 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) +
              lVar8;
      *puVar1 = *puVar1 << (uVar7 & 0x7f);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar7 = uVar5 + 0x10;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  uVar7 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
  *puVar1 = uVar7 << (uVar11 & 0x7f);
  if ((__int64)(uVar5 - uVar11) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((uVar7 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) != 1) {
    return 1;
  }
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar11 = 8;
  lVar8 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar7 = uVar5 + 0x10;
  if ((uVar7 & 0xffffffff) < 8) {
    do {
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar7;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
      lVar8 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) +
              lVar8;
      *puVar1 = *puVar1 << (uVar7 & 0x7f);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar7 = uVar5 + 0x10;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  uVar7 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
  *puVar1 = uVar7 << (uVar11 & 0x7f);
  if ((__int64)(uVar5 - uVar11) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((uVar7 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) != 0xb6) {
    return 1;
  }
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar11 = 2;
  iVar10 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar7 = uVar5 + 0x10;
  iVar4 = 0;
  if ((uVar7 & 0xffffffff) < 2) {
    do {
      iVar10 = iVar4;
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar7;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
      iVar10 = ((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + iVar10;
      *puVar1 = *puVar1 << (uVar7 & 0x7f);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar7 = uVar5 + 0x10;
      iVar4 = iVar10;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  uVar7 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
  *puVar1 = uVar7 << (uVar11 & 0x7f);
  if ((__int64)(uVar5 - uVar11) < 0) {
    fn_82C4E5E8(puVar1);
  }
  uVar5 = 0;
  *(int *)(param_1 + 0x120) = (int)(uVar7 >> (0x40 - uVar11 & 0x7f)) + iVar10;
  do {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar12 = 1;
    lVar8 = 0;
    uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar11 = uVar7 + 0x10;
    if ((uVar11 & 0xffffffff) == 0) {
      do {
        if ((uVar11 & 0xffffffff) == 0) break;
        uVar12 = uVar12 - uVar11;
        *(int *)(puVar1 + 1) = (int)(uVar7 - uVar11);
        lVar8 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar11 & 0x7f)) << ((unsigned int)uVar12 & 0x3f))
                + lVar8;
        *puVar1 = *puVar1 << (uVar11 & 0x7f);
        if ((__int64)(uVar7 - uVar11) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar7 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar11 = uVar7 + 0x10;
      } while ((uVar11 & 0xffffffff) < (uVar12 & 0xffffffff));
    }
    uVar11 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar7 - uVar12);
    *puVar1 = uVar11 << (uVar12 & 0x7f);
    if ((__int64)(uVar7 - uVar12) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar11 >> (0x40 - uVar12 & 0x7f) & 0xffffffff) + lVar8 & 0xffffffff) == 0) break;
    uVar5 = uVar5 + 1;
  } while( true );
  plVar2 = *(__int64 **)(param_1 + 0x54);
  uVar11 = 1;
  lVar8 = (uVar5 & 0xffffffff) + *(__int64 *)(param_1 + 0xe48);
  uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
  uVar7 = uVar5 + 0x10;
  if ((uVar7 & 0xffffffff) == 0) {
    do {
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar7;
      *plVar2 = *plVar2 << (uVar7 & 0x7f);
      *(int *)(plVar2 + 1) = (int)(uVar5 - uVar7);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(plVar2);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
      uVar7 = uVar5 + 0x10;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  *plVar2 = *plVar2 << (uVar11 & 0x7f);
  *(int *)(plVar2 + 1) = (int)(uVar5 - uVar11);
  if ((__int64)(uVar5 - uVar11) < 0) {
    fn_82C4E5E8(plVar2);
  }
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  lVar9 = 0;
  uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0xe68);
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar7 = uVar5 + 0x10;
  if (uVar11 < 0x21) {
    if (uVar11 == 0) {
      uVar7 = 0;
    }
    else {
      if ((uVar7 & 0xffffffff) < uVar11) {
        do {
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar7;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
          lVar9 = (unsigned __int64)
                  (unsigned int)((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + lVar9;
          *puVar1 = *puVar1 << (uVar7 & 0x7f);
          if ((__int64)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar7 = uVar5 + 0x10;
        } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
      uVar7 = (*puVar1 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9;
      *puVar1 = *puVar1 << (uVar11 & 0x7f);
      if ((__int64)(uVar5 - uVar11) < 0) {
        fn_82C4E5E8(puVar1);
      }
    }
  }
  else {
    uVar7 = 0;
  }
  plVar2 = *(__int64 **)(param_1 + 0x54);
  uVar12 = 1;
  uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
  uVar11 = uVar5 + 0x10;
  if ((uVar11 & 0xffffffff) == 0) {
    do {
      if ((uVar11 & 0xffffffff) == 0) break;
      uVar12 = uVar12 - uVar11;
      *plVar2 = *plVar2 << (uVar11 & 0x7f);
      *(int *)(plVar2 + 1) = (int)(uVar5 - uVar11);
      if ((__int64)(uVar5 - uVar11) < 0) {
        fn_82C4E5E8(plVar2);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
      uVar11 = uVar5 + 0x10;
    } while ((uVar11 & 0xffffffff) < (uVar12 & 0xffffffff));
  }
  *plVar2 = *plVar2 << (uVar12 & 0x7f);
  *(int *)(plVar2 + 1) = (int)(uVar5 - uVar12);
  if ((__int64)(uVar5 - uVar12) < 0) {
    fn_82C4E5E8(plVar2);
  }
  uVar11 = 1;
  uVar6 = *(unsigned __int64 *)(param_1 + 0xe48);
  lVar9 = 0;
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  *(__int64 *)(param_1 + 0xe48) = lVar8;
  *(unsigned __int64 *)(param_1 + 0xe58) = uVar6;
  *(unsigned __int64 *)(param_1 + 0xe60) = *(unsigned __int64 *)(param_1 + 0xe50);
  *(unsigned __int64 *)(param_1 + 0xe50) = uVar6;
  *(unsigned __int64 *)(param_1 + 0xe30) = *(int *)(param_1 + 0xe2c) * lVar8 + (uVar7 & 0xffffffff);
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar7 = uVar5 + 0x10;
  if ((uVar7 & 0xffffffff) == 0) {
    do {
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar7;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
      lVar9 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) +
              lVar9;
      *puVar1 = *puVar1 << (uVar7 & 0x7f);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar7 = uVar5 + 0x10;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  uVar7 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
  *puVar1 = uVar7 << (uVar11 & 0x7f);
  if ((__int64)(uVar5 - uVar11) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((uVar7 >> (0x40 - uVar11 & 0x7f) & 0xffffffff) + lVar9 & 0xffffffff) == 0) {
    return 1;
  }
  if (*(int *)(param_1 + 0x120) == 1) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar11 = 1;
    iVar10 = 0;
    uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar7 = uVar5 + 0x10;
    iVar4 = 0;
    if ((uVar7 & 0xffffffff) == 0) {
      do {
        iVar10 = iVar4;
        if ((uVar7 & 0xffffffff) == 0) break;
        uVar11 = uVar11 - uVar7;
        *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
        iVar10 = ((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + iVar10;
        *puVar1 = *puVar1 << (uVar7 & 0x7f);
        if ((__int64)(uVar5 - uVar7) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar7 = uVar5 + 0x10;
        iVar4 = iVar10;
      } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
    }
    uVar7 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
    *puVar1 = uVar7 << (uVar11 & 0x7f);
    if ((__int64)(uVar5 - uVar11) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0xf78) = (int)(uVar7 >> (0x40 - uVar11 & 0x7f)) + iVar10;
  }
  else {
    *(unsigned int *)(param_1 + 0xf78) = 0;
  }
  plVar2 = *(__int64 **)(param_1 + 0x54);
  uVar11 = 3;
  uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
  uVar7 = uVar5 + 0x10;
  if ((uVar7 & 0xffffffff) < 3) {
    do {
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar7;
      *plVar2 = *plVar2 << (uVar7 & 0x7f);
      *(int *)(plVar2 + 1) = (int)(uVar5 - uVar7);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(plVar2);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(plVar2 + 1);
      uVar7 = uVar5 + 0x10;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  *plVar2 = *plVar2 << (uVar11 & 0x7f);
  *(int *)(plVar2 + 1) = (int)(uVar5 - uVar11);
  if ((__int64)(uVar5 - uVar11) < 0) {
    fn_82C4E5E8(plVar2);
  }
  if (*(int *)(param_1 + 0x120) != 0) {
    if (*(int *)(param_1 + 0x120) == 1) {
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar11 = 5;
      iVar10 = 0;
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar7 = uVar5 + 0x10;
      iVar4 = 0;
      if ((uVar7 & 0xffffffff) < 5) {
        do {
          iVar10 = iVar4;
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar11 = uVar11 - uVar7;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
          iVar10 = ((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + iVar10;
          *puVar1 = *puVar1 << (uVar7 & 0x7f);
          if ((__int64)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar7 = uVar5 + 0x10;
          iVar4 = iVar10;
        } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
      }
      uVar7 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
      *puVar1 = uVar7 << (uVar11 & 0x7f);
      if ((__int64)(uVar5 - uVar11) < 0) {
        fn_82C4E5E8(puVar1);
      }
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar12 = 3;
      *(int *)(param_1 + 0xf8) = (int)(uVar7 >> (0x40 - uVar11 & 0x7f)) + iVar10;
      iVar10 = 0;
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar7 = uVar5 + 0x10;
      iVar4 = 0;
      if ((uVar7 & 0xffffffff) < 3) {
        do {
          iVar10 = iVar4;
          if ((uVar7 & 0xffffffff) == 0) break;
          uVar12 = uVar12 - uVar7;
          *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
          iVar10 = ((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar12 & 0x3f)) + iVar10;
          *puVar1 = *puVar1 << (uVar7 & 0x7f);
          if ((__int64)(uVar5 - uVar7) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar7 = uVar5 + 0x10;
          iVar4 = iVar10;
        } while ((uVar7 & 0xffffffff) < (uVar12 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar12);
      uVar3 = (int)(*puVar1 >> (0x40 - uVar12 & 0x7f)) + iVar10;
      *puVar1 = *puVar1 << (uVar12 & 0x7f);
      if ((__int64)(uVar5 - uVar12) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(unsigned int *)(param_1 + 0xe20) = uVar3;
      *(int *)(param_1 + 0xe28) = 1 << (uVar3 - 1 & 0x3f);
      *(int *)(param_1 + 0xe24) = 0x10 << (uVar3 & 0x3f);
    }
    return 0;
  }
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar11 = 5;
  iVar10 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar7 = uVar5 + 0x10;
  iVar4 = 0;
  if ((uVar7 & 0xffffffff) < 5) {
    do {
      iVar10 = iVar4;
      if ((uVar7 & 0xffffffff) == 0) break;
      uVar11 = uVar11 - uVar7;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar7);
      iVar10 = ((int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) << ((unsigned int)uVar11 & 0x3f)) + iVar10;
      *puVar1 = *puVar1 << (uVar7 & 0x7f);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar7 = uVar5 + 0x10;
      iVar4 = iVar10;
    } while ((uVar7 & 0xffffffff) < (uVar11 & 0xffffffff));
  }
  uVar7 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar11);
  *puVar1 = uVar7 << (uVar11 & 0x7f);
  if ((__int64)(uVar5 - uVar11) < 0) {
    fn_82C4E5E8(puVar1);
  }
  *(int *)(param_1 + 0xf8) = (int)(uVar7 >> (0x40 - uVar11 & 0x7f)) + iVar10;
  *(unsigned int *)(param_1 + 0xe20) = 1;
  return 0;
}

