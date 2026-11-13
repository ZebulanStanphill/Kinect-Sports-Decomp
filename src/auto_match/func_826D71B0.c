unsigned __int64 fn_826D71B0(int param_1,int param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_1 != *param_3) {
    return 0;
  }
  iVar3 = param_3[1];
  if (((*(int *)(param_2 + 0xc) == *(int *)(iVar3 + 0xc)) &&
      (*(int *)(param_2 + 0x18) == *(int *)(iVar3 + 0x18))) &&
     (*(__int64 *)(param_2 + 0x10) == *(__int64 *)(iVar3 + 0x10))) {
    pcVar4 = (char *)((*(unsigned int *)(iVar3 + 8) & 0xfffffffc) + 8);
    pcVar5 = (char *)((*(unsigned int *)(param_2 + 8) & 0xfffffffc) + 8);
    do {
      cVar1 = *pcVar5;
      cVar2 = *pcVar4;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2);
    if ((cVar1 == cVar2) && (*(int *)(param_2 + 0x1c) == *(int *)(iVar3 + 0x1c))) {
      return 1;
    }
  }
  return 0;
}

