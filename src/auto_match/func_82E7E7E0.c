extern int fn_82E4FE40();
extern int fn_82E50330();


unsigned __int64 fn_82E7E7E0(short *param_1)

{
  short sVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  int iVar5;
  
  sVar1 = *param_1;
  if (sVar1 == 0) {
    return 0;
  }
  if (sVar1 == 0x100d) {
    if (*(int *)(param_1 + 6) != 0) {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          if (*(int **)(*(int *)(param_1 + 6) + iVar5) != (int *)0x0) {
            (**(int (***)())(**(int **)(*(int *)(param_1 + 6) + iVar5) + 8))();
          }
          uVar4 = uVar4 + 1;
          iVar5 = iVar5 + 4;
        } while (uVar4 < *(unsigned int *)(param_1 + 4));
      }
      fn_82E4FE40(*(unsigned int *)(param_1 + 6));
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return 0;
    }
  }
  else {
    if (sVar1 != 0x1041) {
      uVar3 = fn_82E50330();
      return uVar3;
    }
    if (*(int *)(param_1 + 6) != 0) {
      uVar4 = 0;
      if (*(int *)(param_1 + 4) != 0) {
        iVar5 = 0;
        do {
          iVar2 = *(int *)(param_1 + 6);
          fn_82E4FE40(*(unsigned int *)(iVar2 + iVar5 + 4));
          uVar4 = uVar4 + 1;
          *(unsigned int *)(iVar2 + iVar5 + 4) = 0;
          iVar5 = iVar5 + 8;
        } while (uVar4 < *(unsigned int *)(param_1 + 4));
      }
      fn_82E4FE40(*(unsigned int *)(param_1 + 6));
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      return 0;
    }
  }
  return 0xffffffff80004003;
}

