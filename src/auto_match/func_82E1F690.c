extern int fn_8265C9E0();
extern int fn_82F66368();


int fn_82E1F690(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  iVar2 = 0;
  pcVar3 = param_1;
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar3 - (int)param_1;
    iVar2 = fn_8265C9E0(iVar4);
    if (iVar2 != 0) {
      fn_82F66368(iVar2,iVar4,param_1,iVar4 + -1);
      *(unsigned char *)(iVar2 + iVar4 + -1) = 0;
    }
  }
  return iVar2;
}

