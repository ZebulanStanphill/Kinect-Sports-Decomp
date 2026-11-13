#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))


__int64 fn_82A47590(__int64 param_1,__int64 param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned char *pbVar12;
  
  lVar11 = (param_3 & 0x1fffff) * 0x800 + param_1;
  lVar8 = ((unsigned __int64)*(unsigned char *)((int)lVar11 + 3) + 1) * 0x800;
  lVar6 = lVar8 + lVar11;
  while (lVar10 = lVar6, (lVar10 + 0x800U & 0xffffffff) <= (param_1 + param_2 & 0xffffffffU)) {
    lVar8 = ((unsigned __int64)*(unsigned char *)((int)lVar10 + 3) + 1) * 0x800;
    lVar11 = lVar10;
    lVar6 = lVar8 + lVar10;
  }
  if ((*(unsigned char *)lVar11 & 0xfc) == 0) {
    lVar11 = lVar11 - lVar8;
  }
  pbVar12 = (unsigned char *)lVar11;
  uVar2 = (unsigned __int64)(*pbVar12 >> 2);
  uVar7 = ((((unsigned __int64)*pbVar12 & 3) << 8 | (unsigned __int64)pbVar12[1]) << 5 |
          (unsigned __int64)(pbVar12[2] >> 3)) + 0x20;
  while (uVar2 = uVar2 - 1, uVar2 != 0) {
    iVar3 = (int)((uVar7 & 0xffffffff) >> 3);
    uVar5 = (unsigned int)pbVar12[iVar3];
    iVar4 = (int)(uVar7 & 7);
    if ((uVar7 & 7) < 2) {
      bVar1 = pbVar12[iVar3 + 1];
      uVar9 = 1 - iVar4;
    }
    else {
      uVar9 = 9 - iVar4;
      bVar1 = pbVar12[iVar3 + 2];
      uVar5 = (unsigned int)CONCAT11(pbVar12[iVar3],pbVar12[iVar3 + 1]);
    }
    uVar7 = ((unsigned __int64)((uVar5 << 8 | (unsigned int)bVar1) >> (uVar9 & 0x3f)) & 0x7fff) + uVar7;
  }
  return (lVar11 - param_1 & 0x1fffffffU) * 8 + uVar7;
}

