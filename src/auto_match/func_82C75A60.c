unsigned __int64 fn_82C75A60(int param_1,int param_2,unsigned int param_3,int param_4,int param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  
  uVar7 = (unsigned __int64)(param_4 >> 0x10);
  uVar2 = (unsigned __int64)(short)param_4;
  lVar5 = 0;
  if (param_2 == 4) {
    uVar2 = (uVar2 & 0x7fffffff) << 1;
    uVar7 = ((unsigned __int64)(unsigned int)(param_4 >> 0x10) & 0x7fffffff) << 1;
LAB_82c75a98:
    lVar5 = 1;
  }
  else if (param_2 == 2) goto LAB_82c75a98;
  uVar4 = -lVar5 - 0xf;
  if (param_2 != 1) {
    uVar4 = -lVar5 - 7;
  }
  uVar1 = (int)((uVar4 & 0xffffffff) << 2) << (int)lVar5;
  uVar4 = ~((__int64)(param_2 * 2 + -1) * (__int64)(int)lVar5);
  uVar6 = uVar4 & ((unsigned __int64)*(unsigned short *)(param_5 + 0x12) + ((unsigned __int64)param_3 & 1)) * 0x20 + uVar2
  ;
  lVar3 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x34) * 8 + lVar5) * 4 + -4;
  lVar5 = ((unsigned __int64)*(unsigned short *)(param_1 + 0x32) * 8 + lVar5) * 4 + -4;
  uVar4 = uVar4 & (((unsigned __int64)(unsigned int)((int)param_3 >> 1) & 1) +
                  (unsigned __int64)*(unsigned short *)(param_5 + 0x10)) * 0x20 + uVar7;
  if ((int)uVar6 < (int)uVar1) {
    lVar5 = uVar1 - uVar6;
LAB_82c75b34:
    uVar2 = lVar5 + uVar2;
  }
  else if ((int)lVar5 < (int)uVar6) {
    lVar5 = lVar5 - uVar6;
    goto LAB_82c75b34;
  }
  if ((int)uVar4 < (int)uVar1) {
    lVar3 = uVar1 - uVar4;
  }
  else {
    if ((int)uVar4 <= (int)lVar3) goto LAB_82c75b58;
    lVar3 = lVar3 - uVar4;
  }
  uVar7 = lVar3 + uVar7;
LAB_82c75b58:
  if (param_2 == 4) {
    uVar2 = (unsigned __int64)((int)uVar2 >> 1);
    uVar7 = (unsigned __int64)((int)uVar7 >> 1);
  }
  return (uVar7 & 0xffff) << 0x10 | uVar2 & 0xffffffff0000ffff;
}

