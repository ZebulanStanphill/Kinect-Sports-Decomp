extern int fn_82F63BA0();
extern int fn_82F68240();


unsigned int fn_82F668D8(char *param_1,int param_2,char *param_3,unsigned __int64 param_4)

{
  char cVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  unsigned int uVar6;
  
  if ((param_4 & 0xffffffff) == 0) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) {
        return 0;
      }
      goto LAB_82f66928;
    }
  }
  else if (param_1 == (char *)0x0) goto LAB_82f66928;
  if (param_2 == 0) {
LAB_82f66928:
    puVar2 = (unsigned int *)fn_82F68240();
    *puVar2 = 0x16;
    fn_82F63BA0();
    return 0x16;
  }
  pcVar5 = param_1;
  iVar3 = param_2;
  if (((param_4 & 0xffffffff) != 0) && (param_3 == (char *)0x0)) {
    *param_1 = '\0';
    goto LAB_82f66928;
  }
  do {
    if (*pcVar5 == '\0') break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar5 + 1;
  } while (iVar3 != 0);
  if (iVar3 == 0) {
    *param_1 = '\0';
    puVar2 = (unsigned int *)fn_82F68240();
    uVar6 = 0x16;
    goto LAB_82f66994;
  }
  if ((int)param_4 == -1) {
    iVar4 = (int)pcVar5 - (int)param_3;
    do {
      cVar1 = *param_3;
      param_3[iVar4] = cVar1;
      param_3 = param_3 + 1;
      if (cVar1 == '\0') break;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  else {
    if ((param_4 & 0xffffffff) != 0) {
      iVar4 = (int)param_3 - (int)pcVar5;
      do {
        cVar1 = pcVar5[iVar4];
        *pcVar5 = cVar1;
        pcVar5 = pcVar5 + 1;
        if ((cVar1 == '\0') || (iVar3 = iVar3 + -1, iVar3 == 0)) break;
        param_4 = param_4 - 1;
      } while (param_4 != 0);
      if ((param_4 & 0xffffffff) != 0) goto LAB_82f66a10;
    }
    *pcVar5 = '\0';
  }
LAB_82f66a10:
  if (iVar3 != 0) {
    return 0;
  }
  if ((int)param_4 == -1) {
    param_1[param_2 + -1] = '\0';
    return 0x50;
  }
  *param_1 = '\0';
  puVar2 = (unsigned int *)fn_82F68240();
  uVar6 = 0x22;
LAB_82f66994:
  *puVar2 = uVar6;
  fn_82F63BA0();
  return uVar6;
}

