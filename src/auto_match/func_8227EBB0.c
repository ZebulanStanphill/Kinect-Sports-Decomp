unsigned __int64 fn_8227EBB0(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2c);
  uVar5 = 0;
  uVar6 = 0xffffffffffffffff;
  if (uVar1 != 0xffffffff) {
    uVar6 = (unsigned __int64)*(unsigned int *)(*(int *)(uVar1 * 4 + *(int *)(param_1 + 0xc)) + 0x18) - 1;
    uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & uVar6;
  }
  piVar9 = *(int **)(param_1 + 0xc);
  uVar7 = 0;
  uVar3 = 0xffffffffffffffff;
  if (piVar9 != *(int **)(param_1 + 0x10)) {
    do {
      uVar8 = (unsigned __int64)*(unsigned int *)(*piVar9 + 0x6c);
      uVar4 = uVar3;
      if ((((~uVar8 & 0xffffffff) >> 1 & 1) != 0) && ((~uVar8 & 1) != 0)) {
        uVar2 = *(unsigned int *)(*piVar9 + 0x18);
        uVar4 = uVar7;
        if ((unsigned __int64)uVar2 == (uVar6 & 0xffffffff)) break;
        uVar4 = uVar3;
        if ((uVar5 <= uVar2) && ((unsigned __int64)uVar2 < (uVar6 & 0xffffffff))) {
          uVar4 = uVar7;
          uVar5 = uVar2;
        }
      }
      piVar9 = piVar9 + 1;
      uVar7 = uVar7 + 1;
      uVar3 = uVar4;
    } while (piVar9 != *(int **)(param_1 + 0x10));
    if ((int)uVar4 != -1) {
      return uVar4;
    }
  }
  return (unsigned __int64)uVar1;
}

