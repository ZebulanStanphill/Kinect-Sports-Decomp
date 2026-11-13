void strncpy(char *param_1,int param_2,unsigned __int64 param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  pcVar2 = param_1;
  do {
    pcVar3 = pcVar2;
    cVar1 = pcVar3[param_2 - (int)param_1];
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    param_3 = param_3 - 1;
    pcVar2 = pcVar3 + 1;
  } while (param_3 != 0);
  if ((param_3 & 0xffffffff) == 0) {
    return;
  }
  param_3 = param_3 - 1;
  if (param_3 != 0) {
    if ((param_3 & 0xffffffff) != 0) {
      do {
        pcVar3 = pcVar3 + 1;
        *pcVar3 = '\0';
        param_3 = param_3 - 1;
      } while (param_3 != 0);
      return;
    }
    return;
  }
  return;
}

