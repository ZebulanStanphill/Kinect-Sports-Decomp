void fn_82F26E28(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,int *param_5)

{
  int iVar1;
  __int64 lVar2;
  __int64 lVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  
  iVar4 = *param_4;
  iVar1 = *param_5;
  lVar6 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0x1fffffff) * 8;
  lVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d4) & 0x1fffffff) * 8;
  if (iVar4 == 0x4000) {
    *param_4 = 0x4000;
  }
  else {
    lVar3 = (__int64)(iVar4 >> 2) + (param_2 & 0x1fffffff) * 8;
    lVar2 = (__int64)(iVar1 >> 2) + (param_3 & 0x1fffffff) * 8;
    if ((int)lVar3 < -8) {
      iVar4 = iVar4 - (int)((lVar3 + 8U & 0xffffffff) << 2);
    }
    else if ((int)lVar6 < (int)lVar3) {
      iVar4 = (int)((lVar6 - lVar3 & 0xffffffffU) << 2) + iVar4;
    }
    *param_4 = iVar4;
    if ((int)lVar2 < -8) {
      *param_5 = iVar1 - (int)((lVar2 + 8U & 0xffffffff) << 2);
      return;
    }
    if ((int)lVar5 < (int)lVar2) {
      *param_5 = (int)((lVar5 - lVar2 & 0xffffffffU) << 2) + iVar1;
      return;
    }
  }
  *param_5 = iVar1;
  return;
}

