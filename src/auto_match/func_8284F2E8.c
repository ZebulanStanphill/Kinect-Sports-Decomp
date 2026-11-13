void fn_8284F2E8(int *param_1,char *param_2,int param_3,int *param_4)

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
  
  iVar3 = *param_1;
  iVar4 = 0;
  iVar8 = 0;
  if (0 < *(int *)(iVar3 + 8)) {
    iVar9 = 0;
    iVar5 = 0;
    do {
      pcVar7 = *(char **)(*(int *)(iVar3 + 0xc) + iVar5 + 4);
      pcVar6 = param_2;
      do {
        cVar1 = *pcVar7;
        cVar2 = *pcVar6;
        if (cVar1 == '\0') break;
        pcVar7 = pcVar7 + 1;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        if (iVar4 < param_3) {
          *param_4 = param_1[2] + iVar9;
        }
        iVar4 = iVar4 + 1;
        param_4 = param_4 + 1;
      }
      iVar3 = *param_1;
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 + 100;
      iVar9 = iVar9 + 0xf0;
    } while (iVar8 < *(int *)(iVar3 + 8));
  }
  return;
}

