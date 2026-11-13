void fn_82B90378(int param_1,int param_2)

{
  int iVar1;
  __int64 lVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  float *pfVar7;
  int (**UNRECOVERED_JUMPTABLE_00)();
  
  uVar5 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x68) != 0) {
    pfVar7 = (float *)(param_2 + 8);
    do {
      uVar5 = uVar5 + 1;
      iVar1 = *(int *)(param_1 + 0x5c) + (-8 - param_2);
      pfVar7[-2] = pfVar7[-2] + *(float *)((int)pfVar7 + iVar1 + 0x10);
      pfVar7[-1] = pfVar7[-1] + *(float *)((int)pfVar7 + iVar1 + 0x14);
      *pfVar7 = *(float *)((int)pfVar7 + iVar1 + 0x18) + *pfVar7;
      pfVar7[1] = pfVar7[1] + *(float *)((int)pfVar7 + iVar1 + 0x1c);
      uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x68);
      pfVar7 = pfVar7 + 4;
    } while ((uVar5 & 0xffffffff) < uVar6);
  }
  uVar6 = (uVar6 + 2 & 0xfffffff) * 0x10;
  lVar2 = uVar6 + 1;
  for (puVar3 = *(unsigned int **)(param_1 + 0x5c); lVar2 = lVar2 + -1,
      lVar2 != 0 && ((unsigned int)puVar3 & 3) != 0; puVar3 = (unsigned int *)((int)puVar3 + 1)) {
    uVar6 = uVar6 - 1;
    *(unsigned char *)puVar3 = 0;
  }
  for (uVar5 = (uVar6 & 0xffffffff) >> 4; uVar5 != 0; uVar5 = uVar5 - 1) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
  }
  uVar5 = (uVar6 & 0xffffffff) >> 2 & 3;
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
  uVar6 = uVar6 & 3;
  if (uVar6 == 0) {
    return;
  }
  *(unsigned char *)puVar4 = 0;
                    /* WARNING: Could not recover jumptable at 0x82f6927c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar6 == 1) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar4 + 1) = 0;
                    /* WARNING: Could not recover jumptable at 0x82f69284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (uVar6 == 2) {
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  *(unsigned char *)((int)puVar4 + 2) = 0;
  return;
}

