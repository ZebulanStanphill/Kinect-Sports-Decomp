void fn_82653510(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  
  if (*(int *)(param_1 + 0x5e90) != 0) {
    *(unsigned int *)(param_1 + 0x5e8c) = 1;
    sync(1);
    *(unsigned __int64 *)(*(int *)(param_1 + 0x5e90) + 0x220) = 0xffffffffffffffff;
  }
  if (*(int *)(param_1 + 0x5ea8) == 0) {
    return;
  }
  iVar2 = 0;
  iVar3 = 0;
  lVar4 = 0x3f;
  do {
    iVar1 = *(int *)(param_1 + 0x5eb0) + iVar3;
    iVar3 = iVar3 + 0x14;
    *(unsigned int *)(iVar2 + *(int *)(param_1 + 0x5ea8)) =
         *(int *)(iVar1 + 4) * 0x30000 + 0x10000U | 0xc0001000;
    iVar2 = iVar2 + 0x80;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  sync(0);
  iVar2 = 0;
  lVar4 = 0x3f;
  do {
    iVar3 = iVar2 + *(int *)(param_1 + 0x5ea8);
    iVar2 = iVar2 + 0x80;
    *(unsigned int *)(iVar3 + 0x6c) = 0xffffffff;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  sync(0);
  return;
}

