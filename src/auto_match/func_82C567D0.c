extern int fn_82C4E5E8();
extern int iRam83231e40;
extern unsigned int uRam83231e44;


unsigned __int64 fn_82C567D0(int param_1)

{
  unsigned __int64 *puVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x3cb0) < 5) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar5 = 5;
    iVar6 = 0;
    uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar4 = uVar3 + 0x10;
    iVar2 = 0;
    if ((uVar4 & 0xffffffff) < 5) {
      do {
        iVar6 = iVar2;
        if ((uVar4 & 0xffffffff) == 0) break;
        uVar5 = uVar5 - uVar4;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
        iVar6 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) + iVar6;
        *puVar1 = *puVar1 << (uVar4 & 0x7f);
        if ((__int64)(uVar3 - uVar4) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
        iVar2 = iVar6;
      } while ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
    uVar4 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
    *puVar1 = uVar4 << (uVar5 & 0x7f);
    if ((__int64)(uVar3 - uVar5) < 0) {
      fn_82C4E5E8(puVar1);
    }
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    if (*(int *)((int)puVar1 + 0x14) == 0) {
      if (*(int *)(param_1 + 0xe80) == 0) {
        *(int *)(param_1 + 0xe80) = (int)(uVar4 >> (0x40 - uVar5 & 0x7f)) + iVar6;
      }
      uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar5 = 0xb;
      iVar6 = 0;
      uVar4 = uVar3 + 0x10;
      iVar2 = 0;
      if ((uVar4 & 0xffffffff) < 0xb) {
        do {
          iVar6 = iVar2;
          if ((uVar4 & 0xffffffff) == 0) break;
          uVar5 = uVar5 - uVar4;
          *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
          iVar6 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) + iVar6;
          *puVar1 = *puVar1 << (uVar4 & 0x7f);
          if ((__int64)(uVar3 - uVar4) < 0) {
            fn_82C4E5E8(puVar1);
          }
          uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
          uVar4 = uVar3 + 0x10;
          iVar2 = iVar6;
        } while ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff));
      }
      *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
      iVar6 = (int)(*puVar1 >> (0x40 - uVar5 & 0x7f)) + iVar6;
      *puVar1 = *puVar1 << (uVar5 & 0x7f);
      if ((__int64)(uVar3 - uVar5) < 0) {
        fn_82C4E5E8(puVar1);
      }
      *(int *)(param_1 + 0xe84) = iVar6;
      uRam83231e44 = *(unsigned int *)(param_1 + 0xe80);
      puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
      iRam83231e40 = iVar6;
      if (*(int *)((int)puVar1 + 0x14) == 0) {
        if (*(int *)(param_1 + 0x3cb0) == 2) {
          return 0;
        }
        uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar5 = 1;
        iVar6 = 0;
        uVar4 = uVar3 + 0x10;
        iVar2 = 0;
        if ((uVar4 & 0xffffffff) == 0) {
          do {
            iVar6 = iVar2;
            if ((uVar4 & 0xffffffff) == 0) break;
            uVar5 = uVar5 - uVar4;
            *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
            iVar6 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) + iVar6;
            *puVar1 = *puVar1 << (uVar4 & 0x7f);
            if ((__int64)(uVar3 - uVar4) < 0) {
              fn_82C4E5E8(puVar1);
            }
            uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
            uVar4 = uVar3 + 0x10;
            iVar2 = iVar6;
          } while ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff));
        }
        uVar4 = *puVar1;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
        *puVar1 = uVar4 << (uVar5 & 0x7f);
        if ((__int64)(uVar3 - uVar5) < 0) {
          fn_82C4E5E8(puVar1);
        }
        *(int *)(param_1 + 0xf74) = (int)(uVar4 >> (0x40 - uVar5 & 0x7f)) + iVar6;
        return 0;
      }
    }
    *(unsigned int *)(param_1 + 0xf74) = 0;
    *(unsigned int *)(param_1 + 0xe80) = 0x1e;
    *(unsigned int *)(param_1 + 0xe84) = 500;
  }
  else if (*(int *)(param_1 + 0xf64) != 0) {
    puVar1 = *(unsigned __int64 **)(param_1 + 0x54);
    uVar5 = 1;
    iVar6 = 0;
    uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
    uVar4 = uVar3 + 0x10;
    iVar2 = 0;
    if ((uVar4 & 0xffffffff) == 0) {
      do {
        iVar6 = iVar2;
        if ((uVar4 & 0xffffffff) == 0) break;
        uVar5 = uVar5 - uVar4;
        *(int *)(puVar1 + 1) = (int)(uVar3 - uVar4);
        iVar6 = ((int)(*puVar1 >> (0x40 - uVar4 & 0x7f)) << ((unsigned int)uVar5 & 0x3f)) + iVar6;
        *puVar1 = *puVar1 << (uVar4 & 0x7f);
        if ((__int64)(uVar3 - uVar4) < 0) {
          fn_82C4E5E8(puVar1);
        }
        uVar3 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
        uVar4 = uVar3 + 0x10;
        iVar2 = iVar6;
      } while ((uVar4 & 0xffffffff) < (uVar5 & 0xffffffff));
    }
    uVar4 = *puVar1;
    *(int *)(puVar1 + 1) = (int)(uVar3 - uVar5);
    *puVar1 = uVar4 << (uVar5 & 0x7f);
    if ((__int64)(uVar3 - uVar5) < 0) {
      fn_82C4E5E8(puVar1);
    }
    *(int *)(param_1 + 0xfa4) = (int)(uVar4 >> (0x40 - uVar5 & 0x7f)) + iVar6;
  }
  return 0;
}

