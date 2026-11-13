unsigned __int64 fn_82766D68(int param_1,int param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar6;
  unsigned __int64 uVar5;
  
  if (param_1 != *param_3) {
    return 0;
  }
  iVar3 = param_3[1];
  pcVar4 = (char *)((*(unsigned int *)(iVar3 + 0xc) & 0xfffffffc) + 8);
  pcVar6 = (char *)((*(unsigned int *)(param_2 + 0xc) & 0xfffffffc) + 8);
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (((cVar1 != cVar2) || (*(int *)(param_2 + 8) != *(int *)(iVar3 + 8))) ||
     (uVar5 = 1, *(int *)(param_2 + 0x10) != *(int *)(iVar3 + 0x10))) {
    uVar5 = 0;
  }
  return uVar5;
}

