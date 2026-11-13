typedef unsigned char bool;


bool fn_82F64570(int param_1,int param_2)

{
  __int64 lVar1;
  unsigned char *pbVar2;
  unsigned char *pbVar3;
  
  pbVar2 = (unsigned char *)(param_1 + 9);
  pbVar3 = (unsigned char *)(param_2 + 9);
  do {
    lVar1 = (unsigned __int64)*pbVar3 - (unsigned __int64)*pbVar2;
    if (*pbVar3 == 0) break;
    pbVar3 = pbVar3 + 1;
    pbVar2 = pbVar2 + 1;
  } while ((int)lVar1 == 0);
  return lVar1 != 0;
}

