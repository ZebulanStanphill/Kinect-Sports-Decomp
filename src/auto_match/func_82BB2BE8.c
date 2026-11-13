__int64 fn_82BB2BE8(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x14);
  pcVar3 = (char *)(param_2 + 0x14);
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 != cVar2) break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (pcVar4 != (char *)(param_1 + 0x104));
  return -(unsigned __int64)(cVar1 != cVar2);
}

