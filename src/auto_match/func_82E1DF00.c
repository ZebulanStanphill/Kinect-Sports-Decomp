extern int fn_82E1D978();
extern int fn_82F65AC0();


unsigned __int64 fn_82E1DF00(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar3 = fn_82E1D978();
  if (iVar3 != 0) {
    iVar4 = fn_82F65AC0(0xffffffff82196f18,*(unsigned int *)(iVar3 + 4));
    if (iVar4 == 0) {
      param_3 = 1;
    }
    else {
      pcVar5 = *(char **)(iVar3 + 4);
      pcVar6 = "1";
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      param_3 = (unsigned __int64)(cVar1 == cVar2);
    }
  }
  return param_3;
}

