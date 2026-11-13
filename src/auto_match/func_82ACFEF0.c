unsigned __int64 fn_82ACFEF0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
                       unsigned int param_5,unsigned int *param_6)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  
  uVar6 = param_2 & 0xf;
  uVar10 = (unsigned __int64)(*(unsigned int *)(param_5 + 8) >> 1) & 0xf;
  uVar5 = *(unsigned int *)(param_4 + 8) >> 0x13 & 7;
  uVar7 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar8 = uVar10;
  if (uVar5 != 0) {
    piVar9 = (int *)(param_4 + 0x2c);
    do {
      uVar2 = uVar6 & ~(uVar6 - 1);
      uVar6 = uVar6 - uVar2;
      if (((unsigned int *)*piVar9)[3] == param_5) {
        uVar7 = uVar2 | uVar7;
        uVar4 = *(unsigned int *)*piVar9 >> 5 & 3;
        iVar1 = uVar4 << 1;
        uVar8 = uVar8 & ~(unsigned __int64)(unsigned int)(1 << uVar4);
        uVar12 = 0x1f - (int)LZCOUNT((int)uVar2) << iVar1 | uVar12 & ~(3 << iVar1);
      }
      uVar11 = uVar11 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar11 < uVar5);
  }
  uVar6 = uVar6 & ~param_3;
  for (; uVar8 != 0; uVar8 = uVar8 - uVar2) {
    uVar2 = uVar8 & ~(uVar8 - 1);
    uVar3 = uVar6 & ~(uVar6 - 1);
    uVar5 = (unsigned int)((0x1fU - LZCOUNT((int)uVar2) & 0xffffffff) << 1);
    uVar6 = uVar6 - uVar3;
    uVar12 = 0x1f - (int)LZCOUNT((int)uVar3) << (uVar5 & 0x3e) | uVar12 & ~(3 << (uVar5 & 0x3e));
    uVar7 = uVar3 | uVar7;
  }
  uVar5 = 0;
  do {
    uVar6 = 0x20U - (LZCOUNT((int)uVar10) + 1) & 0x1f;
    uVar6 = 0x100000001 << uVar6 | 0x100000001U >> 0x40 - uVar6;
    uVar10 = uVar10 - (uVar6 & 0xffffffff);
    uVar5 = uVar5 << 2 |
            uVar12 >> ((unsigned int)((0x1fU - LZCOUNT((int)uVar6) & 0xffffffff) << 1) & 0x3e) & 3;
  } while (uVar10 != 0);
  *param_6 = uVar5;
  return param_2 & 0xfffffff0 | uVar7 & 0xffffffff0000000f;
}

