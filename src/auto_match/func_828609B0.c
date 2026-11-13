extern int fn_82860998();
extern int fn_828609A0();


void fn_828609B0(char *param_1,unsigned int *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  int (**pcVar5)();
  
  pcVar3 = "SHADERCONSTANT_OFFSET";
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    pcVar5 = fn_82860998;
  }
  else {
    pcVar4 = "D3DRS_CULLMODE";
    do {
      cVar1 = *param_1;
      cVar2 = *pcVar4;
      if (cVar1 == '\0') break;
      param_1 = param_1 + 1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 != cVar2) {
      *param_2 = 0;
      return;
    }
    pcVar5 = fn_828609A0;
  }
  *param_2 = pcVar5;
  return;
}

