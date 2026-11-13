__int64 fn_82BB2CF8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int iVar6;
  __int64 lVar7;
  
  lVar3 = 1;
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x10) + 0x14);
  uVar5 = (unsigned __int64)uVar1;
  if (0 < (int)uVar1) {
    iVar4 = 0x19;
    do {
      iVar6 = 0;
      lVar7 = 4;
      do {
        iVar2 = iVar4 + iVar6;
        iVar6 = iVar6 + 1;
        lVar3 = (__int64)*(int *)(iVar2 * 4 + param_1) * (__int64)(int)lVar3;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
      uVar5 = uVar5 - 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 != 0);
  }
  lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) + lVar3;
  return lVar3 + (__int64)((int)lVar3 / 0x65) * -0x65;
}

