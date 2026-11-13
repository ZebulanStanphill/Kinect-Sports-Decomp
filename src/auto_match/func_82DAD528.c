void fn_82DAD528(int *param_1)

{
  short sVar1;
  unsigned int *puVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  
  uVar4 = (unsigned __int64)*(unsigned short *)(param_1 + 1) - 1;
  if (-1 < (__int64)uVar4) {
    lVar3 = (uVar4 & 0x3fffffff) << 2;
    do {
      if ((*(int *)((int)lVar3 + *param_1) == 0) &&
         (sVar1 = *(short *)(param_1 + 1), *(unsigned short *)(param_1 + 1) = sVar1 - 1U, lVar5 = lVar3,
         uVar6 = uVar4, (int)uVar4 < (int)(unsigned int)(unsigned short)(sVar1 - 1U))) {
        do {
          uVar6 = uVar6 + 1;
          puVar2 = (unsigned int *)((int)lVar5 + *param_1);
          *puVar2 = puVar2[1];
          lVar5 = lVar5 + 4;
        } while ((int)uVar6 < (int)(unsigned int)*(unsigned short *)(param_1 + 1));
      }
      uVar4 = uVar4 - 1;
      lVar3 = lVar3 + -4;
    } while (-1 < (__int64)uVar4);
    return;
  }
  return;
}

