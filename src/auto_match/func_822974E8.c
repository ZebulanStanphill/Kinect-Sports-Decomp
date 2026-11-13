extern int fn_82F68CC0();


void fn_822974E8(__int64 param_1,__int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = (param_3 & 0x7fffffff) * 2;
  if ((int)param_1 == (int)param_2) {
    return;
  }
  if ((int)param_2 <= (int)param_1) {
    lVar2 = uVar5 + 1;
    uVar4 = param_2 + uVar5;
    for (uVar3 = param_1 + uVar5; lVar2 = lVar2 + -1, lVar2 != 0 && (uVar3 & 3) != 0;
        uVar3 = uVar3 - 1) {
      uVar5 = uVar5 - 1;
      iVar1 = (int)uVar4;
      uVar4 = uVar4 - 1;
      *(unsigned char *)((int)uVar3 + -1) = *(unsigned char *)(iVar1 + -1);
    }
    uVar6 = (uVar5 & 0xffffffff) >> 2;
    if (uVar6 != 0) {
      if ((uVar4 & 3) == 0) {
        do {
          iVar1 = (int)uVar4;
          uVar4 = uVar4 - 4;
          *(unsigned int *)((int)uVar3 + -4) = *(unsigned int *)(iVar1 + -4);
          uVar3 = uVar3 - 4;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      else {
        do {
          iVar1 = (int)uVar4;
          uVar3 = uVar3 - 4;
          uVar4 = uVar4 - 4;
          *(unsigned int *)uVar3 = *(unsigned int *)(iVar1 + -4);
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
    }
    uVar5 = uVar5 & 3;
    if (uVar5 != 0) {
      do {
        iVar1 = (int)uVar4;
        uVar4 = uVar4 - 1;
        *(unsigned char *)((int)uVar3 + -1) = *(unsigned char *)(iVar1 + -1);
        uVar3 = uVar3 - 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
    return;
  }
  fn_82F68CC0();
  return;
}

