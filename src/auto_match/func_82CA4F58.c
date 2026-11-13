extern int fn_82C4E5E8();


unsigned __int64 fn_82CA4F58(int param_1,__int64 param_2)

{
  unsigned __int64 *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar5 = 3;
  lVar4 = 0;
  uVar2 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar3 = uVar2 + 0x10;
  if ((uVar3 & 0xffffffff) < 3) {
    do {
      if ((uVar3 & 0xffffffff) == 0) break;
      uVar5 = uVar5 - uVar3;
      *(int *)(puVar1 + 1) = (int)(uVar2 - uVar3);
      lVar4 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar3 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) +
              lVar4;
      *puVar1 = *puVar1 << (uVar3 & 0x7f);
      if ((__int64)(uVar2 - uVar3) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar2 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar3 = uVar2 + 0x10;
    } while ((uVar3 & 0xffffffff) < (uVar5 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar2 - uVar5);
  lVar4 = (*puVar1 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar4;
  *puVar1 = *puVar1 << (uVar5 & 0x7f);
  if ((__int64)(uVar2 - uVar5) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((int)lVar4 == 7) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar5 = 5;
    lVar4 = 0;
    uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar2 = uVar3 + 0x10;
    if ((uVar2 & 0xffffffff) < 5) {
      do {
        if ((uVar2 & 0xffffffff) == 0) break;
        uVar5 = uVar5 - uVar2;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar2);
        lVar4 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar2 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) +
                lVar4;
        *puVar1 = *puVar1 << (uVar2 & 0x7f);
        if ((__int64)(uVar3 - uVar2) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar2 = uVar3 + 0x10;
      } while ((uVar2 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
    *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
    uVar2 = (*puVar1 >> (0x40 - uVar5 & 0x7f) & 0xffffffff) + lVar4;
    *puVar1 = *puVar1 << (uVar5 & 0x7f);
    if ((__int64)(uVar3 - uVar5) < 0) {
      fn_82C4E5E8(puVar1);
    }
  }
  else {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0xf8) + lVar4 + param_2;
  }
  if ((int)param_2 == 0) {
    uVar2 = (uVar2 & 0x7fffffff) * 2 - 1;
  }
  return uVar2;
}

