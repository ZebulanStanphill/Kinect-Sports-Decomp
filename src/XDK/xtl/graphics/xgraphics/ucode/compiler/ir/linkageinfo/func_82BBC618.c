void fn_82BBC618(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  if ((*(char *)(param_3 + param_1 + 0x380) == '\0') &&
     (*(char *)(param_4 + param_1 + 0x380) == '\0')) {
    iVar3 = (param_3 + 0xf4) * 4;
    iVar4 = (param_4 + 0xf4) * 4;
    iVar5 = (param_4 + 0x104) * 4;
    iVar1 = (param_3 + 0x104) * 4;
    uVar2 = *(unsigned int *)(iVar4 + param_1);
    *(unsigned int *)(iVar4 + param_1) = *(unsigned int *)(iVar3 + param_1);
    *(unsigned int *)(iVar3 + param_1) = uVar2;
    lVar6 = 0;
    uVar2 = *(unsigned int *)(iVar5 + param_1);
    lVar7 = 4;
    *(unsigned int *)(iVar5 + param_1) = *(unsigned int *)(iVar1 + param_1);
    *(unsigned int *)(iVar1 + param_1) = uVar2;
    do {
      iVar3 = (int)((((unsigned __int64)param_3 + 0x45 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      iVar4 = (int)((((unsigned __int64)param_4 + 0x45 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      lVar6 = lVar6 + 1;
      uVar2 = *(unsigned int *)(iVar4 + param_1);
      *(unsigned int *)(iVar4 + param_1) = *(unsigned int *)(iVar3 + param_1);
      *(unsigned int *)(iVar3 + param_1) = uVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar6 = 0;
    lVar7 = 4;
    do {
      iVar3 = (int)((((unsigned __int64)param_3 + 0x55 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      iVar4 = (int)((((unsigned __int64)param_4 + 0x55 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      lVar6 = lVar6 + 1;
      uVar2 = *(unsigned int *)(iVar4 + param_1);
      *(unsigned int *)(iVar4 + param_1) = *(unsigned int *)(iVar3 + param_1);
      *(unsigned int *)(iVar3 + param_1) = uVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar6 = 0;
    lVar7 = 4;
    do {
      iVar3 = (int)((((unsigned __int64)param_3 + 0x65 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      iVar4 = (int)((((unsigned __int64)param_4 + 0x65 & 0x3fffffff) * 4 + lVar6 & 0xffffffff) << 2);
      lVar6 = lVar6 + 1;
      uVar2 = *(unsigned int *)(iVar4 + param_1);
      *(unsigned int *)(iVar4 + param_1) = *(unsigned int *)(iVar3 + param_1);
      *(unsigned int *)(iVar3 + param_1) = uVar2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    iVar4 = (param_3 + 0xe4) * 4;
    iVar5 = (param_4 + 0xe4) * 4;
    iVar3 = *(int *)(iVar5 + param_1);
    *(unsigned int *)(iVar5 + param_1) = *(unsigned int *)(iVar4 + param_1);
    *(int *)(iVar4 + param_1) = iVar3;
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x38);
      *(unsigned int *)(iVar3 + 0x10) = param_3;
      if (iVar1 != 0) {
        uVar2 = *(unsigned int *)(iVar3 + 0x20);
        *(unsigned int *)(iVar1 + 0x38) = param_3;
        *(unsigned int *)(iVar1 + 0x50) = uVar2;
      }
    }
    iVar3 = *(int *)(iVar5 + param_1);
    if (iVar3 != 0) {
      iVar1 = *(int *)(iVar3 + 0x38);
      *(unsigned int *)(iVar3 + 0x10) = param_4;
      if (iVar1 != 0) {
        uVar2 = *(unsigned int *)(iVar3 + 0x20);
        *(unsigned int *)(iVar1 + 0x38) = param_4;
        *(unsigned int *)(iVar1 + 0x50) = uVar2;
      }
    }
    if ((*(int *)(iVar4 + param_1) != 0) && (*(int *)(*(int *)(iVar4 + param_1) + 0x20) == 0x12)) {
      *(unsigned int *)(param_2 + 0x81c) = param_3;
    }
    if ((*(int *)(iVar5 + param_1) != 0) && (*(int *)(*(int *)(iVar5 + param_1) + 0x20) == 0x12)) {
      *(unsigned int *)(param_2 + 0x81c) = param_4;
    }
  }
  return;
}

