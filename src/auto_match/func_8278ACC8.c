unsigned __int64 fn_8278ACC8(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (((*(int *)(param_1 + 8) == *(int *)(param_2 + 8)) &&
      (*(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc))) &&
     (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10))) {
    pcVar3 = (char *)((*(unsigned int *)(*(int *)(param_2 + 0x14) + 0x10) & 0xfffffffc) + 8);
    pcVar4 = (char *)((*(unsigned int *)(*(int *)(param_1 + 0x14) + 0x10) & 0xfffffffc) + 8);
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      return 1;
    }
  }
  return 0;
}

