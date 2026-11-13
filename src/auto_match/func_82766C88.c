unsigned __int64 fn_82766C88(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar5;
  unsigned __int64 uVar4;
  
  pcVar3 = (char *)((*(unsigned int *)(param_2 + 0xc) & 0xfffffffc) + 8);
  pcVar5 = (char *)((*(unsigned int *)(param_1 + 0xc) & 0xfffffffc) + 8);
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (((cVar1 != cVar2) || (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) ||
     (uVar4 = 1, *(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10))) {
    uVar4 = 0;
  }
  return uVar4;
}

