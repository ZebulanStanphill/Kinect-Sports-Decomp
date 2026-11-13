__int64 fn_82F2A9C8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int *param_4,
                      unsigned int *param_5,unsigned int *param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar5;
  
  uVar3 = (unsigned __int64)((int)param_3 >> 0x1f);
  lVar4 = 0;
  uVar3 = (param_3 ^ uVar3) - uVar3;
  iVar1 = param_4[3];
  iVar5 = param_4[6];
  if ((unsigned __int64)(unsigned int)param_4[4] < (param_2 & 0xffffffff)) {
    if ((uVar3 & 0xffffffff) <= (unsigned __int64)(unsigned int)param_4[5]) {
      uVar2 = *(unsigned int *)((int)((uVar3 & 0xffffffff) << 2) + param_4[1]);
      if ((param_2 & 0xffffffff) <= ((unsigned __int64)uVar2 & 0x7fffffff) << 1) {
        param_2 = (param_2 - uVar2) - 1;
        lVar4 = (unsigned __int64)*(unsigned int *)(iVar5 * 8 + iVar1 + 4) + 2;
        goto LAB_82f2aa70;
      }
    }
    iVar5 = iVar5 << 3;
LAB_82f2aa9c:
    uVar2 = *(unsigned int *)(iVar5 + iVar1 + 4);
    if ((unsigned __int64)*param_5 < (param_2 & 0xffffffff)) {
      *param_5 = (unsigned int)param_2;
    }
    if ((unsigned __int64)*param_6 < (uVar3 & 0xffffffff)) {
      *param_6 = (unsigned int)uVar3;
    }
    lVar4 = (unsigned __int64)uVar2 + 0x11;
  }
  else {
    uVar2 = *(unsigned int *)((int)((param_2 & 0xffffffff) << 2) + *param_4);
    if ((unsigned __int64)uVar2 < (uVar3 & 0xffffffff)) {
      iVar5 = iVar5 * 8;
      if (((unsigned __int64)uVar2 & 0x7fffffff) << 1 < (uVar3 & 0xffffffff)) goto LAB_82f2aa9c;
      uVar3 = uVar3 - uVar2;
      lVar4 = (unsigned __int64)*(unsigned int *)(iVar5 + iVar1 + 4) + 1;
    }
LAB_82f2aa70:
    lVar4 = (unsigned __int64)
            *(unsigned int *)((int)((*(unsigned int *)((int)((param_2 & 0xffffffff) << 2) + param_4[2]) + uVar3 +
                             (unsigned __int64)(unsigned int)param_4[7] & 0xffffffff) << 3) + iVar1 + 4) + lVar4 +
            1;
  }
  return lVar4;
}

