unsigned __int64 fn_82A20370(unsigned int *param_1,int *param_2,char param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = *param_2;
  pcVar2 = (char *)*param_1;
  do {
    if (iVar3 == 0) {
      return 0;
    }
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (cVar1 != param_3);
  *param_1 = pcVar2;
  *param_2 = iVar3;
  return 1;
}

