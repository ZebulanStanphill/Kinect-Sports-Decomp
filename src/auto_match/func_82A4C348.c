void fn_82A4C348(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int (**UNRECOVERED_JUMPTABLE_00)();
  unsigned __int64 uVar5;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x48) * 0xc;
  lVar1 = uVar2 + 1;
  for (puVar3 = *(unsigned int **)(param_1 + 0x30); lVar1 = lVar1 + -1,
      lVar1 != 0 && ((unsigned int)puVar3 & 3) != 0; puVar3 = (unsigned int *)((int)puVar3 + 1)) {
    uVar2 = uVar2 - 1;
    *(unsigned char *)puVar3 = 0;
  }
  for (uVar5 = (uVar2 & 0xffffffff) >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
  }
  uVar5 = (uVar2 & 0xffffffff) >> 2 & 3;
  puVar4 = puVar3;
  if (uVar5 != 0) {
    *puVar3 = 0;
    puVar4 = puVar3 + 1;
    if (uVar5 != 1) {
      *puVar4 = 0;
      puVar4 = puVar3 + 2;
      if (uVar5 != 2) {
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

