extern int tolower();


unsigned __int64 fn_82C10968(char *param_1,char *param_2)

{
  char cVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  
  cVar1 = *param_1;
  for (; (cVar1 != '\0' && (*param_2 != '\0')); param_2 = param_2 + 1) {
    iVar3 = tolower(*param_2);
    iVar4 = tolower(cVar1);
    if (iVar4 != iVar3) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  cVar1 = *param_1;
  if ((cVar1 == '\0') && (*param_2 == '\0')) {
    uVar2 = 0;
  }
  else {
    iVar3 = tolower(*param_2);
    iVar4 = tolower(cVar1);
    uVar2 = 0xffffffffffffffff;
    if (iVar3 <= iVar4) {
      uVar2 = 1;
    }
  }
  return uVar2;
}

