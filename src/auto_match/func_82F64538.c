typedef unsigned char bool;


bool fn_82F64538(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar3 = (char *)(param_1 + 9);
  pcVar4 = (char *)(param_2 + 9);
  do {
    cVar1 = *pcVar4;
    cVar2 = *pcVar3;
    if (cVar1 == '\0') break;
    pcVar4 = pcVar4 + 1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 == cVar2);
  return cVar1 == cVar2;
}

