void fn_8270BA30(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  
  if (param_3 < 2) {
    uVar5 = param_2 >> 2 & 0x3ffffffc;
    iVar4 = (param_2 & 0xf) << 1;
    *(unsigned int *)(uVar5 + param_1) = *(unsigned int *)(uVar5 + param_1) & ~(3 << iVar4) | 1 << iVar4;
    return;
  }
  uVar5 = param_2 >> 2 & 0x3ffffffc;
  if (param_3 == 2) {
    iVar4 = (param_2 & 0xf) << 1;
    uVar8 = param_2 + 1 >> 2 & 0x3ffffffc;
    *(unsigned int *)(uVar5 + param_1) = *(unsigned int *)(uVar5 + param_1) & ~(3 << iVar4) | 2 << iVar4;
    uVar5 = (param_2 + 1) * 2 & 0x1e;
    *(unsigned int *)(uVar8 + param_1) = *(unsigned int *)(uVar8 + param_1) & ~(3 << uVar5) | param_4 + 1 << uVar5;
    return;
  }
  uVar8 = 3 << ((param_2 & 0xf) << 1);
  uVar1 = param_2 + 1 >> 2 & 0x3ffffffc;
  uVar3 = (param_2 + 1) * 2;
  uVar2 = uVar3 & 0x1e;
  *(unsigned int *)(uVar5 + param_1) = *(unsigned int *)(uVar5 + param_1) & ~uVar8 | uVar8;
  if (param_3 < 6) {
    uVar5 = param_4 + 1;
    *(unsigned int *)(uVar1 + param_1) =
         *(unsigned int *)(uVar1 + param_1) & ~(3 << uVar2) | param_3 - 3 << (uVar3 & 0x1e);
  }
  else {
    uVar2 = 3 << uVar2;
    if (param_3 < 8) {
      uVar5 = param_2 + 2 >> 2 & 0x3ffffffc;
      uVar8 = (param_2 + 2) * 2 & 0x1e;
      *(unsigned int *)(uVar1 + param_1) = *(unsigned int *)(uVar1 + param_1) & ~uVar2 | uVar2;
      uVar7 = (param_2 + 3) * 2 & 0x1e;
      uVar3 = param_2 + 3 >> 2 & 0x3ffffffc;
      uVar1 = param_2 + 4 >> 2 & 0x3ffffffc;
      uVar6 = (param_2 + 4) * 2 & 0x1e;
      *(unsigned int *)(uVar5 + param_1) = *(unsigned int *)(uVar5 + param_1) & ~(3 << uVar8) | 0 << uVar8;
      uVar8 = (param_2 + param_3) - 1;
      uVar2 = uVar8 * 2 & 0x1e;
      uVar5 = param_4 + 1 << uVar2;
      *(unsigned int *)(uVar3 + param_1) = *(unsigned int *)(uVar3 + param_1) & ~(3 << uVar7) | 0 << uVar7;
      *(unsigned int *)(uVar1 + param_1) = *(unsigned int *)(uVar1 + param_1) & ~(3 << uVar6) | param_3 - 6 << uVar6
      ;
      goto LAB_8270bc9c;
    }
    if (param_3 < 0x26) {
      uVar3 = param_3 - 6;
      uVar7 = (param_2 + 2) * 2 & 0x1e;
      uVar5 = param_2 + 2 >> 2 & 0x3ffffffc;
      uVar6 = (param_2 + 3) * 2 & 0x1e;
      *(unsigned int *)(uVar1 + param_1) = *(unsigned int *)(uVar1 + param_1) & ~uVar2 | uVar2;
      uVar8 = param_2 + 3 >> 2 & 0x3ffffffc;
      uVar2 = (param_2 + 4) * 2 & 0x1e;
      *(unsigned int *)(uVar5 + param_1) =
           *(unsigned int *)(uVar5 + param_1) & ~(3 << uVar7) | (uVar3 >> 4) << uVar7;
      uVar5 = param_2 + 4 >> 2 & 0x3ffffffc;
      *(unsigned int *)(uVar8 + param_1) =
           (uVar3 >> 2 & 3) << uVar6 | *(unsigned int *)(uVar8 + param_1) & ~(3 << uVar6);
      *(unsigned int *)(uVar5 + param_1) = *(unsigned int *)(uVar5 + param_1) & ~(3 << uVar2) | (uVar3 & 3) << uVar2
      ;
    }
    else {
      uVar8 = param_2 + 2 >> 2 & 0x3ffffffc;
      *(unsigned int *)(uVar1 + param_1) = *(unsigned int *)(uVar1 + param_1) & ~uVar2 | uVar2;
      uVar5 = 3 << ((param_2 + 2) * 2 & 0x1e);
      *(unsigned int *)(uVar8 + param_1) = *(unsigned int *)(uVar8 + param_1) & ~uVar5 | uVar5;
      *(unsigned int *)((param_2 * 2 + 0x25 >> 3 & 0x1ffffffc) + param_1) = param_3;
    }
    uVar8 = (param_2 + param_3) - 3;
    uVar5 = uVar8 >> 2 & 0x3ffffffc;
    uVar2 = uVar8 * 2 & 0x1e;
    uVar3 = (param_2 + param_3) - 2;
    uVar8 = uVar3 >> 2 & 0x3ffffffc;
    *(unsigned int *)(uVar5 + param_1) =
         *(unsigned int *)(uVar5 + param_1) & ~(3 << uVar2) | ((param_4 & 0x7fffffff) >> 3) << uVar2;
    uVar2 = uVar3 * 2 & 0x1e;
    uVar5 = param_4 << 1 & 3 | 1;
    *(unsigned int *)(uVar8 + param_1) =
         *(unsigned int *)(uVar8 + param_1) & ~(3 << uVar2) | ((param_4 << 1 & 0xc) >> 2) << uVar2;
  }
  uVar8 = (param_2 + param_3) - 1;
  uVar2 = uVar8 * 2 & 0x1e;
  uVar5 = uVar5 << uVar2;
LAB_8270bc9c:
  uVar8 = uVar8 >> 2 & 0x3ffffffc;
  *(unsigned int *)(uVar8 + param_1) = *(unsigned int *)(uVar8 + param_1) & ~(3 << uVar2) | uVar5;
  return;
}

