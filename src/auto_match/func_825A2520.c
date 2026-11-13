void fn_825A2520(char *param_1,unsigned int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  unsigned int uVar5;
  char acStack_11 [17];
  
  pcVar4 = param_1;
  if (param_3 == 0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)param_1;
    if (uVar5 < param_2) {
      param_1[uVar5 - 1] = '0';
      param_1[uVar5] = '\0';
      return;
    }
    return;
  }
  acStack_11[1] = 0;
  if (param_3 < 0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)param_1;
    if (uVar5 < param_2) {
      param_1[uVar5 - 1] = '-';
      param_1[uVar5] = '\0';
    }
    param_3 = -param_3;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    do {
      pcVar4 = acStack_11 + 1;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar5 = (int)pcVar4 - (int)(acStack_11 + 1);
      if (uVar5 < 0x10) {
        acStack_11[uVar5 + 1] = '\0';
        acStack_11[uVar5] = (char)param_3 + (char)(param_3 / 10) * -10 + '0';
      }
      param_3 = param_3 / 10;
      iVar2 = iVar2 + 1;
    } while (param_3 != 0);
    pcVar4 = param_1;
    iVar3 = iVar2;
    if (0 < iVar2) {
      do {
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)param_1;
        if (uVar5 < param_2) {
          param_1[uVar5] = '\0';
          param_1[uVar5 - 1] = acStack_11[iVar3];
        }
        iVar2 = iVar2 + -1;
        pcVar4 = param_1;
        iVar3 = iVar3 + -1;
      } while (iVar2 != 0);
      return;
    }
    return;
  }
  return;
}

