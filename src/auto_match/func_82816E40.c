typedef unsigned char bool;


bool fn_82816E40(char *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  
  cVar1 = param_1[4];
  pcVar4 = "CAFF";
  param_1[4] = '\0';
  pcVar5 = param_1;
  do {
    cVar2 = *pcVar5;
    cVar3 = *pcVar4;
    if (cVar2 == '\0') break;
    pcVar5 = pcVar5 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 == cVar3);
  param_1[4] = cVar1;
  return cVar2 == cVar3;
}

