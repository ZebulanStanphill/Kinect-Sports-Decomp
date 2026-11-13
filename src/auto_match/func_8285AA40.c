void fn_8285AA40(int param_1,unsigned __int64 param_2,char *param_3,int *param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = 0;
  if (*(unsigned short *)(param_1 + 0x44) != 0) {
    iVar4 = 0;
    do {
      iVar3 = *(int *)(iVar4 + *(int *)(param_1 + 0x40));
      pcVar5 = *(char **)(iVar3 + 0x38);
      pcVar6 = param_3;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        *param_4 = iVar3;
        return;
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar7 < (int)(unsigned int)*(unsigned short *)(param_1 + 0x44));
  }
  *param_4 = 0;
  return;
}

