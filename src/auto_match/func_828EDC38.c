typedef unsigned char bool;


bool fn_828EDC38(unsigned char *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  __int64 lVar4;
  unsigned char abStack_10 [8];
  unsigned char abStack_8 [8];
  
  pbVar3 = abStack_10;
  abStack_10[0] = 0;
  lVar4 = 7;
  do {
    pbVar3 = pbVar3 + 1;
    *pbVar3 = 0;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  pbVar3 = abStack_10;
  do {
    bVar1 = *pbVar3;
    bVar2 = *param_1;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    pbVar3 = pbVar3 + 1;
    param_1 = param_1 + 1;
  } while (pbVar3 != abStack_8);
  return (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
}

