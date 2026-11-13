extern int free();
extern int malloc();
extern int memcpy();


unsigned int * fn_82F62A28(unsigned int *param_1,char *param_2)

{
  char cVar1;
  int uVar2;
  char *pcVar3;
  
  if ((char *)*param_1 != param_2) {
    if ((char *)*param_1 != (char *)0x0) {
      free((char *)*param_1);
    }
    *param_1 = 0;
    if (param_2 != (char *)0x0) {
      cVar1 = *param_2;
      pcVar3 = param_2;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        cVar1 = *pcVar3;
      }
      uVar2 = malloc(pcVar3 + (1 - (int)param_2));
      *param_1 = uVar2;
      if ((uVar2 & 0xffffffff) != 0) {
        memcpy(uVar2,param_2,pcVar3 + (1 - (int)param_2));
      }
    }
  }
  return param_1;
}

