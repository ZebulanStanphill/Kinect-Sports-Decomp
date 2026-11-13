__int64 fn_8281FCC8(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  uVar4 = 0;
  uVar3 = *(unsigned int *)(*(int *)(param_1 + 0x1c) + 0x24);
  if (uVar3 != 0) {
    iVar5 = 0;
    do {
      pcVar7 = (char *)(*(int *)(iVar5 + *(int *)(param_1 + 0x3c)) + *(int *)(param_1 + 0x40));
      pcVar6 = param_2;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        return uVar4 + 1;
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 4;
    } while ((uVar4 & 0xffffffff) < (unsigned __int64)uVar3);
  }
  return 0;
}

