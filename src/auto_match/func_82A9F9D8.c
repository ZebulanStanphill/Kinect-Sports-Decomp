unsigned __int64 fn_82A9F9D8(int param_1,char *param_2,unsigned int *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  if (param_2 != (char *)0x0) {
    pcVar3 = "SSMUseTranslator";
    do {
      cVar1 = *param_2;
      cVar2 = *pcVar3;
      if (cVar1 == '\0') break;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      *param_3 = *(unsigned int *)(param_1 + 8);
      return 1;
    }
  }
  return 0;
}

