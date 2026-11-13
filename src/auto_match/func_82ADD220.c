__int64 fn_82ADD220(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned int uVar5;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 == 0) {
    return 1;
  }
  if (iVar2 == 0) {
    return -1;
  }
  lVar3 = ((unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0x1c) + 0x44) & 0xfffffff) -
          ((unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 0x1c) + 0x44) & 0xfffffff);
  if (lVar3 != 0) {
    return lVar3;
  }
  lVar3 = 0;
  lVar4 = 0;
  uVar5 = *(unsigned int *)(iVar1 + 8) >> 7 & 0x7f;
  if (uVar5 == 0x6e) {
    lVar3 = 1;
  }
  else if (uVar5 == 0x70) {
    lVar3 = 2;
  }
  uVar5 = *(unsigned int *)(iVar2 + 8) >> 7 & 0x7f;
  if (uVar5 == 0x6e) {
    lVar4 = 1;
  }
  else if (uVar5 == 0x70) {
    lVar4 = 2;
  }
  if (lVar3 - lVar4 != 0) {
    return lVar3 - lVar4;
  }
  return ((unsigned __int64)*(unsigned int *)(iVar1 + 0x10) & 0xffff) -
         ((unsigned __int64)*(unsigned int *)(iVar2 + 0x10) & 0xffff);
}

