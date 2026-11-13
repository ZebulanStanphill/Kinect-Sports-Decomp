char * fn_826BCA20(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned __int64 uVar1;
  char cVar2;
  unsigned int uVar3;
  char *pcVar4;
  char *pcVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  
  uVar6 = param_3 - 1;
  uVar7 = (unsigned __int64)((int)param_1 >> 0x1f);
  uVar3 = 0;
  pcVar4 = (char *)(uVar6 + param_2);
  uVar7 = (param_1 ^ uVar7) - uVar7;
  *(unsigned char *)(uVar6 + param_2) = 0;
  if (uVar6 != 0) {
    do {
      pcVar5 = pcVar4;
      uVar1 = uVar7 & 0xffffffff;
      cVar2 = (char)uVar7;
      uVar7 = (uVar7 & 0xffffffff) / 10;
      pcVar4 = pcVar5 + -1;
      *pcVar4 = cVar2 + (char)(uVar1 / 10) * -10 + '0';
      if ((int)uVar7 == 0) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar6);
    if ((uVar3 < uVar6) && ((int)param_1 < 0)) {
      pcVar4 = pcVar5 + -2;
      *pcVar4 = '-';
    }
  }
  return pcVar4;
}

