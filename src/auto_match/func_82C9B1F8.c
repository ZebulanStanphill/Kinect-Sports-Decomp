unsigned __int64 fn_82C9B1F8(int param_1,unsigned int param_2,int param_3,int param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  
  uVar3 = param_2 & 1;
  uVar4 = (unsigned __int64)(short)param_3;
  uVar5 = (unsigned __int64)(param_3 >> 0x10);
  uVar11 = (unsigned __int64)(uVar3 == 0);
  lVar1 = ((unsigned __int64)(*(unsigned short *)(param_1 + 0x32) >> uVar3) * 8 + uVar11) * 4;
  lVar2 = ((unsigned __int64)(*(unsigned short *)(param_1 + 0x34) >> uVar3) * 8 + uVar11) * 4;
  uVar6 = (unsigned __int64)(*(unsigned short *)(param_4 + 0x10) >> uVar3) * 0x20 + uVar5;
  uVar9 = (unsigned __int64)(*(unsigned short *)(param_4 + 0x12) >> uVar3) * 0x20 + uVar4;
  uVar8 = (unsigned __int64)(unsigned int)((int)((-uVar11 - 7 & 0xffffffff) << 2) << (unsigned int)(uVar3 == 0));
  lVar7 = lVar1 + -4;
  lVar10 = lVar2 + -4;
  if ((unsigned int)LZCOUNT(param_2 - 2) >> 5 == 0) {
    uVar9 = ~(uVar11 * 3) & uVar9;
    uVar6 = ~(uVar11 * 3) & uVar6;
  }
  else {
    uVar8 = uVar8 + 4;
    lVar7 = lVar1 + -8;
    lVar10 = lVar2 + -8;
  }
  if ((int)uVar9 < (int)uVar8) {
    lVar7 = uVar8 - uVar9;
  }
  else {
    if ((int)uVar9 <= (int)lVar7) goto code_r0x82c9b2dc;
    lVar7 = lVar7 - uVar9;
  }
  uVar4 = lVar7 + uVar4;
code_r0x82c9b2dc:
  if ((int)uVar6 < (int)uVar8) {
    return ((uVar8 - uVar6) + uVar5 & 0xffff) << 0x10 | uVar4 & 0xffffffff0000ffff;
  }
  if ((int)lVar10 < (int)uVar6) {
    uVar5 = (lVar10 - uVar6) + uVar5;
  }
  return (uVar5 & 0xffff) << 0x10 | uVar4 & 0xffffffff0000ffff;
}

