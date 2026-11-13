unsigned __int64 __TypeMatch(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = param_1[1];
  if (uVar3 == 0) {
    return 1;
  }
  pcVar5 = (char *)(uVar3 + 8);
  if (*(char *)(uVar3 + 8) == '\0') {
    return 1;
  }
  if (uVar3 != param_2[1]) {
    pcVar4 = (char *)(param_2[1] + 8);
    do {
      cVar1 = *pcVar5;
      cVar2 = *pcVar4;
      if (cVar1 == '\0') break;
      pcVar5 = pcVar5 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      return 0;
    }
  }
  if ((((*param_2 & 2) == 0) || ((*param_1 & 8) != 0)) &&
     (((*param_3 & 1) == 0 || ((*param_1 & 1) != 0)))) {
    if ((*param_3 & 2) == 0) {
      return 1;
    }
    if ((*param_1 & 2) != 0) {
      return 1;
    }
  }
  return 0;
}

