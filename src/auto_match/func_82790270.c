extern int fn_826BCF78();


int fn_82790270(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  unsigned short *puVar5;
  int iVar6;
  char *pcVar7;
  
  pcVar7 = param_2;
  if (param_3 == 0) {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    param_3 = -(int)(pcVar7 + (-1 - (int)param_2));
  }
  else {
    puVar5 = (unsigned short *)(param_1 + -2);
    iVar6 = param_3;
    do {
      puVar5 = puVar5 + 1;
      iVar2 = fn_826BCF78(*puVar5);
      iVar3 = fn_826BCF78(*pcVar7);
      iVar6 = iVar6 + -1;
      pcVar7 = pcVar7 + 1;
      if ((iVar6 == 0) || (iVar2 == 0)) break;
      if (iVar2 != iVar3) goto LAB_82790320;
    } while (*pcVar7 != '\0');
    if ((iVar2 == iVar3) && ((pcVar4 = param_2, iVar6 != 0 || (*pcVar7 != '\0')))) {
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      param_3 = param_3 - (int)(pcVar4 + (-1 - (int)param_2));
    }
    else {
LAB_82790320:
      param_3 = iVar2 - iVar3;
    }
  }
  return param_3;
}

