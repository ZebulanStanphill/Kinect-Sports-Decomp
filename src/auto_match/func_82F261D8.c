int fn_82F261D8(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  __int64 lVar5;
  __int64 lVar6;
  __int64 lVar7;
  __int64 lVar8;
  
  uVar1 = *param_3;
  iVar2 = 0;
  if ((uVar1 & 4) == 0) {
    lVar4 = -0x12;
    lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0xfffffff) << 4;
    lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d4) & 0xfffffff) << 4;
  }
  else {
    lVar4 = -0x11;
    lVar8 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d4) & 0xfffffff) * 0x10 + 1;
    lVar3 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x2d0) & 0xfffffff) * 0x10 + 1;
  }
  lVar6 = (__int64)((int)*param_2 >> 2) + (param_4 & 0xfffffff) * 0x10;
  lVar5 = (__int64)((int)uVar1 >> 2) + (param_5 & 0xfffffff) * 0x10;
  lVar7 = lVar4;
  if (((int)lVar6 < (int)lVar4) || (lVar7 = lVar3, (int)lVar3 < (int)lVar6)) {
    iVar2 = 1;
    lVar6 = lVar7;
  }
  if ((int)lVar5 < (int)lVar4) {
    iVar2 = 1;
    lVar5 = lVar4;
  }
  else if ((int)lVar8 < (int)lVar5) {
    iVar2 = 1;
    lVar5 = lVar8;
  }
  else if (iVar2 == 0) {
    return 0;
  }
  *param_2 = (int)((lVar6 + (param_4 & 0xfffffff) * -0x10 & 0xffffffff) << 2) + (*param_2 & 3);
  *param_3 = (int)((lVar5 + (param_5 & 0xfffffff) * -0x10 & 0xffffffff) << 2) + (uVar1 & 3);
  return iVar2;
}

