unsigned __int64 fn_82EE1490(int *param_1,unsigned short *param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  short *psVar4;
  
  param_2[1] = 0;
  *param_2 = 0;
  if ((*(unsigned int *)(param_2 + 2) & 0x8000) != 0) {
    return 0xffffffff80004005;
  }
  if (param_2 == (unsigned short *)0x0) {
    return 0xffffffff80070057;
  }
  uVar1 = (**(int (***)())(*param_1 + 0x44))
                    (param_1,*(unsigned int *)(param_2 + 2),*(unsigned int *)(param_2 + 8));
  if ((int)uVar1 < 0) {
    return uVar1;
  }
  if (param_2[4] != 0) {
    psVar4 = *(short **)(param_2 + 6);
    if (psVar4 == (short *)0x0) {
      return 0xffffffff80004005;
    }
    uVar3 = 0x400;
    iVar2 = 0;
    do {
      if (*psVar4 == 0) break;
      uVar3 = uVar3 - 1;
      psVar4 = psVar4 + 1;
    } while (uVar3 != 0);
    if ((uVar3 & 0xffffffff) == 0) {
      iVar2 = -0x7ff8ffa9;
    }
    if (iVar2 < 0) {
      return 0xffffffff80004005;
    }
  }
  if ((*(int *)(param_2 + 8) != 0) && (*(int *)(param_2 + 10) == 0)) {
    return 0xffffffff80004005;
  }
  return 0;
}

