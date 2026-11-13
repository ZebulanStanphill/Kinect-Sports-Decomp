unsigned __int64 fn_82BB2C90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = 1;
  if (0 < *(int *)(param_1 + 0x14)) {
    piVar5 = (int *)(param_1 + 0xec);
    iVar2 = 0;
    do {
      iVar1 = *piVar5;
      iVar3 = iVar2;
      if ((((iVar1 != 0) && (iVar1 != param_1)) && (iVar3 = iVar1, iVar2 != 0)) &&
         (iVar3 = iVar2, iVar2 != iVar1)) {
        return 0;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
      iVar2 = iVar3;
    } while (iVar4 <= *(int *)(param_1 + 0x14));
  }
  return 1;
}

