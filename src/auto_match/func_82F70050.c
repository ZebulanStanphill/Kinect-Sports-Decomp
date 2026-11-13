void fn_82F70050(unsigned __int64 param_1,short *param_2,unsigned __int64 param_3,int param_4)

{
  short *psVar1;
  unsigned __int64 uVar2;
  short sVar3;
  short *psVar4;
  
  psVar1 = param_2;
  if (param_4 != 0) {
    psVar1 = param_2 + 1;
    *param_2 = 0x2d;
    param_1 = -param_1;
    param_2 = psVar1;
  }
  do {
    psVar4 = param_2;
    trapWord(6,param_3,0);
    uVar2 = param_1 - (__int64)(int)((param_1 & 0xffffffff) / (param_3 & 0xffffffff)) *
                      (__int64)(int)param_3;
    param_1 = (param_1 & 0xffffffff) / (param_3 & 0xffffffff);
    trapWord(6,param_3,0);
    sVar3 = (short)uVar2;
    if ((uVar2 & 0xffffffff) < 10) {
      sVar3 = sVar3 + 0x30;
    }
    else {
      sVar3 = sVar3 + 0x57;
    }
    *psVar4 = sVar3;
    param_2 = psVar4 + 1;
  } while (param_1 != 0);
  psVar4[1] = 0;
  do {
    sVar3 = *psVar4;
    *psVar4 = *psVar1;
    psVar4 = psVar4 + -1;
    *psVar1 = sVar3;
    psVar1 = psVar1 + 1;
  } while (psVar1 < psVar4);
  return;
}

