void fn_82F28800(int param_1,int param_2,int param_3)

{
  unsigned short uVar2;
  unsigned char *puVar1;
  short *psVar3;
  unsigned __int64 uVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  psVar3 = (short *)(param_1 + 4);
  param_2 = param_2 + 2;
  lVar6 = 8;
  do {
    iVar5 = 0;
    lVar7 = 2;
    do {
      uVar2 = psVar3[-2] + (unsigned short)*(unsigned char *)(param_2 + iVar5 + -2);
      uVar4 = (unsigned __int64)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      *(char *)(param_2 + iVar5 + -2) = (char)uVar4;
      uVar2 = psVar3[-1] + (unsigned short)*(unsigned char *)(param_2 + -1 + iVar5);
      uVar4 = (unsigned __int64)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      *(char *)(param_2 + -1 + iVar5) = (char)uVar4;
      uVar2 = (unsigned short)*(unsigned char *)(param_2 + iVar5) + *psVar3;
      uVar4 = (unsigned __int64)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      puVar1 = (unsigned char *)(param_2 + 1 + iVar5);
      *(char *)(param_2 + iVar5) = (char)uVar4;
      uVar2 = psVar3[1] + (unsigned short)*(unsigned char *)(param_2 + 1 + iVar5);
      uVar4 = (unsigned __int64)(short)uVar2;
      if (0xff < uVar2) {
        uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
      }
      iVar5 = iVar5 + 4;
      *puVar1 = (char)uVar4;
      psVar3 = psVar3 + 4;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    lVar6 = lVar6 + -1;
    param_2 = param_2 + param_3;
  } while (lVar6 != 0);
  return;
}

