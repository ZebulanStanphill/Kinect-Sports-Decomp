extern int fn_82C4E5E8();


char fn_82C5D578(int param_1)

{
  unsigned __int64 *puVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  int iVar7;
  unsigned __int64 uVar8;
  
  puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
  uVar8 = 1;
  lVar6 = 0;
  uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar5 = uVar4 + 0x10;
  if ((uVar5 & 0xffffffff) == 0) {
    do {
      if ((uVar5 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar5;
      *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
      lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) +
              lVar6;
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
  if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
    cVar3 = '\x01';
  }
  else {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar8 = 1;
    lVar6 = 0;
    uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar5 = uVar4 + 0x10;
    if ((uVar5 & 0xffffffff) == 0) {
      do {
        if ((uVar5 & 0xffffffff) == 0) break;
        uVar8 = uVar8 - uVar5;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
        lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) +
                lVar6;
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
    if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
      cVar3 = '\x02';
    }
    else {
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      uVar8 = 1;
      lVar6 = 0;
      uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar5 = uVar4 + 0x10;
      if ((uVar5 & 0xffffffff) == 0) {
        do {
          if ((uVar5 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar5;
          *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
          lVar6 = (unsigned __int64)(unsigned int)((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f))
                  + lVar6;
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
      if (((uVar5 >> (0x40 - uVar8 & 0x7f) & 0xffffffff) + lVar6 & 0xffffffff) == 0) {
        cVar3 = '\0';
        *(unsigned int *)(param_1 + 0x5714) = 1;
      }
      else {
        puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
        uVar8 = 1;
        iVar7 = 0;
        uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar5 = uVar4 + 0x10;
        iVar2 = 0;
        if ((uVar5 & 0xffffffff) == 0) {
          do {
            iVar7 = iVar2;
            if ((uVar5 & 0xffffffff) == 0) break;
            uVar8 = uVar8 - uVar5;
            *(int *)(puVar1 + 1) = (int)(uVar4 - uVar5);
            iVar7 = ((int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar7;
            *puVar1 = *puVar1 << (uVar5 & 0x7f);
            if ((__int64)(uVar4 - uVar5) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar4 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
            uVar5 = uVar4 + 0x10;
            iVar2 = iVar7;
          } while ((uVar5 & 0xffffffff) < (uVar8 & 0xffffffff));
        }
        uVar5 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar4 - uVar8);
        *puVar1 = uVar5 << (uVar8 & 0x7f);
        if ((__int64)(uVar4 - uVar8) < 0) {
          fn_82C4E5E8(puVar1);
        }
        cVar3 = ((int)(uVar5 >> (0x40 - uVar8 & 0x7f)) + iVar7 != 0) + '\x04';
      }
    }
  }
  return cVar3;
}

