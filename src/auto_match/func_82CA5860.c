extern int fn_82C4E5E8();
extern int fn_82C60938();
extern int fn_82C851E0();
extern int fn_82C87EA0();
extern int fn_82CBDF88();


unsigned __int64 fn_82CA5860(int param_1,int param_2)

{
  unsigned __int64 *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar7 = 9;
  iVar8 = 0;
  uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar5 = 0;
  if ((uVar4 & 0xffffffff) < 9) {
    do {
      iVar8 = iVar5;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar8 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar7 & 0x3f)) + iVar8;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((__int64)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar5 = iVar8;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  iVar8 = (int)(*puVar1 >> (0x40 - uVar7 & 0x7f)) + iVar8;
  *puVar1 = *puVar1 << (uVar7 & 0x7f);
  if ((__int64)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((*(int *)(param_1 + 0x50c8) == 0) || (*(int *)(param_1 + 0x50cc) == 0)) ||
     (*(int *)(param_1 + 0x54c8) != 1)) {
    if (iVar8 != param_2) {
      return 1;
    }
  }
  else if (iVar8 != *(int *)(param_1 + 0x8c) + param_2) {
    return 1;
  }
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  iVar8 = 0;
  uVar7 = 1;
  uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar4 = uVar3 + 0x10;
  iVar5 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    do {
      iVar8 = iVar5;
      if ((uVar4 & 0xffffffff) == 0) break;
      uVar7 = uVar7 - uVar4;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
      iVar8 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar7 & 0x3f)) + iVar8;
      *puVar1 = *puVar1 << (uVar4 & 0x7f);
      if ((__int64)(uVar3 - uVar4) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar5 = iVar8;
    } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
  }
  uVar4 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
  *puVar1 = uVar4 << (uVar7 & 0x7f);
  if ((__int64)(uVar3 - uVar7) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar8 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x5568) != 0) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar7 = 1;
    lVar6 = 0;
    uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar4 = uVar3 + 0x10;
    if ((uVar4 & 0xffffffff) == 0) {
      do {
        if ((uVar4 & 0xffffffff) == 0) break;
        uVar7 = uVar7 - uVar4;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
        lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar7 & 0x3f)) +
                lVar6;
        *puVar1 = *puVar1 << (uVar4 & 0x7f);
        if ((__int64)(uVar3 - uVar4) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
      } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
    }
    uVar4 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
    *puVar1 = uVar4 << (uVar7 & 0x7f);
    if ((__int64)(uVar3 - uVar7) < 0) {
      fn_82C4E5E8(puVar1);
    }
    if (((uVar4 >> (0x40 - uVar7 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) != 0) {
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar7 = 1;
      iVar8 = 0;
      uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar4 = uVar3 + 0x10;
      iVar5 = 0;
      if ((uVar4 & 0xffffffff) == 0) {
        do {
          iVar8 = iVar5;
          if ((uVar4 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar4;
          *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
          iVar8 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar7 & 0x3f)) + iVar8;
          *puVar1 = *puVar1 << (uVar4 & 0x7f);
          if ((__int64)(uVar3 - uVar4) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar4 = uVar3 + 0x10;
          iVar5 = iVar8;
        } while ((uVar4 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      uVar4 = *puVar1;
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar7);
      *puVar1 = uVar4 << (uVar7 & 0x7f);
      if ((__int64)(uVar3 - uVar7) < 0) {
        fn_82C4E5E8(puVar1);
      }
      iVar5 = ((unsigned int)LZCOUNT((int)(uVar4 >> (0x40 - uVar7 & 0x7f)) + iVar8) >> 5) + 1;
      goto LAB_82ca5bb4;
    }
  }
  iVar5 = 0;
LAB_82ca5bb4:
  if (iVar5 == *(int *)(param_1 + 0x567c)) {
    if (iVar5 == 0) {
      *(unsigned int *)(param_1 + 0x50c8) = 0;
      *(unsigned int *)(param_1 + 0x50d0) = 0;
      uVar2 = fn_82C60938();
      if (*(int *)(param_1 + 0x120) == 5) {
        return 1;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x50c8) = 1;
      if (iVar5 == 2) {
        *(unsigned int *)(param_1 + 0x50d0) = 0;
        uVar2 = fn_82C851E0();
        if (*(int *)(param_1 + 0x120) == 5) {
          return 1;
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x50cc) = 1;
        uVar2 = fn_82C87EA0(param_1,0);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar2 = fn_82CBDF88(param_1);
      }
    }
    if (*(int *)(param_1 + 0x120) != 5) {
      return uVar2;
    }
  }
  return 1;
}

