unsigned __int64 fn_8284F158(int *param_1,char *param_2,char *param_3,int param_4,int *param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = 0;
  iVar3 = *(int *)(*param_1 + 8);
  if (0 < iVar3) {
    iVar9 = 0;
    do {
      iVar4 = *(int *)(*param_1 + 0xc);
      iVar5 = iVar4 + iVar9;
      pcVar7 = *(char **)(iVar4 + iVar9);
      pcVar6 = param_2;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        pcVar7 = *(char **)(iVar5 + 8);
        pcVar6 = param_3;
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if ((cVar1 == cVar2) && (*(int *)(iVar5 + 0xc) == param_4)) {
          *param_5 = iVar8 * 0xf0 + param_1[2];
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
      iVar9 = iVar9 + 100;
    } while (iVar8 < iVar3);
  }
  return 0;
}

