extern int fn_8265C9E0();
extern int fn_82964760();
extern int fn_829647E8();
extern int fn_82964868();


unsigned __int64 fn_82964A30(int param_1,int param_2)

{
  __int64 lVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  iVar5 = 0;
  *(unsigned int *)(param_1 + 4) = 0;
  uVar4 = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x1c) = uVar4;
  lVar1 = ((unsigned __int64)uVar4 & 0x3fffffff) << 2;
  if (0x3fffffff < uVar4) {
    lVar1 = -1;
  }
  iVar2 = fn_8265C9E0(lVar1);
  *(int *)(param_1 + 0x10) = iVar2;
  if (iVar2 != 0) {
    uVar4 = 0;
    if (*(int *)(param_2 + 4) != 0) {
      iVar2 = 0;
      do {
        iVar3 = fn_82964760(param_1,*(unsigned int *)(*(int *)(param_2 + 0x10) + iVar2));
        if (iVar3 == -1) {
          return 0xffffffff8007000e;
        }
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 4;
      } while (uVar4 < *(unsigned int *)(param_2 + 4));
    }
    *(unsigned int *)(param_1 + 8) = 0;
    uVar4 = *(unsigned int *)(param_2 + 8);
    *(unsigned int *)(param_1 + 0x20) = uVar4;
    lVar1 = ((unsigned __int64)uVar4 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar4) {
      lVar1 = -1;
    }
    iVar2 = fn_8265C9E0(lVar1);
    *(int *)(param_1 + 0x14) = iVar2;
    if (iVar2 != 0) {
      uVar4 = 0;
      if (*(int *)(param_2 + 8) != 0) {
        iVar2 = 0;
        do {
          iVar3 = fn_829647E8(param_1,*(unsigned int *)(*(int *)(param_2 + 0x14) + iVar2));
          if (iVar3 == -1) {
            return 0xffffffff8007000e;
          }
          uVar4 = uVar4 + 1;
          iVar2 = iVar2 + 4;
        } while (uVar4 < *(unsigned int *)(param_2 + 8));
      }
      *(unsigned int *)(param_1 + 0xc) = 0;
      uVar4 = *(unsigned int *)(param_2 + 0xc);
      lVar1 = ((unsigned __int64)uVar4 & 0x3fffffff) << 2;
      *(unsigned int *)(param_1 + 0x24) = uVar4;
      if (0x3fffffff < uVar4) {
        lVar1 = -1;
      }
      iVar2 = fn_8265C9E0(lVar1);
      *(int *)(param_1 + 0x18) = iVar2;
      if (iVar2 != 0) {
        uVar4 = 0;
        if (*(int *)(param_2 + 0xc) != 0) {
          do {
            iVar2 = fn_82964868(param_1,*(unsigned int *)(*(int *)(param_2 + 0x18) + iVar5));
            if (iVar2 == -1) {
              return 0xffffffff8007000e;
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 4;
          } while (uVar4 < *(unsigned int *)(param_2 + 0xc));
        }
        return 0;
      }
    }
  }
  return 0xffffffff8007000e;
}

