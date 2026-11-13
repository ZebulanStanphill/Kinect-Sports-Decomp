void fn_83023780(int param_1,int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int (**UNRECOVERED_JUMPTABLE_00)();
  unsigned __int64 uVar6;
  
  uVar5 = *(unsigned short *)(param_1 + 0x3c) + 1;
  puVar3 = *(unsigned int **)((*(unsigned short *)(param_1 + 0x3c) + 0x10) * 4 + param_1);
  *(short *)(param_1 + 0x3c) = (short)uVar5;
  if ((uVar5 & 0xffff) == 2) {
    *(unsigned short *)(param_1 + 0x3c) = 0;
  }
  uVar2 = (__int64)(int)(unsigned int)*(unsigned short *)(param_1 + 0x4a) * (__int64)param_2;
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 1;
  lVar1 = uVar2 + 1;
  for (; lVar1 = lVar1 + -1, lVar1 != 0 && ((unsigned int)puVar3 & 3) != 0;
      puVar3 = (unsigned int *)((int)puVar3 + 1)) {
    uVar2 = uVar2 - 1;
    *(unsigned char *)puVar3 = 0;
  }
  for (uVar6 = (uVar2 & 0xffffffff) >> 4; uVar6 != 0; uVar6 = uVar6 - 1) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
  }
  uVar6 = (uVar2 & 0xffffffff) >> 2 & 3;
  puVar4 = puVar3;
  if (uVar6 != 0) {
    *puVar3 = 0;
    puVar4 = puVar3 + 1;
    if (uVar6 != 1) {
      *puVar4 = 0;
      puVar4 = puVar3 + 2;
      if (uVar6 != 2) {
        *puVar4 = 0;
        puVar4 = puVar3 + 3;
      }
    }
  }
  uVar2 = uVar2 & 3;
  if (uVar2 == 0) {
    return;
  }
  *(unsigned char *)puVar4 = 0;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar4 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar2 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar4 + 2) = 0;
  return;
}

