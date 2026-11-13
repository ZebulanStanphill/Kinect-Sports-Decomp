__int64 fn_82B41560(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,int param_8)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  int iVar12;
  unsigned int in_stack_00000054;
  
  uVar6 = (unsigned __int64)in_stack_00000054;
  if (((in_stack_00000054 == 0x19 || in_stack_00000054 == 0x12) || in_stack_00000054 == 0x11) ||
      (((~uVar6 & 0xffffffff) >> 0x1f) + (unsigned __int64)(8 < uVar6) & 1) != 0) {
    iVar9 = -1;
    iVar10 = -1;
  }
  else {
    if ((in_stack_00000054 == 0x16 || in_stack_00000054 == 0x13) ||
        (((~uVar6 & 0xffffffff) >> 0x1f) + (unsigned __int64)(0xc < uVar6) & 1) != 0) {
      iVar9 = 1;
      iVar12 = -1;
      iVar10 = 1;
      goto LAB_82b41648;
    }
    if (in_stack_00000054 == 0x17) {
      iVar9 = 1;
      iVar12 = -1;
      iVar10 = -1;
      goto LAB_82b41648;
    }
    iVar10 = 1;
    if (in_stack_00000054 == 0x18) {
      iVar9 = -1;
      iVar12 = -1;
      goto LAB_82b41648;
    }
    iVar9 = 1;
    iVar10 = 1;
  }
  iVar12 = 1;
LAB_82b41648:
  uVar1 = *(unsigned int *)(param_8 + 0x54);
  lVar5 = (param_2 & 0xffffffff) * (param_5 & 0xffffffff);
  if ((int)uVar1 < 0) {
    uVar11 = lVar5 << ((__int64)(int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f)) & 0x7fU)
    ;
  }
  else {
    uVar11 = lVar5 >> ((__int64)(int)uVar1 & 0x7fU);
  }
  if ((((((in_stack_00000054 == 0xc || in_stack_00000054 == 0xb) || in_stack_00000054 == 8) ||
        in_stack_00000054 == 7) || in_stack_00000054 == 4) || in_stack_00000054 == 3) ||
      (((~uVar6 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar6 < 0xf) & 1) != 0) {
    lVar5 = (param_6 & 0xffffffff) * (param_6 & 0xffffffff);
    uVar6 = lVar5 >> ((__int64)(*(int *)(param_8 + 0x48) + -1) & 0x7fU);
    uVar6 = (__int64)iVar12 * (param_3 & 0xffffffff) * ((__int64)uVar6 >> 1 | uVar6 & 1);
    if (0x10 < (int)in_stack_00000054) {
      uVar1 = *(unsigned int *)(param_8 + 0x5c);
      uVar2 = *(unsigned int *)(param_8 + 0x58);
      uVar7 = lVar5 >> ((__int64)(*(int *)(param_8 + 0x4c) + -1) & 0x7fU);
      uVar4 = (__int64)((__int64)iVar10 * (param_4 & 0xffffffff) * (param_7 & 0xffffffff)) >>
              ((__int64)(*(int *)(param_8 + 0x50) + -1) & 0x7fU);
      lVar5 = ((__int64)uVar4 >> 1 | uVar4 & 1) * ((__int64)uVar7 >> 1 | uVar7 & 1);
      uVar8 = (unsigned int)((unsigned __int64)uVar1 - (unsigned __int64)uVar2);
      if ((__int64)((unsigned __int64)uVar1 - (unsigned __int64)uVar2) < 0) {
        lVar5 = lVar5 << ((__int64)(int)((uVar8 ^ (int)uVar8 >> 0x1f) - ((int)uVar8 >> 0x1f)) &
                         0x7fU);
      }
      else {
        uVar3 = (int)(uVar2 - uVar1) >> 0x1f;
        uVar6 = uVar6 << ((__int64)(int)((uVar2 - uVar1 ^ uVar3) - uVar3) & 0x7fU);
      }
      if (-1 < (int)uVar8) {
        uVar2 = uVar1;
      }
      return ((param_1 & 0xffffffff) << ((__int64)(0x28 - *(int *)(param_8 + 0x20)) & 0x7fU)) +
             (*(unsigned __int64 *)(param_8 + 0x70) & uVar11) * (__int64)iVar9 +
             (*(unsigned __int64 *)(param_8 + 0x70) &
             (__int64)(lVar5 + uVar6) >> ((__int64)(int)uVar2 & 0x7fU));
    }
    lVar5 = ((param_1 & 0xffffffff) << ((__int64)(0x28 - *(int *)(param_8 + 0x20)) & 0x7fU)) +
            (*(unsigned __int64 *)(param_8 + 0x70) & uVar11) * (__int64)iVar9;
    uVar6 = *(unsigned __int64 *)(param_8 + 0x70) & uVar6;
  }
  else {
    uVar6 = (*(unsigned __int64 *)(param_8 + 0x70) & uVar11) * (__int64)iVar9;
    lVar5 = (param_1 & 0xffffffff) << ((__int64)(0x28 - *(int *)(param_8 + 0x20)) & 0x7fU);
  }
  return lVar5 + uVar6;
}

