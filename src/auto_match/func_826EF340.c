void fn_826EF340(int param_1,int param_2,unsigned __int64 param_3,char param_4,unsigned int param_5)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  if ((param_4 != '\0') && (param_5 == 10)) {
    iVar5 = 3;
    if ((*(unsigned char *)(param_1 + 5) & 0xfe) != 0) goto code_r0x826ef364;
  }
  iVar5 = 1000;
code_r0x826ef364:
  if ((*(unsigned char *)(param_1 + 6) & 0x80) == 0) {
    pcVar4 = "0123456789abcdef";
  }
  else {
    pcVar4 = "0123456789ABCDEF";
  }
  if (param_5 < 2) {
    return;
  }
  if (0x10 < param_5) {
    return;
  }
  do {
    if (param_2 == *(int *)(param_1 + 8)) {
      return;
    }
    uVar1 = (unsigned __int64)param_5;
    uVar3 = param_3 / uVar1;
    trapDoubleWordImmediate(6,uVar1,0);
    iVar2 = (int)param_3;
    param_3 = param_3 / uVar1;
    trapDoubleWordImmediate(6,uVar1,0);
    if (iVar5 == 0) {
      pcVar6 = (char *)(*(int *)(param_1 + 8) + -1);
      iVar5 = 3;
      *(char **)(param_1 + 8) = pcVar6;
      *pcVar6 = *(char *)(param_1 + 5) >> 1;
    }
    iVar5 = iVar5 + -1;
    pcVar6 = (char *)(*(int *)(param_1 + 8) + -1);
    *(char **)(param_1 + 8) = pcVar6;
    *pcVar6 = pcVar4[iVar2 - (int)uVar3 * param_5 & 0xff];
  } while (param_3 != 0);
  return;
}

