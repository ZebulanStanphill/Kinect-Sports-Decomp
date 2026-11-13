extern int fn_829640A0();


unsigned __int64 fn_8294D308(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int uVar6;
  int iVar7;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    iVar7 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x14);
      iVar3 = *(int *)(iVar7 + iVar1);
      iVar2 = *(int *)(iVar3 + 0x38);
      iVar5 = iVar2;
      if (iVar2 != -1) {
        while (iVar4 = *(int *)(iVar5 * 4 + iVar1), *(int *)(iVar4 + 0x38) != -1) {
          *(unsigned int *)(iVar3 + 0x3c) = *(unsigned int *)(iVar4 + 0x3c) | *(unsigned int *)(iVar3 + 0x3c);
          iVar1 = *(int *)(param_1 + 0x14);
          iVar5 = *(int *)(iVar4 + 0x38);
        }
        if (iVar2 != iVar5) {
          *(int *)(iVar3 + 0x38) = iVar5;
          fn_829640A0();
        }
      }
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar6 < *(unsigned int *)(param_1 + 8));
  }
  return 0;
}

