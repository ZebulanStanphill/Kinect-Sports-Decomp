extern int fn_82936290();


int fn_82937330(char *param_1,char *param_2,unsigned __int64 param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = param_2;
  for (iVar5 = *param_4; pcVar6 = param_1, pcVar4 = pcVar7, iVar5 != 0;
      iVar5 = (iVar5 - (int)(pcVar6 + iVar3)) + -1) {
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar4;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2);
    pcVar6 = pcVar7;
    if (cVar1 == cVar2) goto LAB_82937410;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar3 = -1 - (int)pcVar7;
    pcVar7 = pcVar7 + (int)(pcVar6 + iVar3 + 1);
  }
  if ((param_3 & 0xffffffff) < 0x80000000) {
    fn_82936290(pcVar7,param_3,param_1);
  }
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  *param_4 = (int)(pcVar6 + (*param_4 - (int)param_1));
LAB_82937410:
  return (int)pcVar7 - (int)param_2;
}

