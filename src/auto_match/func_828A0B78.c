typedef unsigned char bool;


bool fn_828A0B78(unsigned char *param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  
  pbVar3 = param_1 + 8;
  do {
    bVar1 = *param_1;
    bVar2 = *param_2;
    if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  } while (param_1 != pbVar3);
  return (int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0;
}

