void fn_82876A38(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)param_1);
  if (pcVar3 == (char *)0x0) {
    return;
  }
  iVar2 = 0;
  do {
    cVar1 = param_1[iVar2];
    if (('@' < cVar1) && (cVar1 < '[')) {
      param_1[iVar2] = cVar1 + ' ';
    }
    iVar2 = iVar2 + 1;
    pcVar3 = pcVar3 + -1;
  } while (pcVar3 != (char *)0x0);
  return;
}

