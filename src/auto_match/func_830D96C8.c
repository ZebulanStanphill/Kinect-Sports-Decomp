unsigned __int64 fn_830D96C8(int param_1,int param_2,int param_3)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  short sVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  
  uVar7 = (unsigned __int64)(param_2 >> 0x10);
  sVar5 = (short)param_2;
  uVar2 = (unsigned __int64)sVar5;
  lVar1 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x32) & 0x3ffffffe) * 4;
  if ((param_2 >> 0x10 & 4U) == 0) {
    lVar4 = -8;
    lVar3 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x34) & 0x3ffffffe) << 2;
  }
  else {
    lVar4 = -9;
    lVar3 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x34) & 0x3ffffffe) * 4 + 1;
  }
  if (sVar5 != 0x4000) {
    lVar8 = (unsigned __int64)(*(unsigned short *)(param_3 + 0x12) >> 1) * 8 + (__int64)((int)sVar5 >> 2);
    lVar6 = (unsigned __int64)(*(unsigned short *)(param_3 + 0x10) >> 1) * 8 + (__int64)(param_2 >> 0x12);
    if ((int)lVar8 < -8) {
      uVar2 = uVar2 + (lVar8 + 8U & 0x3fffffff) * -4;
    }
    else if ((int)lVar1 < (int)lVar8) {
      uVar2 = (lVar1 - lVar8 & 0x3fffffffU) * 4 + uVar2;
    }
    if ((int)lVar6 < (int)lVar4) {
      return ((lVar4 - lVar6 & 0x3fffffffU) * 4 + uVar7 & 0xffff) << 0x10 |
             uVar2 & 0xffffffff0000ffff;
    }
    if ((int)lVar3 < (int)lVar6) {
      uVar7 = (lVar3 - lVar6 & 0x3fffffffU) * 4 + uVar7;
    }
  }
  return (uVar7 & 0xffff) << 0x10 | uVar2 & 0xffffffff0000ffff;
}

