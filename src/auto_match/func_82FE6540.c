void fn_82FE6540(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  iVar3 = 0;
  pcVar2 = pcVar2 + (-1 - (int)param_1);
  if (pcVar2 != (char *)0x0) {
    do {
      cVar1 = param_1[iVar3];
      if (('@' < cVar1) && (cVar1 < '[')) {
        param_1[iVar3] = cVar1 + ' ';
      }
      iVar3 = iVar3 + 1;
      pcVar2 = pcVar2 + -1;
    } while (pcVar2 != (char *)0x0);
    return;
  }
  return;
}

