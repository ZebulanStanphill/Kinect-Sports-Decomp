void fn_82D9AB08(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned int *puVar2;
  int (**UNRECOVERED_JUMPTABLE_00)();
  unsigned __int64 uVar3;
  
  if (param_3 == (unsigned int *)0x0) {
    return;
  }
  lVar1 = param_4 + 1;
  for (; lVar1 = lVar1 + -1, lVar1 != 0 && ((unsigned int)param_3 & 3) != 0;
      param_3 = (unsigned int *)((int)param_3 + 1)) {
    param_4 = param_4 - 1;
    *(unsigned char *)param_3 = 0;
  }
  for (uVar3 = (param_4 & 0xffffffff) >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    param_3[3] = 0;
    param_3 = param_3 + 4;
  }
  uVar3 = (param_4 & 0xffffffff) >> 2 & 3;
  puVar2 = param_3;
  if (uVar3 != 0) {
    *param_3 = 0;
    puVar2 = param_3 + 1;
    if (uVar3 != 1) {
      *puVar2 = 0;
      puVar2 = param_3 + 2;
      if (uVar3 != 2) {
        *puVar2 = 0;
        puVar2 = param_3 + 3;
      }
    }
  }
  param_4 = param_4 & 3;
  if (param_4 == 0) {
    return;
  }
  *(unsigned char *)puVar2 = 0;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_4 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar2 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_4 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar2 + 2) = 0;
  return;
}

