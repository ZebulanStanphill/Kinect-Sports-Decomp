extern int fn_82F63C78();
extern int fn_82F664B0();
extern int malloc();


__int64 fn_82F6E2F0(char *param_1)

{
  char cVar1;
  __int64 lVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = param_1;
  if (param_1 != (char *)0x0) {
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar4 - (int)param_1;
    lVar2 = malloc(iVar3);
    if (lVar2 != 0) {
      iVar3 = fn_82F664B0(lVar2,iVar3,param_1);
      if (iVar3 == 0) {
        return lVar2;
      }
                    /* WARNING: Subroutine does not return */
      fn_82F63C78(0,0,0,0,0);
    }
  }
  return 0;
}

