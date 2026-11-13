unsigned __int64 fn_82722540(unsigned int *param_1)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar3 = "compositionSegment";
  pcVar5 = *(char **)*param_1;
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    return 0;
  }
  pcVar3 = "clauseSegment";
  pcVar4 = pcVar5;
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
  pcVar3 = "convertedSegment";
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    return 2;
  }
  pcVar3 = "phraseLengthAdj";
  pcVar4 = pcVar5;
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    return 3;
  }
  pcVar4 = "lowConfSegment";
  do {
    cVar1 = *pcVar5;
    cVar2 = *pcVar4;
    if (cVar1 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 != cVar2) {
    return 5;
  }
  return 4;
}

