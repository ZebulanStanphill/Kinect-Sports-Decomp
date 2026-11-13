#define true 1


void fn_82F691F0(unsigned int *param_1,unsigned int param_2,unsigned __int64 param_3)

{
  __int64 lVar1;
  unsigned char uVar3;
  unsigned int uVar2;
  unsigned int *puVar4;
  int (**UNRECOVERED_JUMPTABLE_00)();
  unsigned __int64 uVar5;
  
  lVar1 = param_3 + 1;
  while( true ) {
    lVar1 = lVar1 + -1;
    uVar3 = (unsigned char)param_2;
    if (lVar1 == 0 || ((unsigned int)param_1 & 3) == 0) break;
    param_3 = param_3 - 1;
    *(unsigned char *)param_1 = uVar3;
    param_1 = (unsigned int *)((int)param_1 + 1);
  }
  uVar2 = (param_2 & 0xff) << 8;
  uVar2 = (uVar2 | param_2 & 0xffff00ff) << 0x10 | uVar2 | param_2 & 0xff;
  for (uVar5 = (param_3 & 0xffffffff) >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *param_1 = uVar2;
    param_1[1] = uVar2;
    param_1[2] = uVar2;
    param_1[3] = uVar2;
    param_1 = param_1 + 4;
  }
  uVar5 = (param_3 & 0xffffffff) >> 2 & 3;
  puVar4 = param_1;
  if (uVar5 != 0) {
    *param_1 = uVar2;
    puVar4 = param_1 + 1;
    if (uVar5 != 1) {
      *puVar4 = uVar2;
      puVar4 = param_1 + 2;
      if (uVar5 != 2) {
        *puVar4 = uVar2;
        puVar4 = param_1 + 3;
      }
    }
  }
  param_3 = param_3 & 3;
  if (param_3 == 0) {
    return;
  }
  *(unsigned char *)puVar4 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_3 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar4 + 1) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (param_3 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar4 + 2) = uVar3;
  return;
}

