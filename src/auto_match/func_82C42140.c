#define true 1
extern unsigned int lbl_8329F180;


void fn_82C42140(void)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char *pbVar3;
  unsigned __int64 uVar4;
  int iVar5;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    uVar4 = 0x80;
    iVar5 = 0;
    do {
      if (((unsigned int)uVar4 & uVar2) != 0) break;
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 >> 1;
    } while (iVar5 < 8);
    (&lbl_8329F180)[iVar1] = (char)iVar5;
    pbVar3 = &lbl_8329F180 + iVar1;
    uVar4 = 0x80;
    iVar5 = 0;
    do {
      if (((unsigned int)uVar4 & uVar2 + 1) != 0) break;
      iVar5 = iVar5 + 1;
      uVar4 = uVar4 >> 1;
    } while (iVar5 < 8);
    uVar2 = uVar2 + 2;
    iVar1 = iVar1 + 1;
    *pbVar3 = (char)iVar5 << 4 | *pbVar3;
    if (0xff < (int)uVar2) {
      return;
    }
  } while( true );
}

