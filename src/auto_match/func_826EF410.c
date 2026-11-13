void fn_826EF410(int param_1,int param_2,unsigned __int64 param_3,char param_4,unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  uVar3 = (unsigned int)param_5;
  if ((param_4 != '\0') && (uVar3 == 10)) {
    iVar5 = 3;
    if ((*(unsigned char *)(param_1 + 5) & 0xfe) != 0) goto code_r0x826ef434;
  }
  iVar5 = 1000;
code_r0x826ef434:
  if ((*(unsigned char *)(param_1 + 6) & 0x80) == 0) {
    pcVar4 = "0123456789abcdef";
  }
  else {
    pcVar4 = "0123456789ABCDEF";
  }
  if (uVar3 < 2) {
    return;
  }
  if (0x10 < uVar3) {
    return;
  }
  do {
    if (param_2 == *(int *)(param_1 + 8)) {
      return;
    }
    uVar1 = param_3 & 0xffffffff;
    trapWord(6,param_5,0);
    iVar2 = (int)param_3;
    param_3 = (param_3 & 0xffffffff) / (param_5 & 0xffffffff);
    trapWord(6,param_5,0);
    if (iVar5 == 0) {
      pcVar6 = (char *)(*(int *)(param_1 + 8) + -1);
      iVar5 = 3;
      *(char **)(param_1 + 8) = pcVar6;
      *pcVar6 = *(char *)(param_1 + 5) >> 1;
    }
    iVar5 = iVar5 + -1;
    pcVar6 = (char *)(*(int *)(param_1 + 8) + -1);
    *(char **)(param_1 + 8) = pcVar6;
    *pcVar6 = pcVar4[iVar2 - (int)(uVar1 / (param_5 & 0xffffffff)) * uVar3 & 0xff];
  } while (param_3 != 0);
  return;
}

