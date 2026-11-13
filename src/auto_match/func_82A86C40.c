void fn_82A86C40(int param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  if (param_2 == 0) {
    return;
  }
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) - 1;
  if ((__int64)uVar2 < 0) {
    return;
  }
  lVar3 = (uVar2 & 0x7fffff) << 9;
  do {
    lVar4 = 0x14;
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c) + lVar3 + 0x1d4;
    do {
      puVar1 = (unsigned int *)lVar5;
      if (puVar1[-1] == param_2) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
      }
      lVar4 = lVar4 + -1;
      lVar5 = lVar5 + -0x18;
    } while (lVar4 != 0);
    uVar2 = uVar2 - 1;
    lVar3 = lVar3 + -0x200;
  } while (-1 < (__int64)uVar2);
  return;
}

