void fn_82CF69B8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  
  uVar5 = param_3 & 0xfffffff8;
  if (((((int)uVar5 != 0) && ((param_3 & 7) == 0)) && ((param_1 & 7) == 0)) && ((param_2 & 7) == 0))
  {
    uVar4 = (param_3 & 0xffffffff) >> 3;
    if (7 < (param_3 & 0xffffffff)) {
      lVar3 = (uVar4 - 1 & 0x1fffffff) * 8 + param_1;
      do {
        *(unsigned __int64 *)lVar3 =
             *(unsigned __int64 *)(((int)param_2 - (int)param_1) + (int)(unsigned __int64 *)lVar3);
        lVar3 = lVar3 + -8;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = uVar5 + param_1;
    param_2 = uVar5 + param_2;
    param_3 = 0;
  }
  uVar5 = param_3 & 0xfffffffc;
  if ((((int)uVar5 != 0) && ((param_3 & 3) == 0)) && (((param_1 & 3) == 0 && ((param_2 & 3) == 0))))
  {
    uVar4 = (param_3 & 0xffffffff) >> 2;
    if (3 < (param_3 & 0xffffffff)) {
      lVar3 = (uVar4 - 1 & 0x3fffffff) * 4 + param_1;
      do {
        *(unsigned int *)lVar3 =
             *(unsigned int *)((int)(unsigned int *)lVar3 + ((int)param_2 - (int)param_1));
        lVar3 = lVar3 + -4;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    param_1 = uVar5 + param_1;
    param_2 = uVar5 + param_2;
    param_3 = 0;
  }
  iVar1 = (int)param_2;
  iVar2 = (int)(param_3 & 0xfffffffe);
  if (((iVar2 != 0) && ((param_3 & 1) == 0)) && (((param_1 & 1) == 0 && ((param_2 & 1) == 0)))) {
    uVar5 = (param_3 & 0xffffffff) >> 1;
    if (1 < (param_3 & 0xffffffff)) {
      lVar3 = (uVar5 - 1 & 0x7fffffff) * 2 + param_1;
      do {
        *(unsigned short *)lVar3 = *(unsigned short *)((int)(unsigned short *)lVar3 + (iVar1 - (int)param_1));
        lVar3 = lVar3 + -2;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    param_1 = (param_3 & 0xfffffffe) + param_1;
    iVar1 = iVar2 + iVar1;
    param_3 = 0;
  }
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  lVar3 = (param_3 - 1) + param_1;
  do {
    *(unsigned char *)lVar3 = ((unsigned char *)lVar3)[iVar1 - (int)param_1];
    lVar3 = lVar3 + -1;
    param_3 = param_3 - 1;
  } while (param_3 != 0);
  return;
}

