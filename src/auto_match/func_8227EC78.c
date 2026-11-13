unsigned __int64 fn_8227EC78(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  
  uVar1 = *(unsigned int *)(param_1 + 0x2c);
  uVar4 = 0;
  uVar3 = 0xffffffff;
  if (uVar1 != 0xffffffff) {
    uVar4 = *(int *)(*(int *)(uVar1 * 4 + *(int *)(param_1 + 0xc)) + 0x18) + 1;
  }
  piVar7 = *(int **)(param_1 + 0xc);
  uVar5 = 0;
  uVar8 = 0xffffffffffffffff;
  if (piVar7 != *(int **)(param_1 + 0x10)) {
    do {
      uVar6 = (unsigned __int64)*(unsigned int *)(*piVar7 + 0x6c);
      uVar9 = uVar8;
      if ((((~uVar6 & 0xffffffff) >> 1 & 1) != 0) && ((~uVar6 & 1) != 0)) {
        uVar2 = *(unsigned int *)(*piVar7 + 0x18);
        uVar9 = uVar5;
        if (uVar2 == uVar4) break;
        uVar9 = uVar8;
        if ((uVar2 < uVar3) && (uVar4 < uVar2)) {
          uVar9 = uVar5;
          uVar3 = uVar2;
        }
      }
      piVar7 = piVar7 + 1;
      uVar5 = uVar5 + 1;
      uVar8 = uVar9;
    } while (piVar7 != *(int **)(param_1 + 0x10));
    if ((int)uVar9 != -1) {
      return uVar9;
    }
  }
  return (unsigned __int64)uVar1;
}

