extern int fn_825F4FE8();
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_825F4F10(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  int *piVar7;
  
  piVar7 = (int *)(param_1 + 0x8dc);
  if (*(int *)(param_1 + 0x8f0) < 1) {
    uVar3 = 0;
  }
  else {
    if (*piVar7 != 0) {
      fn_825F4FE8();
    }
    lVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8f0) - 1;
    *(unsigned int *)(param_1 + 0x91c) = param_2;
    *(unsigned int *)(param_1 + 0x900) = 0;
    *(int *)(param_1 + 0x8f0) = (int)lVar5;
    uVar2 = ltcg_pool_0_0f;
    iVar4 = 0;
    *(unsigned int *)(param_1 + 0x8f8) = ltcg_pool_0_0f;
    *(unsigned int *)(param_1 + 0x8fc) = 1;
    *(unsigned int *)(param_1 + 0x8f4) = uVar2;
    *(unsigned int *)(param_1 + 0x918) = 0;
    *(unsigned int *)(param_1 + 0x920) = uVar2;
    *piVar7 = *(int *)(param_1 + 0x8e0);
    *(unsigned int *)(param_1 + 0x924) = uVar2;
    if (0 < lVar5) {
      puVar6 = (unsigned int *)(param_1 + 0x8dc);
      do {
        puVar1 = puVar6 + 2;
        iVar4 = iVar4 + 1;
        puVar6 = puVar6 + 1;
        *puVar6 = *puVar1;
      } while (iVar4 < *(int *)(param_1 + 0x8f0));
    }
    uVar3 = 1;
    piVar7[*(int *)(param_1 + 0x8f0) + 1] = 0;
  }
  return uVar3;
}

