extern int fn_82E50BE8();


unsigned __int64 fn_82E630D0(int param_1,unsigned __int64 param_2,int param_3)

{
  __int64 lVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned __int64 uVar4;
  
  *(unsigned int *)(param_1 + 0x54) = 0;
  if ((param_2 & 0xffffffff) != 0) {
    lVar1 = (param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    uVar2 = fn_82E50BE8(lVar1,0,0,0,0);
    *(unsigned int *)(param_1 + 0x58) = uVar2;
    lVar1 = (param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < (param_2 & 0xffffffff)) {
      lVar1 = -1;
    }
    iVar3 = fn_82E50BE8(lVar1,0,0,0,0);
    *(int *)(param_1 + 0x5c) = iVar3;
    if ((*(int *)(param_1 + 0x58) == 0) || (iVar3 == 0)) {
      return 0xffffffff8007000e;
    }
  }
  uVar4 = 0;
  if ((param_2 & 0xffffffff) != 0) {
    iVar3 = 0;
    do {
      if (*(int *)(iVar3 + param_3) == 0) {
        return 0xffffffff80070057;
      }
      *(int *)(iVar3 + *(int *)(param_1 + 0x58)) = *(int *)(iVar3 + param_3);
      (**(int (***)())(**(int **)(iVar3 + *(int *)(param_1 + 0x58)) + 4))();
      *(unsigned int *)(*(int *)(param_1 + 0x5c) + iVar3) = 0;
      uVar4 = uVar4 + 1;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      iVar3 = iVar3 + 4;
    } while ((uVar4 & 0xffffffff) < (param_2 & 0xffffffff));
  }
  return 0;
}

