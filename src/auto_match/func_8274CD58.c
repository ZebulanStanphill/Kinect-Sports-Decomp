extern int fn_826C1BA0();


unsigned __int64 fn_8274CD58(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  char cVar1;
  char cVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = "width";
  pcVar4 = *(char **)*param_3;
  pcVar6 = pcVar4;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 != cVar2) {
    pcVar6 = "height";
    do {
      cVar1 = *pcVar4;
      cVar2 = *pcVar6;
      if (cVar1 == '\0') break;
      pcVar4 = pcVar4 + 1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      uVar3 = fn_826C1BA0();
      return uVar3;
    }
  }
  return 1;
}

