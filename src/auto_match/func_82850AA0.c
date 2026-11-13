void fn_82850AA0(unsigned int *param_1,char *param_2,unsigned int *param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    iVar4 = 0;
    do {
      pcVar6 = *(char **)(iVar4 + param_1[1]);
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        *param_3 = uVar3;
        return;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x50;
    } while (uVar3 < *param_1);
  }
  *param_3 = 0xffffffff;
  return;
}

