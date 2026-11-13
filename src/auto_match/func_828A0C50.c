typedef unsigned char bool;


bool fn_828A0C50(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = param_1 + 8;
  do {
    cVar1 = *param_1;
    cVar2 = *param_2;
    if (cVar1 != cVar2) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_1 != pcVar3);
  return cVar1 != cVar2;
}

