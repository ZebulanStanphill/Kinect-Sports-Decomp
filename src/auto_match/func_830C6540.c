unsigned __int64 fn_830C6540(int param_1,int param_2)

{
  unsigned short uVar1;
  int iVar2;
  short sVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  sVar3 = (short)param_2;
  uVar7 = (__int64)sVar3 + 0x100;
  uVar4 = (param_2 >> 0x11) + 0x40;
  if (((uVar7 & 0xffffffff) >> 2 | (unsigned __int64)uVar4) < 0x80) {
    return (unsigned __int64)*(unsigned short *)(*(int *)(param_1 + 0x5c0) + uVar4 * 2) << 0x10 |
           (__int64)*(short *)(*(int *)(param_1 + 0x5c4) + (int)((uVar7 & 0xffffffff) << 1)) &
           0xffffffff0000ffffU;
  }
  if ((uVar7 & 0xffffffff) < 0x200) {
    uVar7 = (unsigned __int64)*(short *)(*(int *)(param_1 + 0x5c4) + (int)((uVar7 & 0xffffffff) << 1));
  }
  else {
    uVar1 = *(unsigned short *)(param_1 + 0x3e);
    uVar7 = (unsigned __int64)uVar1 - 1;
    uVar5 = (int)sVar3 + (unsigned int)uVar1;
    uVar6 = (int)sVar3 - (int)uVar7 ^ uVar5;
    uVar7 = uVar7 & ~(__int64)((int)(uVar6 | uVar5) >> 0x1f) |
            (__int64)((int)uVar5 >> 0x1f) & -(unsigned __int64)uVar1 |
            (__int64)((int)uVar6 >> 0x1f) & (__int64)sVar3;
  }
  if (0x7f < uVar4) {
    uVar9 = 1 - (unsigned __int64)*(unsigned short *)(param_1 + 0x40);
    uVar10 = ((unsigned __int64)(unsigned int)(param_2 >> 0x11) & 0x7fffffff) * 2 +
             ((unsigned __int64)*(unsigned int *)(param_1 + 0x558) & 0x7fffffff) * -2 + 1;
    uVar8 = (unsigned __int64)*(unsigned short *)(param_1 + 0x40) - 1;
    iVar2 = (int)uVar10;
    uVar4 = iVar2 - (int)uVar9;
    uVar5 = iVar2 - (int)uVar8 ^ uVar4;
    return ((uVar8 & ~(__int64)((int)(uVar5 | uVar4) >> 0x1f) |
             (__int64)((int)uVar4 >> 0x1f) & uVar9 | (__int64)((int)uVar5 >> 0x1f) & uVar10) &
           0xffff) << 0x10 | uVar7 & 0xffffffff0000ffff;
  }
  return (unsigned __int64)*(unsigned short *)(*(int *)(param_1 + 0x5c0) + uVar4 * 2) << 0x10 |
         uVar7 & 0xffffffff0000ffff;
}

