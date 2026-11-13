void fn_82A99F88(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar2 = param_2;
  if (*(int *)(param_1 + 0xc) < 0) {
    return;
  }
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((unsigned int)((int)pcVar2 - (int)param_2) <=
      (unsigned int)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x18))) {
    pcVar2 = param_2 + -1;
    pcVar3 = (char *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x18) + -1);
    do {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar3 = pcVar3 + 1;
      *pcVar3 = cVar1;
      pcVar4 = param_2;
    } while (cVar1 != '\0');
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    *(char **)(param_1 + 0x18) = pcVar4 + *(int *)(param_1 + 0x18) + (-1 - (int)param_2);
    return;
  }
  *(unsigned int *)(param_1 + 0xc) = 0x80004005;
  return;
}

