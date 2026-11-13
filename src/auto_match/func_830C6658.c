unsigned __int64 fn_830C6658(int param_1,int param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  short sVar7;
  unsigned int uVar6;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  
  sVar7 = (short)param_2;
  uVar9 = (__int64)sVar7 + 0x100;
  uVar2 = *(int *)(param_1 + 0x558) * 2 + (param_2 >> 0x10) + -1 >> 1;
  uVar6 = uVar2 + 0x40;
  if (((uVar9 & 0xffffffff) >> 2 | (unsigned __int64)uVar6) < 0x80) {
    return (unsigned __int64)*(unsigned short *)(*(int *)(param_1 + 0x5c8) + uVar6 * 2) << 0x10 |
           (__int64)*(short *)(*(int *)(param_1 + 0x5cc) + (int)((uVar9 & 0xffffffff) << 1)) &
           0xffffffff0000ffffU;
  }
  if ((uVar9 & 0xffffffff) < 0x200) {
    uVar9 = (unsigned __int64)*(short *)(*(int *)(param_1 + 0x5cc) + (int)((uVar9 & 0xffffffff) << 1));
  }
  else {
    uVar1 = *(unsigned short *)(param_1 + 0x3e);
    uVar9 = (unsigned __int64)uVar1 - 1;
    uVar3 = (int)sVar7 + (unsigned int)uVar1;
    uVar5 = (int)sVar7 - (int)uVar9 ^ uVar3;
    uVar9 = uVar9 & ~(__int64)((int)(uVar5 | uVar3) >> 0x1f) |
            (__int64)((int)uVar3 >> 0x1f) & -(unsigned __int64)uVar1 |
            (__int64)((int)uVar5 >> 0x1f) & (__int64)sVar7;
  }
  if (0x7f < uVar6) {
    uVar1 = *(unsigned short *)(param_1 + 0x40);
    uVar8 = ((unsigned __int64)uVar2 & 0x7fffffff) << 1;
    uVar10 = (unsigned __int64)uVar1 - 2;
    iVar4 = (int)uVar8;
    uVar2 = iVar4 + (unsigned int)uVar1;
    uVar6 = iVar4 - (int)uVar10 ^ uVar2;
    return (((uVar10 & ~(__int64)((int)(uVar6 | uVar2) >> 0x1f) |
             (__int64)((int)uVar2 >> 0x1f) & -(unsigned __int64)uVar1) & 0xffffffff |
            (__int64)((int)uVar6 >> 0x1f) & uVar8) & 0xffff) << 0x10 | uVar9 & 0xffffffff0000ffff;
  }
  return (unsigned __int64)*(unsigned short *)(*(int *)(param_1 + 0x5c8) + uVar6 * 2) << 0x10 |
         uVar9 & 0xffffffff0000ffff;
}

