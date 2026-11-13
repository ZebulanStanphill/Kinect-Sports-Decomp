void fn_82817BE8(int *param_1,int param_2,char *param_3,unsigned __int64 param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_3 == (char *)0x0) {
    return;
  }
  if ((int)param_4 == 0) {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == 0) {
    iVar2 = param_1[1];
  }
  else {
    if (param_2 != 1) {
      *param_3 = '\0';
      return;
    }
    iVar2 = *param_1;
  }
  if ((int)param_4 == 0) {
    return;
  }
  pcVar3 = param_3;
  do {
    pcVar4 = pcVar3;
    cVar1 = pcVar4[iVar2 - (int)param_3];
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    param_4 = param_4 - 1;
    pcVar3 = pcVar4 + 1;
  } while (param_4 != 0);
  if ((param_4 & 0xffffffff) == 0) {
    return;
  }
  param_4 = param_4 - 1;
  if (param_4 != 0) {
    if ((param_4 & 0xffffffff) != 0) {
      do {
        pcVar4 = pcVar4 + 1;
        *pcVar4 = '\0';
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      return;
    }
    return;
  }
  return;
}

