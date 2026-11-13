unsigned __int64 fn_8278AFF0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)((*(unsigned int *)(param_2 + 0x38) & 0xfffffffc) + 8);
  pcVar4 = (char *)((*(unsigned int *)(param_1 + 0x38) & 0xfffffffc) + 8);
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    pcVar3 = (char *)((*(unsigned int *)(param_2 + 0x3c) & 0xfffffffc) + 8);
    pcVar4 = (char *)((*(unsigned int *)(param_1 + 0x3c) & 0xfffffffc) + 8);
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if ((((cVar1 == cVar2) && (*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x40))) &&
        (*(int *)(param_1 + 0x44) == *(int *)(param_2 + 0x44))) &&
       ((*(int *)(param_1 + 0x48) == *(int *)(param_2 + 0x48) &&
        (*(char *)(param_1 + 0x4c) == *(char *)(param_2 + 0x4c))))) {
      return 1;
    }
  }
  return 0;
}

