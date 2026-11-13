#define true 1
#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


__int64 fn_82A474B0(__int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  __int64 lVar9;
  unsigned char *pbVar10;
  
  lVar9 = (param_3 & 0x1fffff) * 0x800 + param_1;
  uVar7 = 0;
  while( true ) {
    if ((param_1 + param_2 & 0xffffffffU) < (lVar9 + 0x800U & 0xffffffff)) {
      return 0;
    }
    pbVar10 = (unsigned char *)lVar9;
    uVar6 = (*pbVar10 >> 2) + uVar7;
    if ((param_4 & 0xffffffff) < (uVar6 & 0xffffffff)) break;
    lVar9 = ((unsigned __int64)pbVar10[3] + 1) * 0x800 + lVar9;
    uVar7 = uVar6;
  }
  uVar6 = ((((unsigned __int64)*pbVar10 & 3) << 8 | (unsigned __int64)pbVar10[1]) << 5 |
          (unsigned __int64)(pbVar10[2] >> 3)) + 0x20;
  for (lVar8 = param_4 - uVar7; lVar8 != 0; lVar8 = lVar8 + -1) {
    iVar2 = (int)((uVar6 & 0xffffffff) >> 3);
    uVar4 = (unsigned int)pbVar10[iVar2];
    iVar3 = (int)(uVar6 & 7);
    if ((uVar6 & 7) < 2) {
      bVar1 = pbVar10[iVar2 + 1];
      uVar5 = 1 - iVar3;
    }
    else {
      uVar5 = 9 - iVar3;
      bVar1 = pbVar10[iVar2 + 2];
      uVar4 = (unsigned int)CONCAT11(pbVar10[iVar2],pbVar10[iVar2 + 1]);
    }
    uVar6 = ((unsigned __int64)((uVar4 << 8 | (unsigned int)bVar1) >> (uVar5 & 0x3f)) & 0x7fff) + uVar6;
  }
  return (lVar9 - param_1 & 0x1fffffffU) * 8 + uVar6;
}

