void fn_828509F0(unsigned int *param_1,char *param_2,int *param_3)

{
  char cVar1;
  char cVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  
  uVar3 = 0;
  if (*param_1 != 0) {
    iVar6 = 0;
    do {
      pcVar5 = *(char **)(iVar6 + param_1[1]);
      pcVar4 = param_2;
      do {
        cVar1 = *pcVar5;
        cVar2 = *pcVar4;
        if (cVar1 == '\0') break;
        pcVar5 = pcVar5 + 1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        iVar6 = uVar3 * 0x50 + param_1[1];
        goto LAB_82850a54;
      }
      uVar3 = uVar3 + 1;
      iVar6 = iVar6 + 0x50;
    } while (uVar3 < *param_1);
  }
  iVar6 = 0;
LAB_82850a54:
  *param_3 = iVar6;
  return;
}

