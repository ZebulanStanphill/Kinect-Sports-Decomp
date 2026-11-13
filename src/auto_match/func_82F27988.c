#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


void fn_82F27988(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  short *psVar7;
  unsigned char *pbVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  
  psVar7 = (short *)(param_3 + 4);
  pbVar8 = (unsigned char *)(param_2 + 2);
  lVar10 = 8;
  do {
    uVar6 = (unsigned __int64)pbVar8[-2] + (__int64)psVar7[-2];
    uVar9 = (unsigned __int64)pbVar8[-1] + (__int64)psVar7[-1];
    uVar3 = (__int64)*psVar7 + (unsigned __int64)*pbVar8;
    uVar4 = (unsigned __int64)pbVar8[1] + (__int64)psVar7[1];
    if (0xff < (uVar6 & 0xffffffff)) {
      uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar9 & 0xffffffff)) {
      uVar9 = ((uVar9 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar4 & 0xffffffff)) {
      uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    uVar1 = (uVar4 & 0xffff) << 0x10;
    uVar2 = (uVar3 & 0xffff) << 0x10 | uVar6;
    if (((uVar1 | uVar9 | uVar2) & 0xff00ff00) == 0) {
      uVar5 = (unsigned int)((uVar1 | uVar9 & 0xffffffff) << 8) | (unsigned int)uVar2;
    }
    else {
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)((int)uVar6 + param_5),
                                         *(unsigned char *)((int)uVar9 + param_5)),
                                *(unsigned char *)((int)uVar3 + param_5)),
                       *(unsigned char *)((int)uVar4 + param_5));
    }
    *param_1 = uVar5;
    uVar6 = (unsigned __int64)pbVar8[2] + (__int64)psVar7[2];
    uVar9 = (unsigned __int64)pbVar8[3] + (__int64)psVar7[3];
    uVar3 = (unsigned __int64)pbVar8[4] + (__int64)psVar7[4];
    uVar4 = (unsigned __int64)pbVar8[5] + (__int64)psVar7[5];
    if (0xff < (uVar6 & 0xffffffff)) {
      uVar6 = ((uVar6 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar9 & 0xffffffff)) {
      uVar9 = ((uVar9 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar3 & 0xffffffff)) {
      uVar3 = ((uVar3 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    if (0xff < (uVar4 & 0xffffffff)) {
      uVar4 = ((uVar4 & 0xffffffff) >> 0x1f) - 1 & 0xff;
    }
    uVar1 = (uVar4 & 0xffff) << 0x10;
    uVar2 = (uVar3 & 0xffff) << 0x10 | uVar6;
    if (((uVar1 | uVar9 | uVar2) & 0xff00ff00) == 0) {
      uVar5 = (unsigned int)((uVar1 | uVar9 & 0xffffffff) << 8) | (unsigned int)uVar2;
    }
    else {
      uVar5 = CONCAT31(CONCAT21(CONCAT11(*(unsigned char *)((int)uVar6 + param_5),
                                         *(unsigned char *)((int)uVar9 + param_5)),
                                *(unsigned char *)((int)uVar3 + param_5)),
                       *(unsigned char *)((int)uVar4 + param_5));
    }
    param_1[1] = uVar5;
    pbVar8 = pbVar8 + param_4;
    param_1 = (unsigned int *)((int)param_1 + param_4);
    psVar7 = psVar7 + 8;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  return;
}

