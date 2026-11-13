typedef unsigned char bool;


bool fn_82827948(int param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 8);
  do {
    cVar1 = *pcVar3;
    cVar2 = *param_2;
    if (cVar1 == '\0') break;
    pcVar3 = pcVar3 + 1;
    param_2 = param_2 + 1;
  } while (cVar1 == cVar2);
  return cVar1 == cVar2;
}

