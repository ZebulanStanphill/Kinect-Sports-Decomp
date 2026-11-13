extern int memcpy();


unsigned __int64 fn_82F1AA38(unsigned __int64 param_1,int param_2,short *param_3,int *param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  __int64 lVar4;
  short asStack_110 [128];
  
  asStack_110[1] = 0;
  sVar3 = 0;
  asStack_110[0] = *(short *)(*param_4 * 2 + param_2);
  lVar4 = 0x15;
  *param_3 = 2;
  do {
    sVar2 = *(short *)(param_4[1] * 2 + param_2);
    if (sVar2 == 0) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar1 = *param_3;
      *param_3 = sVar1 + 2;
      asStack_110[sVar1] = sVar2;
      asStack_110[sVar1 + 1] = sVar3;
      sVar3 = 0;
    }
    sVar2 = *(short *)(param_4[2] * 2 + param_2);
    if (sVar2 == 0) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar1 = *param_3;
      *param_3 = sVar1 + 2;
      asStack_110[sVar1] = sVar2;
      asStack_110[sVar1 + 1] = sVar3;
      sVar3 = 0;
    }
    sVar2 = *(short *)(param_4[3] * 2 + param_2);
    if (sVar2 == 0) {
      sVar3 = sVar3 + 1;
    }
    else {
      sVar1 = *param_3;
      *param_3 = sVar1 + 2;
      asStack_110[sVar1] = sVar2;
      asStack_110[sVar1 + 1] = sVar3;
      sVar3 = 0;
    }
    lVar4 = lVar4 + -1;
    param_4 = param_4 + 3;
  } while (lVar4 != 0);
  memcpy(param_2,asStack_110,((__int64)*param_3 & 0x7fffffffU) << 1);
  return ((~(__int64)*param_3 & 0xffffffffU) >> 0x1f) +
         (unsigned __int64)((unsigned __int64)(__int64)*param_3 < 3) & 1;
}

