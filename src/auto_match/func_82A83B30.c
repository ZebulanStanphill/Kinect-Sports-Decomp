#define true 1
extern unsigned int lbl_8202E618;


__int64 fn_82A83B30(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  __int64 lVar3;
  unsigned char *pbVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  unsigned char *pbVar7;
  
  lVar3 = 0;
  uVar5 = 0x160;
  do {
    pbVar7 = (unsigned char *)(uVar5 + *param_1);
    pbVar4 = pbVar7 + 0x10;
    pbVar6 = (unsigned char *)&lbl_8202E618;
    do {
      bVar1 = *pbVar7;
      bVar2 = *pbVar6;
      if ((unsigned __int64)bVar1 - (unsigned __int64)bVar2 != 0) break;
      pbVar7 = pbVar7 + 1;
      pbVar6 = pbVar6 + 1;
    } while (pbVar7 != pbVar4);
    if ((int)((unsigned __int64)bVar1 - (unsigned __int64)bVar2) == 0) {
      return lVar3;
    }
    uVar5 = uVar5 + 0x20;
    lVar3 = lVar3 + 1;
    if (0x2ff < uVar5) {
      return 0xd;
    }
  } while( true );
}

