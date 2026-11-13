unsigned char fn_82ED3520(int param_1,int param_2,int param_3,unsigned int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int *piVar8;
  
  if (-1 < (int)*(unsigned int *)(param_1 + 0x2c)) {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
    if ((((int)*(unsigned int *)(param_1 + 0x30) < 0) &&
        (uVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2c) - (unsigned __int64)*(unsigned int *)(param_1 + 0x28)) + 1,
        (__int64)uVar6 < 0)) && (uVar6 = *(unsigned int *)(param_1 + 0x1c) + uVar6, (int)uVar6 < 0)) {
      return 0;
    }
    lVar7 = uVar6 * 0x402c + (unsigned __int64)*(unsigned int *)(param_1 + 0x18);
    if (lVar7 != 0) {
      iVar1 = *(int *)(param_1 + 0x38);
      piVar8 = (int *)lVar7;
      if ((*(int *)(iVar1 + 0x7b38) == 0) || (*(int *)(iVar1 + 0x6d54) == 0)) {
        return *(unsigned char *)
                (((param_2 * 2 + ((int)param_4 >> 1)) * *(int *)(iVar1 + 0x2d0) + param_3) * 2 +
                 (param_4 & 1) + *piVar8);
      }
      param_2 = param_2 << 1;
      uVar5 = *(unsigned int *)(param_1 + 0x10) >> 4;
      if ((int)uVar5 <= param_2) {
        param_2 = uVar5 - 1;
      }
      iVar2 = *piVar8;
      uVar5 = param_4 & 1;
      iVar4 = param_2 * 2 + ((int)param_4 >> 1);
      iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 0x2d0);
      if (*(unsigned char *)((iVar3 * iVar4 + param_3) * 2 + iVar2 + uVar5) <=
          *(unsigned char *)((iVar3 * (iVar4 + 2) + param_3) * 2 + iVar2 + uVar5)) {
        return *(unsigned char *)
                ((*(int *)(iVar1 + 0x2d0) * (iVar4 + 2) + param_3) * 2 + iVar2 + uVar5);
      }
      return *(unsigned char *)((*(int *)(iVar1 + 0x2d0) * iVar4 + param_3) * 2 + iVar2 + uVar5);
    }
  }
  return 0;
}

