#define true 1


unsigned __int64 fn_82880818(int param_1,unsigned char *param_2)

{
  unsigned char bVar1;
  unsigned char bVar2;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  
  pbVar3 = *(unsigned char **)(param_1 + 0x60);
  do {
    if (pbVar3 == *(unsigned char **)(param_1 + 100)) {
      return 0;
    }
    pbVar5 = pbVar3;
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar5;
      bVar2 = *pbVar4;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar5 = pbVar5 + 1;
      pbVar4 = pbVar4 + 1;
    } while (pbVar5 != pbVar3 + 8);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      return 1;
    }
    pbVar3 = pbVar3 + 8;
  } while( true );
}

