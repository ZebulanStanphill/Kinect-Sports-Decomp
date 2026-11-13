extern int fn_8267BF50();
extern int fn_8268B368();
extern int memcpy();


unsigned int * fn_8268C248(unsigned int *param_1,char *param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  char *pcVar4;
  
  pcVar4 = param_2;
  if (param_2 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (-1 - (int)param_2);
  }
  uVar2 = fn_8267BF50(param_1);
  lVar3 = fn_8268B368(param_1,uVar2,pcVar4,0);
  memcpy(lVar3 + 8,param_2,pcVar4);
  *param_1 = (unsigned int)lVar3 | 1;
  return param_1;
}

