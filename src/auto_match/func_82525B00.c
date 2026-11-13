void fn_82525B00(double param_1,int param_2,char param_3,unsigned __int64 param_4,int param_5)

{
  float *pfVar1;
  char *pcVar2;
  int iVar3;
  __int64 lVar4;
  
  if (param_5 == -1) {
    iVar3 = 0;
    lVar4 = 2;
    pfVar1 = (float *)(param_2 + 0x319a8);
    do {
      if ((*(char *)(param_2 + 0x319a5 + iVar3) != param_3) && (param_3 != '\0')) {
        *pfVar1 = (float)param_1;
      }
      *(char *)(param_2 + 0x319a5 + iVar3) = param_3;
      iVar3 = iVar3 + 1;
      pfVar1 = pfVar1 + 1;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    return;
  }
  pcVar2 = (char *)(param_5 + param_2 + 0x319a5);
  if ((*pcVar2 != param_3) && (param_3 != '\0')) {
    *(float *)((param_5 + 0xc66a) * 4 + param_2) = (float)param_1;
  }
  *pcVar2 = param_3;
  return;
}

