#define true 1


unsigned __int64 fn_82CFBD10(int param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  
  iVar1 = 0;
  param_1 = param_1 - (int)param_2;
  while( true ) {
    cVar4 = param_2[param_1];
    if (((cVar4 == '\0') && (*param_2 == '\0')) || (param_3 <= iVar1)) {
      return 0;
    }
    cVar2 = cVar4;
    if (('@' < cVar4) && (cVar4 < '[')) {
      cVar2 = cVar4 + ' ';
    }
    cVar5 = *param_2;
    cVar3 = cVar5;
    if (('@' < cVar5) && (cVar5 < '[')) {
      cVar3 = cVar5 + ' ';
    }
    if (cVar2 < cVar3) break;
    if (('@' < cVar4) && (cVar4 < '[')) {
      cVar4 = cVar4 + ' ';
    }
    if (('@' < cVar5) && (cVar5 < '[')) {
      cVar5 = cVar5 + ' ';
    }
    if (cVar5 < cVar4) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    param_2 = param_2 + 1;
  }
  return 0xffffffffffffffff;
}

