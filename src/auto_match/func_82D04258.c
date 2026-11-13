int fn_82D04258(unsigned int *param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  
  pcVar1 = (char *)*param_1;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    do {
      iVar3 = 0;
      cVar4 = *param_2;
      while (cVar4 != '\0') {
        cVar5 = pcVar1[iVar3 + iVar2];
        if (('@' < cVar5) && (cVar5 < '[')) {
          cVar5 = cVar5 + ' ';
        }
        if (('@' < cVar4) && (cVar4 < '[')) {
          cVar4 = cVar4 + ' ';
        }
        if (cVar5 != cVar4) break;
        iVar3 = iVar3 + 1;
        cVar4 = param_2[iVar3];
      }
      if (param_2[iVar3] == '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
    } while (pcVar1[iVar2] != '\0');
  }
  return -1;
}

