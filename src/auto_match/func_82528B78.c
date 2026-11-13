extern int fn_8251F720();
extern int fn_82F66368();


unsigned int * fn_82528B78(unsigned int *param_1,unsigned __int64 param_2,char *param_3)

{
  char cVar1;
  unsigned int uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = fn_8251F720(param_2,0);
  *param_1 = uVar2;
  pcVar4 = param_3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  iVar3 = fn_82F66368(param_1 + 1,0x20,param_3,pcVar4 + (-1 - (int)param_3));
  (pcVar4 + (-1 - (int)param_3))[(int)(param_1 + 1)] = '\0';
  if (iVar3 != 0) {
    *(unsigned char *)((int)param_1 + 0x23) = 0;
  }
  return param_1;
}

