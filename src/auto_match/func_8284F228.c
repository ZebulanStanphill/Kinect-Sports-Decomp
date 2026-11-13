unsigned __int64 fn_8284F228(int *param_1,char *param_2,char *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar3 = *(int *)(*param_1 + 8);
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      iVar4 = *(int *)(*param_1 + 0xc);
      pcVar6 = *(char **)(iVar4 + iVar8);
      pcVar5 = param_2;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        pcVar6 = *(char **)(iVar4 + iVar8 + 4);
        pcVar5 = param_3;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          *param_4 = iVar7 * 0xf0 + param_1[2];
          return 1;
        }
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 100;
    } while (iVar7 < iVar3);
  }
  return 0;
}

