__int64 fn_82F2A8A8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,
                      unsigned int *param_5,unsigned int *param_6)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  uVar2 = (unsigned __int64)((int)param_3 >> 0x1f);
  lVar3 = 0;
  uVar2 = (param_3 ^ uVar2) - uVar2;
  if ((unsigned __int64)(unsigned int)param_4[4] < (param_2 & 0xffffffff)) {
    if ((uVar2 & 0xffffffff) <= (unsigned __int64)(unsigned int)param_4[5]) {
      uVar1 = *(unsigned int *)((int)((uVar2 & 0xffffffff) << 2) + param_4[1]);
      if ((param_2 & 0xffffffff) <= ((unsigned __int64)uVar1 & 0x7fffffff) << 1) {
        param_2 = (param_2 - uVar1) - 1;
        lVar3 = (unsigned __int64)*(unsigned int *)(param_4[6] * 8 + param_4[3] + 4) + 2;
        goto LAB_82f2a95c;
      }
    }
    uVar1 = *(unsigned int *)(param_4[6] * 8 + param_4[3] + 4);
LAB_82f2a99c:
    if ((unsigned __int64)*param_5 < (param_2 & 0xffffffff)) {
      *param_5 = (unsigned int)param_2;
    }
    if ((unsigned __int64)*param_6 < (uVar2 & 0xffffffff)) {
      *param_6 = (unsigned int)uVar2;
    }
    return (unsigned __int64)uVar1 + 0x11;
  }
  uVar1 = *(unsigned int *)((int)((param_2 & 0xffffffff) << 2) + *param_4);
  if ((unsigned __int64)uVar1 < (uVar2 & 0xffffffff)) {
    if (((unsigned __int64)uVar1 & 0x7fffffff) << 1 < (uVar2 & 0xffffffff)) {
      uVar1 = *(unsigned int *)(param_4[6] * 8 + param_4[3] + 4);
      goto LAB_82f2a99c;
    }
    uVar2 = uVar2 - uVar1;
    lVar3 = (unsigned __int64)*(unsigned int *)(param_4[6] * 8 + param_4[3] + 4) + 1;
  }
LAB_82f2a95c:
  return (unsigned __int64)
         *(unsigned int *)((int)((*(unsigned int *)((int)((param_2 & 0xffffffff) << 2) + param_4[2]) + uVar2 &
                         0xffffffff) << 3) + param_4[3] + -4) + lVar3 + 1;
}

