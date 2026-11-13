short * fn_82F66F30(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  
  if (*param_2 == 0) {
    return param_1;
  }
  sVar1 = *param_1;
  if (sVar1 != 0) {
    iVar3 = (int)param_1 - (int)param_2;
    psVar2 = param_2;
    do {
      while (((sVar1 != 0 && (*psVar2 != 0)) && (*(short *)(iVar3 + (int)psVar2) == *psVar2))) {
        sVar1 = *(short *)(iVar3 + (int)(psVar2 + 1));
        psVar2 = psVar2 + 1;
      }
      if (*psVar2 == 0) {
        return param_1;
      }
      param_1 = param_1 + 1;
      sVar1 = *param_1;
      iVar3 = iVar3 + 2;
      psVar2 = param_2;
    } while (sVar1 != 0);
  }
  return (short *)0x0;
}

