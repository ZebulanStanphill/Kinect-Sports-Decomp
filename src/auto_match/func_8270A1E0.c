void fn_8270A1E0(int *param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  
  iVar2 = (int)param_4;
  uVar3 = param_3 - param_2;
  *param_1 = iVar2;
  param_1[4] = (int)param_2;
  trapWord(6,param_4,0);
  lVar4 = uVar3 - (__int64)((int)uVar3 / iVar2) * (__int64)iVar2;
  iVar1 = (int)uVar3 / iVar2;
  iVar5 = (int)lVar4;
  param_1[2] = iVar5;
  param_1[1] = iVar1;
  trapWord(6,param_4,0);
  param_1[3] = iVar5;
  trapWord(5,param_4 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
  trapWord(5,param_4 & ~(((uVar3 & 0x7fffffff) << 1 | (uVar3 & 0xffffffff) >> 0x1f) - 1),0xffff);
  if (lVar4 < 1) {
    param_1[3] = iVar5 + iVar2;
    param_1[2] = iVar5 + iVar2;
    param_1[1] = iVar1 + -1;
  }
  param_1[3] = param_1[3] - iVar2;
  return;
}

