#define true 1


unsigned __int64 fn_82D043B8(unsigned int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  
  pcVar2 = (char *)*param_1;
  cVar4 = *pcVar2;
  while( true ) {
    if ((cVar4 == '\0') || (cVar4 = *param_2, cVar4 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar2;
    if ((cVar1 < 'A') || (cVar3 = cVar1 + ' ', 'Z' < cVar1)) {
      cVar3 = cVar1;
    }
    if (('@' < cVar4) && (cVar4 < '[')) {
      cVar4 = cVar4 + ' ';
    }
    if (cVar3 != cVar4) break;
    pcVar2 = pcVar2 + 1;
    cVar4 = *pcVar2;
    param_2 = param_2 + 1;
  }
  return 0;
}

