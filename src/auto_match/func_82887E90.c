void fn_82887E90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  int iVar5;
  __int64 lVar6;
  
  puVar4 = (unsigned int *)(param_1 + 0x194);
  lVar6 = 0x33;
  do {
    puVar4[-0x32] = 0;
    puVar4 = puVar4 + 1;
    *puVar4 = 0;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar3 = 0x2ca;
  do {
    iVar5 = 0;
    lVar6 = 0x33;
    do {
      iVar2 = iVar3 + -0x231 + iVar5;
      iVar1 = iVar3 + iVar5;
      iVar5 = iVar5 + 1;
      *(unsigned int *)(iVar2 * 4 + param_1) = 0;
      *(unsigned int *)(iVar1 * 4 + param_1) = 0;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    iVar3 = iVar3 + 0x33;
  } while (iVar3 < 0x4fb);
  return;
}

