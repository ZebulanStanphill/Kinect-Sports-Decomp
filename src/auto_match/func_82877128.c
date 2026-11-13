extern int fn_82F66368();


unsigned __int64 fn_82877128(int param_1,char *param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  char **ppcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcStack_10;
  char *apcStack_c [3];
  
  pcStack_10 = (char *)(param_1 + 0x20c);
  do {
    cVar1 = *pcStack_10;
    pcStack_10 = pcStack_10 + 1;
  } while (cVar1 != '\0');
  pcStack_10 = pcStack_10 + (-1 - (param_1 + 0x20c));
  apcStack_c[0] = param_2;
  do {
    cVar1 = *apcStack_c[0];
    apcStack_c[0] = apcStack_c[0] + 1;
  } while (cVar1 != '\0');
  apcStack_c[0] = apcStack_c[0] + (-1 - (int)param_2);
  pcVar4 = (char *)(param_1 + 4);
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  ppcVar3 = &pcStack_10;
  if (pcStack_10 <= apcStack_c[0]) {
    ppcVar3 = apcStack_c;
  }
  pcVar5 = (char *)(param_1 + 0x310);
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar4 + (int)(pcVar5 + (int)(*ppcVar3 + ((-2 - (param_1 + 4)) - (param_1 + 0x310)))) <
      (char *)0x104) {
    fn_82F66368(param_1 + 0x108,0x104,param_2,0x103);
    uVar2 = 1;
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}

