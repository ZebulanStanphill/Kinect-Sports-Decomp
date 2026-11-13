void fn_8284DED8(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x48) + 0x3c);
  if (0 < iVar5) {
    iVar3 = 0;
    do {
      pcVar6 = (char *)(*(int *)(*(int *)(param_1 + 0x48) + 0x40) + iVar3);
      pcVar4 = param_2;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        iVar7 = iVar7 * 0x3c + *(int *)(*(int *)(param_1 + 0x48) + 0x40);
        iVar5 = *(int *)(iVar7 + 0x34) + 1;
        *(int *)(iVar7 + 0x34) = iVar5 - (iVar5 / *(int *)(iVar7 + 0x2c)) * *(int *)(iVar7 + 0x2c);
        return;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 0x3c;
    } while (iVar7 < iVar5);
  }
  return;
}

