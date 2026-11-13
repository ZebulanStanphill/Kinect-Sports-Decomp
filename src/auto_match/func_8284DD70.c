void fn_8284DD70(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x48) + 0x3c);
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      pcVar6 = (char *)(*(int *)(*(int *)(param_1 + 0x48) + 0x40) + iVar3);
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        iVar3 = *(int *)(*(int *)(param_1 + 0x48) + 0x40) + iVar7 * 0x3c;
        iVar4 = *(int *)(iVar3 + 0x34) + 1;
        *(int *)(iVar3 + 0x34) = iVar4 - (iVar4 / *(int *)(iVar3 + 0x2c)) * *(int *)(iVar3 + 0x2c);
        iVar7 = *(int *)(*(int *)(param_1 + 0x48) + 0x40) + iVar7 * 0x3c;
        iVar4 = *(int *)(iVar7 + 0x38) + 1;
        *(int *)(iVar7 + 0x38) = iVar4 - (iVar4 / *(int *)(iVar7 + 0x2c)) * *(int *)(iVar7 + 0x2c);
        return;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 0x3c;
    } while (iVar7 < iVar4);
  }
  return;
}

