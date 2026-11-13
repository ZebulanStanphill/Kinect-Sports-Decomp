#define true 1
extern int fn_82C4E5E8();


unsigned __int64 fn_830CEA08(int *param_1,int param_2)

{
  unsigned __int64 *puVar1;
  unsigned int uVar2;
  __int64 *plVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int iVar9;
  
  puVar1 = (unsigned __int64 *)*param_1;
  uVar2 = param_1[0x18e];
  uVar7 = (unsigned __int64)uVar2;
  uVar8 = 9;
  iVar9 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar6 = uVar5 + 0x10;
  iVar4 = 0;
  if ((uVar6 & 0xffffffff) < 9) {
    do {
      iVar9 = iVar4;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar6;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
      iVar9 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
      *puVar1 = *puVar1 << (uVar6 & 0x7f);
      if ((__int64)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar6 = uVar5 + 0x10;
      iVar4 = iVar9;
    } while ((uVar6 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
  iVar9 = (int)(*puVar1 >> (0x40 - uVar8 & 0x7f)) + iVar9;
  *puVar1 = *puVar1 << (uVar8 & 0x7f);
  if ((__int64)(uVar5 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if ((param_1[0x18d] == 1) && (param_1[0x157] == 1)) {
    if (iVar9 != (unsigned int)(*(unsigned short *)(param_1 + 0xd) >> 1) + param_2) {
      return 1;
    }
  }
  else if (iVar9 != param_2) {
    return 1;
  }
  puVar1 = (unsigned __int64 *)*param_1;
  uVar8 = 1;
  iVar9 = 0;
  uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
  uVar6 = uVar5 + 0x10;
  iVar4 = 0;
  if ((uVar6 & 0xffffffff) == 0) {
    do {
      iVar9 = iVar4;
      if ((uVar6 & 0xffffffff) == 0) break;
      uVar8 = uVar8 - uVar6;
      *(int *)(puVar1 + 1) = (int)(uVar5 - uVar6);
      iVar9 = ((int)(*puVar1 >> (0x40 - uVar6 & 0x7f)) << ((unsigned int)uVar8 & 0x3f)) + iVar9;
      *puVar1 = *puVar1 << (uVar6 & 0x7f);
      if ((__int64)(uVar5 - uVar6) < 0) {
        fn_82C4E5E8(puVar1);
      }
      uVar5 = (unsigned __int64)*(unsigned int *)(puVar1 + 1);
      uVar6 = uVar5 + 0x10;
      iVar4 = iVar9;
    } while ((uVar6 & 0xffffffff) < (uVar8 & 0xffffffff));
  }
  uVar6 = *puVar1;
  *(int *)(puVar1 + 1) = (int)(uVar5 - uVar8);
  *puVar1 = uVar6 << (uVar8 & 0x7f);
  if ((__int64)(uVar5 - uVar8) < 0) {
    fn_82C4E5E8(puVar1);
  }
  if (((int)(uVar6 >> (0x40 - uVar8 & 0x7f)) + iVar9 != 0) && (0 < (int)uVar2)) {
    while( true ) {
      plVar3 = (__int64 *)*param_1;
      uVar5 = (unsigned __int64)*(unsigned int *)(plVar3 + 1);
      uVar6 = uVar5 + 0x10;
      if ((int)uVar7 < 0x21) break;
      uVar7 = uVar7 - 0x20;
      uVar8 = 0x20;
      if ((uVar6 & 0xffffffff) < 0x20) {
        do {
          if ((uVar6 & 0xffffffff) == 0) break;
          uVar8 = uVar8 - uVar6;
          *plVar3 = *plVar3 << (uVar6 & 0x7f);
          *(int *)(plVar3 + 1) = (int)(uVar5 - uVar6);
          if ((__int64)(uVar5 - uVar6) < 0) {
            fn_82C4E5E8(plVar3);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(plVar3 + 1);
          uVar6 = uVar5 + 0x10;
        } while ((uVar6 & 0xffffffff) < (uVar8 & 0xffffffff));
      }
      *plVar3 = *plVar3 << (uVar8 & 0x7f);
      *(int *)(plVar3 + 1) = (int)(uVar5 - uVar8);
      if ((__int64)(uVar5 - uVar8) < 0) {
        fn_82C4E5E8(plVar3);
      }
      if ((int)uVar7 < 1) {
        return 0;
      }
    }
    if (((uVar7 & 0xffffffff) < 0x21) && ((uVar7 & 0xffffffff) != 0)) {
      if ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff)) {
        do {
          if ((uVar6 & 0xffffffff) == 0) break;
          uVar7 = uVar7 - uVar6;
          *plVar3 = *plVar3 << (uVar6 & 0x7f);
          *(int *)(plVar3 + 1) = (int)(uVar5 - uVar6);
          if ((__int64)(uVar5 - uVar6) < 0) {
            fn_82C4E5E8(plVar3);
          }
          uVar5 = (unsigned __int64)*(unsigned int *)(plVar3 + 1);
          uVar6 = uVar5 + 0x10;
        } while ((uVar6 & 0xffffffff) < (uVar7 & 0xffffffff));
      }
      *plVar3 = *plVar3 << (uVar7 & 0x7f);
      *(int *)(plVar3 + 1) = (int)(uVar5 - uVar7);
      if ((__int64)(uVar5 - uVar7) < 0) {
        fn_82C4E5E8(plVar3);
      }
    }
  }
  return 0;
}

