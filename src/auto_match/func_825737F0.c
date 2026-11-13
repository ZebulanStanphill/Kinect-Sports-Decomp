void fn_825737F0(int *param_1)

{
  short sVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  
  uVar4 = (unsigned __int64)*(unsigned short *)(param_1 + 1) - 1;
  if (-1 < (__int64)uVar4) {
    lVar3 = (uVar4 & 0x3fffffff) << 2;
    do {
      if ((*(int *)((int)lVar3 + *param_1) == 0) &&
         (sVar1 = *(short *)(param_1 + 1), *(unsigned short *)(param_1 + 1) = sVar1 - 1U, uVar5 = uVar4,
         lVar6 = lVar3, (int)uVar4 < (int)(unsigned int)(unsigned short)(sVar1 - 1U))) {
        do {
          uVar5 = uVar5 + 1;
          puVar2 = (unsigned int *)((int)lVar6 + *param_1);
          *puVar2 = puVar2[1];
          lVar6 = lVar6 + 4;
        } while ((int)uVar5 < (int)(unsigned int)*(unsigned short *)(param_1 + 1));
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar4);
    return;
  }
  return;
}

