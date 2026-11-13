void fn_82CDA000(int param_1,int param_2,int param_3)

{
  short *psVar1;
  unsigned __int64 uVar2;
  unsigned char *pbVar3;
  __int64 lVar4;
  
  pbVar3 = (unsigned char *)(param_2 + 2);
  psVar1 = (short *)(param_1 + 4);
  lVar4 = 8;
  do {
    uVar2 = (unsigned __int64)(short)((unsigned short)pbVar3[-2] + psVar1[-2]);
    if (0xff < (unsigned short)((unsigned short)pbVar3[-2] + psVar1[-2])) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    pbVar3[-2] = (unsigned char)uVar2;
    uVar2 = (unsigned __int64)(short)((unsigned short)pbVar3[-1] + psVar1[-1]);
    if (0xff < (unsigned short)((unsigned short)pbVar3[-1] + psVar1[-1])) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    pbVar3[-1] = (unsigned char)uVar2;
    uVar2 = (unsigned __int64)(short)((unsigned short)*pbVar3 + *psVar1);
    if (0xff < (unsigned short)((unsigned short)*pbVar3 + *psVar1)) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    *pbVar3 = (unsigned char)uVar2;
    uVar2 = (unsigned __int64)(short)((unsigned short)pbVar3[1] + psVar1[1]);
    if (0xff < (unsigned short)((unsigned short)pbVar3[1] + psVar1[1])) {
      uVar2 = ((uVar2 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    pbVar3[1] = (unsigned char)uVar2;
    psVar1 = psVar1 + 4;
    pbVar3 = pbVar3 + param_3;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

