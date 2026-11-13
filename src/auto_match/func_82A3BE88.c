void fn_82A3BE88(int param_1,__int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned char bVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  uVar5 = param_2 - 1;
  bVar4 = 0;
  if (-1 < (__int64)uVar5) {
    lVar6 = (uVar5 & 0x3fffffff) << 2;
    do {
      if (*(unsigned int *)((int)lVar6 + *(int *)(param_1 + 0x24)) < 3) {
        bVar4 = 0;
      }
      else {
        bVar4 = bVar4 + 1;
        if (2 < bVar4) break;
      }
      uVar5 = uVar5 - 1;
      lVar6 = lVar6 + -4;
    } while (-1 < (__int64)uVar5);
  }
  uVar5 = 3 - ((unsigned __int64)(2 < bVar4) + 3) & uVar5;
  if ((int)uVar5 < (int)param_2) {
    param_2 = param_2 - uVar5;
    lVar6 = (uVar5 & 0x3fffffff) << 2;
    do {
      uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x24) + (int)lVar6);
      if (uVar1 != 0) {
        if (uVar1 < 3) {
          iVar3 = (uVar1 + 0xc) * 4;
          uVar2 = *(unsigned int *)(iVar3 + param_1);
          *(unsigned int *)(iVar3 + param_1) = *(unsigned int *)(param_1 + 0x30);
          *(unsigned int *)(param_1 + 0x30) = uVar2;
        }
        else {
          uVar2 = *(unsigned int *)(param_1 + 0x30);
          *(unsigned int *)(param_1 + 0x30) = uVar1 - 2;
          *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_1 + 0x34);
          *(unsigned int *)(param_1 + 0x34) = uVar2;
        }
      }
      lVar6 = lVar6 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    return;
  }
  return;
}

