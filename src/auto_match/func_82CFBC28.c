#define true 1


unsigned __int64 fn_82CFBC28(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  param_1 = param_1 - (int)param_2;
  while( true ) {
    cVar3 = param_2[param_1];
    if ((cVar3 == '\0') && (*param_2 == '\0')) {
      return 0;
    }
    cVar1 = cVar3;
    if (('@' < cVar3) && (cVar3 < '[')) {
      cVar1 = cVar3 + ' ';
    }
    cVar4 = *param_2;
    cVar2 = cVar4;
    if (('@' < cVar4) && (cVar4 < '[')) {
      cVar2 = cVar4 + ' ';
    }
    if (cVar1 < cVar2) break;
    if (('@' < cVar3) && (cVar3 < '[')) {
      cVar3 = cVar3 + ' ';
    }
    if (('@' < cVar4) && (cVar4 < '[')) {
      cVar4 = cVar4 + ' ';
    }
    if (cVar4 < cVar3) {
      return 1;
    }
    param_2 = param_2 + 1;
  }
  return 0xffffffffffffffff;
}

