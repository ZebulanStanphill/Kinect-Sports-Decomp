unsigned __int64 fn_82D44CE0(int param_1,__int64 param_2,unsigned int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned short *puVar5;
  unsigned __int64 uVar4;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  __int64 lVar9;
  
  iVar2 = 0;
  *param_3 = 0;
  if ((int)param_2 < 0) {
    return -(unsigned __int64)(*(int *)(param_1 + 0x20) == 0);
  }
  iVar1 = *(int *)(param_1 + 0x2c);
  uVar6 = param_2 + 1;
  uVar8 = 0;
  iVar3 = 0;
  iVar7 = (int)uVar6;
  if (iVar1 != 0) {
    puVar5 = *(unsigned short **)(param_1 + 0x28);
    uVar10 = (unsigned int)*puVar5;
    uVar4 = 0;
    uVar8 = (unsigned __int64)*puVar5;
    while (iVar3 = (int)uVar4, (int)uVar10 <= iVar7) {
      iVar2 = iVar2 + 1;
      puVar5 = puVar5 + 1;
      if (iVar1 <= iVar2) goto LAB_82d44d58;
      uVar10 = (unsigned int)(*puVar5 + uVar8);
      uVar4 = uVar8;
      uVar8 = *puVar5 + uVar8;
    }
  }
  if (iVar2 < iVar1) {
    if (iVar7 < (int)uVar8 + -2) {
      *param_3 = iVar7 - iVar3 & 1;
      uVar8 = uVar6;
    }
  }
  else {
LAB_82d44d58:
    lVar9 = uVar6 - uVar8;
    uVar8 = (__int64)(int)lVar9 / 3 + ((__int64)(int)lVar9 >> 0x3f);
    uVar4 = (uVar8 & 0xffffffff) + ((uVar8 & 0xffffffff) >> 0x1f);
    uVar8 = uVar6;
    if (lVar9 != uVar4 + (uVar4 & 0x7fffffff) * 2) {
      do {
        lVar9 = lVar9 + 1;
        uVar8 = uVar8 + 1;
        uVar6 = (__int64)(int)lVar9 / 3 + ((__int64)(int)lVar9 >> 0x3f);
        uVar6 = (uVar6 & 0xffffffff) + ((uVar6 & 0xffffffff) >> 0x1f);
      } while (lVar9 != uVar6 + (uVar6 & 0x7fffffff) * 2);
    }
  }
  uVar6 = 0xffffffffffffffff;
  if ((int)uVar8 < *(int *)(param_1 + 0x20)) {
    uVar6 = uVar8;
  }
  return uVar6;
}

