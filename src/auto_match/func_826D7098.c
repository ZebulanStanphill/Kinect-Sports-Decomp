unsigned __int64 fn_826D7098(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (((*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc)) &&
      (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))) &&
     (*(__int64 *)(param_1 + 0x10) == *(__int64 *)(param_2 + 0x10))) {
    pcVar3 = (char *)((*(unsigned int *)(param_2 + 8) & 0xfffffffc) + 8);
    pcVar4 = (char *)((*(unsigned int *)(param_1 + 8) & 0xfffffffc) + 8);
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if ((cVar1 == cVar2) && (*(int *)(param_1 + 0x1c) == *(int *)(param_2 + 0x1c))) {
      return 1;
    }
  }
  return 0;
}

