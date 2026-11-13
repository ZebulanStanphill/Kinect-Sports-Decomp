void fn_82CFC0F8(unsigned char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = pcVar3 + (-1 - (int)param_3);
  if ((int)pcVar3 <= (int)(pcVar2 + (-1 - (int)param_2))) {
    iVar4 = 0;
    if (0 < (int)pcVar3) {
      do {
        if (param_2[(int)(pcVar2 + (-1 - (int)param_2) + (iVar4 - (int)pcVar3))] != param_3[iVar4])
        goto code_r0x82cfc140;
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)pcVar3);
    }
    *param_1 = 1;
    return;
  }
code_r0x82cfc140:
  *param_1 = 0;
  return;
}

