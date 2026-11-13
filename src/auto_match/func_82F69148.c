void _blkmov(unsigned int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned char uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  lVar3 = param_3 + 1;
  for (; lVar3 = lVar3 + -1, lVar3 != 0 && ((unsigned int)param_1 & 3) != 0;
      param_1 = (unsigned int *)((int)param_1 + 1)) {
    param_3 = param_3 - 1;
    uVar1 = *(unsigned char *)param_2;
    param_2 = (unsigned int *)((int)param_2 + 1);
    *(unsigned char *)param_1 = uVar1;
  }
  uVar4 = (param_3 & 0xffffffff) >> 2;
  if (uVar4 != 0) {
    if (((unsigned int)param_2 & 3) == 0) {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    else {
      do {
        uVar2 = *param_2;
        param_2 = param_2 + 1;
        *param_1 = uVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    do {
      uVar1 = *(unsigned char *)param_2;
      param_2 = (unsigned int *)((int)param_2 + 1);
      *(unsigned char *)param_1 = uVar1;
      param_1 = (unsigned int *)((int)param_1 + 1);
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    return;
  }
  return;
}

