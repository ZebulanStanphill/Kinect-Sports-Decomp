void fn_8265B658(unsigned int *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  
  pcVar1 = (char *)*param_1;
  iVar2 = 0;
  cVar3 = *pcVar1;
  if (cVar3 != '\0') {
    pcVar4 = pcVar1;
    do {
      if (cVar3 == '_') break;
      pcVar4[param_2 - (int)pcVar1] = cVar3;
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 1;
      cVar3 = *pcVar4;
    } while (cVar3 != '\0');
  }
  *(unsigned char *)(iVar2 + param_2) = 0;
  *param_1 = pcVar1 + iVar2 + 1;
  return;
}

