unsigned __int64 fn_827A53E8(int *param_1,int *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (*param_1 == *param_2) {
    pcVar3 = (char *)((param_2[1] & 0xfffffffcU) + 8);
    pcVar4 = (char *)((param_1[1] & 0xfffffffcU) + 8);
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

