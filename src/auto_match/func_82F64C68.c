char * strstr(char *param_1,char *param_2)

{
  int iVar1;
  __int64 lVar2;
  char *pcVar3;
  
  if (*param_2 == '\0') {
    return param_1;
  }
  lVar2 = (__int64)*param_1;
  if (lVar2 != 0) {
    iVar1 = (int)param_1 - (int)param_2;
    do {
      pcVar3 = param_2;
      if ((int)lVar2 != 0) {
        do {
          if ((*pcVar3 == '\0') || (pcVar3[iVar1] != *pcVar3)) break;
          pcVar3 = pcVar3 + 1;
        } while (pcVar3[iVar1] != '\0');
      }
      if (*pcVar3 == '\0') {
        return param_1;
      }
      param_1 = param_1 + 1;
      iVar1 = iVar1 + 1;
      lVar2 = (__int64)*param_1;
    } while (lVar2 != 0);
  }
  return (char *)0x0;
}

