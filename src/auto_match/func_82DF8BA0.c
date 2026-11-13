void fn_82DF8BA0(unsigned char *param_1)

{
  unsigned char bVar1;
  int iVar2;
  unsigned char *pbVar4;
  __int64 lVar3;
  
  iVar2 = 0;
  bVar1 = 0;
  if (param_1[2] != 0) {
    pbVar4 = param_1 + -1;
    do {
      iVar2 = iVar2 + 1;
      bVar1 = pbVar4[7];
      pbVar4[7] = pbVar4[8];
      pbVar4 = pbVar4 + 8;
      *pbVar4 = bVar1;
      bVar1 = param_1[2];
    } while (iVar2 < (int)(unsigned int)bVar1);
  }
  lVar3 = (unsigned __int64)param_1[1] + (unsigned __int64)*param_1;
  if (lVar3 == 0) {
    return;
  }
  param_1 = param_1 + (unsigned int)bVar1 * 8 + 3;
  do {
    bVar1 = param_1[1];
    param_1[1] = param_1[2];
    param_1 = param_1 + 2;
    *param_1 = bVar1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

