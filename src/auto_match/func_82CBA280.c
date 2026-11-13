void fn_82CBA280(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,unsigned int *param_5)

{
  unsigned int uVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  uVar1 = *param_5;
  iVar5 = *param_4;
  lVar7 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x88) & 0x1fffffff) * 8;
  if ((uVar1 & 4) == 0) {
    lVar2 = -8;
    lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) & 0x1fffffff) << 3;
  }
  else {
    lVar2 = -9;
    lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x8c) & 0x1fffffff) * 8 + 1;
  }
  if (iVar5 == 0x4000) {
    *param_4 = 0x4000;
  }
  else {
    lVar4 = (__int64)(iVar5 >> 2) + (param_2 & 0x1fffffff) * 8;
    lVar3 = (__int64)((int)uVar1 >> 2) + (param_3 & 0x1fffffff) * 8;
    if ((int)lVar4 < -8) {
      iVar5 = iVar5 - (int)((lVar4 + 8U & 0xffffffff) << 2);
    }
    else if ((int)lVar7 < (int)lVar4) {
      iVar5 = (int)((lVar7 - lVar4 & 0xffffffffU) << 2) + iVar5;
    }
    *param_4 = iVar5;
    if ((int)lVar3 < (int)lVar2) {
      *param_5 = (int)((lVar2 - lVar3 & 0xffffffffU) << 2) + uVar1;
      return;
    }
    if ((int)lVar6 < (int)lVar3) {
      *param_5 = (int)((lVar6 - lVar3 & 0xffffffffU) << 2) + uVar1;
      return;
    }
  }
  *param_5 = uVar1;
  return;
}

