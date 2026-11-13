extern int fn_828177C8();


__int64 fn_8285C228(int param_1)

{
  char cVar1;
  char cVar2;
  __int64 lVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar6 = (char *)(param_1 + 0xb);
  pcVar5 = "04.05.05.0032";
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    lVar3 = (__int64)*(int *)(param_1 + 0x28) * (__int64)*(int *)(param_1 + 0x24) +
            (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
  }
  else {
    lVar3 = fn_828177C8(*(unsigned int *)(param_1 + 0x20),0xffffffff8201f854);
    iVar4 = fn_828177C8(*(unsigned int *)(param_1 + 0x24),0xffffffff8201f85c);
    lVar3 = (__int64)*(int *)(param_1 + 0x28) * (__int64)(int)(iVar4 + 3U & 0xfffffffc) +
            (lVar3 + 3U & 0xfffffffc);
  }
  return lVar3;
}

