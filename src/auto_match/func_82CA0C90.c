extern unsigned int lbl_83232478;


void fn_82CA0C90(int param_1)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = lbl_83232478;
  if (*(int *)(param_1 + 0x3a0c) != 1) {
    return;
  }
  lVar4 = (__int64)*(int *)(param_1 + 0xd8) * (__int64)*(int *)(param_1 + 0xd0);
  iVar1 = *(int *)(param_1 + 0xf00);
  iVar7 = *(int *)(param_1 + 0xefc);
  iVar6 = *(int *)(param_1 + 0xef8);
  lVar3 = (__int64)*(int *)(param_1 + 0xd4) * (__int64)*(int *)(param_1 + 0xcc);
  iVar5 = 0;
  if (0 < (int)lVar3) {
    do {
      *(unsigned char *)(iVar5 + iVar6) =
           *(unsigned char *)((*(unsigned char *)(iVar5 + iVar6) - 0x40) * 2 + iVar2);
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar6 = 0;
  lVar3 = lVar4;
  if (0 < (int)lVar4) {
    do {
      *(unsigned char *)(iVar6 + iVar7) =
           *(unsigned char *)((*(unsigned char *)(iVar6 + iVar7) - 0x40) * 2 + iVar2);
      iVar6 = iVar6 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar7 = 0;
  if (0 < (int)lVar4) {
    do {
      *(unsigned char *)(iVar7 + iVar1) =
           *(unsigned char *)((*(unsigned char *)(iVar7 + iVar1) - 0x40) * 2 + iVar2);
      iVar7 = iVar7 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
  }
  return;
}

